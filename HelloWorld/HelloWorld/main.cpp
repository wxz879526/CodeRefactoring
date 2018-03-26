//
//  main.cpp
//  HelloWorld
//
//  Created by 文信周 on 2018/3/14.
//  Copyright © 2018年 文信周. All rights reserved.
//

#include <iostream>
#include "Movie.hpp"
#include "Rental.hpp"
#include "Customer.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    Movie m("十面埋伏", Movie::REGULAR);
    Rental r(m, 7);
    Customer custom("wenxinzhou");
    custom.AddRental(r);

    std::cout << custom.statement().c_str() << std::endl;
    return 0;
}
