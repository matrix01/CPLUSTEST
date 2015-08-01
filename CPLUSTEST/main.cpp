//
//  main.cpp
//  CPLUSTEST
//
//  Created by Md. Milan MIa on 8/1/15.
//  Copyright (c) 2015 Md. Milan MIa. All rights reserved.
//

#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <map>
using namespace std;
//macros
typedef pair<int, int> II;

class stlTester{
public:
    stlTester(string s){
        cout<<s<<" object created."<<endl;
    }
    void vectorTest(){
        vector<II>vect(10);
        cout<<vect.size()<<endl;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    stlTester stlvect("Vector");
    stlvect.vectorTest();
    return 0;
}