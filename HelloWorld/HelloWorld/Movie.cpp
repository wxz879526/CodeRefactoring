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
