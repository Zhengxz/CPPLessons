//
//  main.cpp
//  L02NS
//
//  Created by 郑锡真 on 15/4/7.
//  Copyright (c) 2015年 com.zhengxizhen. All rights reserved.
//

#include <iostream>
#include "People.h"

using namespace zhengxz;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    People *p = new People();
    p->sayHello();
    
    return 0;
}
