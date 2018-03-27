//
//  IPrice.h
//  HelloWorld
//
//  Created by 文信周 on 2018/3/27.
//  Copyright © 2018年 文信周. All rights reserved.
//

#ifndef IPrice_h
#define IPrice_h

class IPrice
{
public:
    virtual double getCharge(int rentalDays) = 0;
    virtual int getFrequentPoints(int rentalDays) = 0;
};

#endif /* IPrice_h */
