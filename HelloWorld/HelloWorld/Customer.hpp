//
//  Customer.hpp
//  HelloWorld
//
//  Created by 文信周 on 2018/3/22.
//  Copyright © 2018年 文信周. All rights reserved.
//

#ifndef Customer_hpp
#define Customer_hpp

#include <list>
#include <string>
#include "Rental.hpp"

class Customer
{
public:
    Customer(std::string name);
    
    void AddRental(Rental item);
    std::string getName();
    
    std::string statement();
    
private:
    std::string _name;
    std::list<Rental> _list;
};

#endif /* Customer_hpp */
