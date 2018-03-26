//
//  Customer.cpp
//  HelloWorld
//
//  Created by 文信周 on 2018/3/22.
//  Copyright © 2018年 文信周. All rights reserved.
//

#include "Customer.hpp"

Customer::Customer(std::string name)
: _name(name)
{
    
}

void Customer::AddRental(Rental item)
{
    _list.push_back(item);
}

std::string Customer::getName()
{
    return _name;
}

std::string Customer::statement()
{
    double totalAmount = 0;
    int frequentRenterPoints = 0;
    
    auto result = "Rental record for " + getName() + "\n";
    for (auto rental : _list)
    {
        double thisAmount = 0;
        switch (rental.getMovie().getPriceCode()) {
            case Movie::REGULAR:
                thisAmount += 2;
                if (rental.getRentalDays() > 2)
                    thisAmount += (rental.getRentalDays() - 2) * 1.5;
                break;
            case Movie::NEW_RELEASE:
                thisAmount += (rental.getRentalDays() * 3);
                break;
            case Movie::CHILDRENS:
                thisAmount += 1.5;
                if (rental.getRentalDays() > 3)
                    thisAmount += (rental.getRentalDays() - 3) * 1.5;
                break;
            default:
                break;
        }
        
        ++frequentRenterPoints;
        
        if (rental.getMovie().getPriceCode() == Movie::NEW_RELEASE && rental.getRentalDays() > 1)
            ++frequentRenterPoints;
        
        result += "\t" + rental.getMovie().getTitle() + "\t" + std::to_string(thisAmount) + "\n";
        totalAmount += thisAmount;
    }
    
    result += "Amount owned is " + std::to_string(totalAmount) + "\n";
    result += "You earned " + std::to_string(frequentRenterPoints) + " frequent renter points";
    return result;
}
