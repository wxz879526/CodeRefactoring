//
//  Movie.hpp
//  HelloWorld
//
//  Created by 文信周 on 2018/3/22.
//  Copyright © 2018年 文信周. All rights reserved.
//

#ifndef Movie_hpp
#define Movie_hpp

#include <string>

#include "IPrice.h"

class Movie
{
public:
    static const int CHILDRENS = 2;
    static const int REGULAR = 0;
    static const int NEW_RELEASE = 1;
    
    Movie(std::string title, int code);
    
    std::string getTitle();
    
    void setTitle(std::string title);
    
    int getPriceCode();
    
    void setPriceCode(int code);
    
    double getCharge(int rentalDays);
    int getFrequententerPoints(int rentalDays);
    
private:
    std::string _title;
    int _priceCode;
    IPrice * _impl;
};

#endif /* Movie_hpp */
