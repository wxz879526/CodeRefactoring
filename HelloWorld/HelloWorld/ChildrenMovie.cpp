//
//  ChildrenMovie.cpp
//  HelloWorld
//
//  Created by 文信周 on 2018/3/27.
//  Copyright © 2018年 文信周. All rights reserved.
//

#include "ChildrenMovie.hpp"

double ChildrenMovie::getCharge(int rentalDays)
{
    double thisAmount = 1.5;
    if (rentalDays > 3)
        thisAmount += (rentalDays - 3) * 1.5;
    return thisAmount;
}

int ChildrenMovie::getFrequentPoints(int rentalDays)
{
    return 1;
}
