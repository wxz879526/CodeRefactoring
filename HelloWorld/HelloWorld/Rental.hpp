//
//  Rental.hpp
//  HelloWorld
//
//  Created by 文信周 on 2018/3/22.
//  Copyright © 2018年 文信周. All rights reserved.
//

#ifndef Rental_hpp
#define Rental_hpp

#include "Movie.hpp"

class Rental
{
public:
    Rental(Movie movie, int days);
    
    Movie getMovie();
    int getRentalDays();
    
private:
    Movie _movie;
    int _days;
};

#endif /* Rental_hpp */
