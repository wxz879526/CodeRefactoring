//
//  NewReleaseMovie.cpp
//  HelloWorld
//
//  Created by 文信周 on 2018/3/27.
//  Copyright © 2018年 文信周. All rights reserved.
//

#include "NewReleaseMovie.hpp"

double NewReleaseMovie::getCharge(int rentalDays)
{
    return rentalDays * 3;
}

int NewReleaseMovie::getFrequentPoints(int rentalDays)
{
    int frequentRenterPoints = 1;
    if (rentalDays > 1)
        ++frequentRenterPoints;
    
    return frequentRenterPoints;
}
