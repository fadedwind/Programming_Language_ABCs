#include "mystring.h"
#include <math.h>

MyString::MyString(string s): string(s){
}

MyString::MyString(const char* s): string(s){
}

MyString MyString::operator+(int n){

    // 判断是否为空
    if(this->size() == 0){
        return *this;
    }

    MyString copy = *this;
    if (n < 0){
        return copy - abs(n);
    }
    else{
        n %= this->size();
        
        for(int i = 0; i < this->size(); i++){
            int new_position = (n+i) % this->size();
            copy[new_position] = this->at(i);
        }
    }
    return copy; 
}

MyString MyString::operator-(int n){
    
    // 判断是否为空
    if (this->size() == 0){
        return *this;
    } 

    MyString copy = *this;
    if (n < 0){
        return copy + abs(n);// abs()绝对值函数
    }
    else{
        n %= this->size();
        return copy + (this->size() - n);
    }
}