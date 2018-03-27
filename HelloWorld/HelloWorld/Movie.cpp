//
//  Movie.cpp
//  HelloWorld
//
//  Created by 文信周 on 2018/3/22.
//  Copyright © 2018年 文信周. All rights reserved.
//

#include "Movie.hpp"

#include "RegularMovie.hpp"
#include "ChildrenMovie.hpp"
#include "NewReleaseMovie.hpp"

Movie::Movie(std::string title, int code)
: _title(title)
, _priceCode(code)
, _impl(nullptr)
{
    setPriceCode(code);
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
    
    switch (code) {
        case Movie::REGULAR:
            _impl = new RegularMovie();
            break;
        case Movie::NEW_RELEASE:
            _impl = new NewReleaseMovie();
            break;
        case Movie::CHILDRENS:
            _impl = new ChildrenMovie();
            break;
        default:
            break;
    }
}

double Movie::getCharge(int rentalDays)
{
    if (_impl != nullptr)
        return _impl->getCharge(rentalDays);
    
    return 0;
}

int Movie::getFrequententerPoints(int rentalDays)
{
    if (_impl != nullptr)
        return _impl->getFrequentPoints(rentalDays);
    
    return 0;
}
