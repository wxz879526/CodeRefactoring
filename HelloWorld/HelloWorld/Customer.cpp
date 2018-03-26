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
    auto result = "Rental record for " + getName() + "\n";
    for (auto rental : _list)
    {
        result += "\t" + rental.getMovie().getTitle() + "\t" + std::to_string(rental.getCharge()) + "\n";
    }
    
    result += "Amount owned is " + std::to_string(getTotalAmount()) + "\n";
    result += "You earned " + std::to_string(getTotalFrequentPoints()) + " frequent renter points";
    return result;
}

double Customer::getTotalAmount()
{
    double totalAmount = 0;
    
    for (auto r : _list)
    {
        totalAmount += r.getCharge();
    }
    
    return totalAmount;
}

int Customer::getTotalFrequentPoints()
{
    int totalFrequentPoints = 0;
    
    for (auto r : _list)
    {
        totalFrequentPoints += r.getFrequententerPoints();
    }
    
    return totalFrequentPoints;
}
