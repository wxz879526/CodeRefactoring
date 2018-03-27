//
//  RegularMovie.hpp
//  HelloWorld
//
//  Created by 文信周 on 2018/3/27.
//  Copyright © 2018年 文信周. All rights reserved.
//

#ifndef RegularMovie_hpp
#define RegularMovie_hpp

#include "IPrice.h"

class RegularMovie : public IPrice
{
public:
    virtual double getCharge(int rentalDays) override;
    virtual int getFrequentPoints(int rentalDays) override;
};

#endif /* RegularMovie_hpp */
