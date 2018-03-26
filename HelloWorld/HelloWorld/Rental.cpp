//
//  Rental.cpp
//  HelloWorld
//
//  Created by 文信周 on 2018/3/22.
//  Copyright © 2018年 文信周. All rights reserved.
//

#include "Rental.hpp"

Rental::Rental(Movie movie, int days)
: _movie(movie)
, _days(days)
{
    
}

Movie Rental::getMovie()
{
    return _movie;
}

int Rental::getRentalDays()
{
    return _days;
}

double Rental::getCharge()
{
    double thisAmount = 0;
    switch (getMovie().getPriceCode()) {
        case Movie::REGULAR:
            thisAmount += 2;
            if (getRentalDays() > 2)
                thisAmount += (getRentalDays() - 2) * 1.5;
            break;
        case Movie::NEW_RELEASE:
            thisAmount += (getRentalDays() * 3);
            break;
        case Movie::CHILDRENS:
            thisAmount += 1.5;
            if (getRentalDays() > 3)
                thisAmount += (getRentalDays() - 3) * 1.5;
            break;
        default:
            break;
    }
    
    return thisAmount;
}

int Rental::getFrequententerPoints()
{
    int frequentRenterPoints = 1;
    
    if (getMovie().getPriceCode() == Movie::NEW_RELEASE && getRentalDays() > 1)
        ++frequentRenterPoints;
    
    return frequentRenterPoints;
}
