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
