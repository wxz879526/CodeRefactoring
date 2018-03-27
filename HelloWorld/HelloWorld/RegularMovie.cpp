//
//  RegularMovie.cpp
//  HelloWorld
//
//  Created by 文信周 on 2018/3/27.
//  Copyright © 2018年 文信周. All rights reserved.
//

#include "RegularMovie.hpp"

double RegularMovie::getCharge(int rentalDays)
{
    double thisAmount = 2;
    if (rentalDays > 2)
        thisAmount += (rentalDays - 2) * 1.5;
    
    return thisAmount;
}

int RegularMovie::getFrequentPoints(int rentalDays)
{
    return 1;
}
