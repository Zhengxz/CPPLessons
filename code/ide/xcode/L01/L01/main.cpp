//
//  main.cpp
//  L01
//
//  Created by 郑锡真 on 15/4/7.
//  Copyright (c) 2015年 com.zhengxizhen. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include "People.h"
//class People {
//    
//    
//public:
//    void sayHello(){
//        printf("Hello CPP\n");
//    }
//};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    People *p = new People();// new 创建对象关键字
    p->sayHello();
    delete p;//delete 删除占用的内存与 new 相对应
//    C语言 分配内存与销毁内存相对应的关键字
//    malloc(<#size_t#>)
//    free(<#void *#>)
    return 0;
}
