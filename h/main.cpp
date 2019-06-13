//
//  main.cpp
//  h
//
//  Created by s20181106118 on 2019/6/13.
//  Copyright © 2019 s20181106118. All rights reserved.
//

#include <iostream>

using namespace std;
class animal{
public:
    void set(int a);
    int  get();
private:
    int age;
};
void animal::set(int a){
    age=a;
}
int animal::get(){
    return age;
}
int main()
    {
        int b;
        cin>>b;
    animal p;
    p.set(b);
    cout<<p.get()<<endl;
    return 0;
}


