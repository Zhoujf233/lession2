//
//  main.cpp
//  box
//
//  Created by JF Zhou on 2019/7/31.
//  Copyright © 2019 JF Zhou. All rights reserved.
//

#include <iostream>
using namespace std;

class Box
{
public:
    Box(int h,int w,int len):height(h),width(w),length(len){};//直接在类体中定义构造函数
    int volume();
private:
    int height;
    int width;
    int length;
};

/*Box::Box(int h,int w,int len)    //:height(h),width(w),length(len){} 初始化的数据成员较多时，这种方法更方便、简练
{
    height = h;
    width = w;
    length = len;
}                //类外定义带参数的构造函数
*/
int Box::volume()
{
    return(height * width * length);
}

int main(int argc, const char * argv[])
{
    Box box1(12,25,30);
    cout<<"The volume of box1 is "<<box1.volume()<<endl;
    Box box2(15,30,21);
    cout<<"The volune of box2 is "<<box2.volume()<<endl;
    return 0;
}
