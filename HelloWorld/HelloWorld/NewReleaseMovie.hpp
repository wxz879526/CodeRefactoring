//
//  NewReleaseMovie.hpp
//  HelloWorld
//
//  Created by 文信周 on 2018/3/27.
//  Copyright © 2018年 文信周. All rights reserved.
//

#ifndef NewReleaseMovie_hpp
#define NewReleaseMovie_hpp

#include "IPrice.h"

class NewReleaseMovie : public IPrice
{
public:
    virtual double getCharge(int rentalDays) override;
    virtual int getFrequentPoints(int rentalDays) override;
};

#endif /* NewReleaseMovie_hpp */
