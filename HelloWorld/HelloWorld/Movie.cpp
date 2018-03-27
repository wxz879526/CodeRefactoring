//
//  Movie.cpp
//  HelloWorld
//
//  Created by 文信周 on 2018/3/22.
//  Copyright © 2018年 文信周. All rights reserved.
//

#include "Movie.hpp"

Movie::Movie(std::string title, int code)
: _title(title)
, _priceCode(code)
{
   
}

std::string Movie::getTitle()
{
    return _title;
}

void Movie::setTitle(std::string title)
{
    _title = title;
}

int Movie::getPriceCode()
{
    return _priceCode;
}

void Movie::setPriceCode(int code)
{
    _priceCode = code;
}

double Movie::getCharge(int rentalDays)
{
    double thisAmount = 0;
    switch (getPriceCode()) {
        case Movie::REGULAR:
            thisAmount += 2;
            if (rentalDays > 2)
                thisAmount += (rentalDays - 2) * 1.5;
            break;
        case Movie::NEW_RELEASE:
            thisAmount += (rentalDays * 3);
            break;
        case Movie::CHILDRENS:
            thisAmount += 1.5;
            if (rentalDays > 3)
                thisAmount += (rentalDays - 3) * 1.5;
            break;
        default:
            break;
    }
    
    return thisAmount;
}

int Movie::getFrequententerPoints(int rentalDays)
{
    int frequentRenterPoints = 1;
    
    if (getPriceCode() == Movie::NEW_RELEASE && rentalDays > 1)
        ++frequentRenterPoints;
    
    return frequentRenterPoints;
}
