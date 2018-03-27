//
//  ChildrenMovie.hpp
//  HelloWorld
//
//  Created by 文信周 on 2018/3/27.
//  Copyright © 2018年 文信周. All rights reserved.
//

#ifndef ChildrenMovie_hpp
#define ChildrenMovie_hpp

#include "IPrice.h"

class ChildrenMovie : public IPrice
{
public:
    virtual double getCharge(int rentalDays) override;
    virtual int getFrequentPoints(int rentalDays) override;
};

#endif /* ChildrenMovie_hpp */
