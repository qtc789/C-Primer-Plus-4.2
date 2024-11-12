// 4.2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
int main()
{
    using namespace std;//我在使用cin cout的时候必须要使用的一个地址空间
    const int Size = 15;
    char name1[Size];//empty array
    char name2[Size] = "C++owboy";//initialized arry
    cout << "howdy!   IAM" << name2;
    cout << "! what is your name?" << endl;
    cin >> name1;
    cout << "well" << name1 << "your name has";
    cout << strlen(name1) << " letter" << endl;
    cout << "in an array of" << sizeof(name1) << "bytes.\n";
    cout << "your initial is" << name1[0] << endl;
    name2[3] = '\0';// Set to null character
    cout << "here are the first 3 characters of my name;";
    cout << name2 << endl;
    return 0;



    
}


