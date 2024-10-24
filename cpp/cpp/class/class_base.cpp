// <string>类库
#include <string>
#include <iostream>
using namespace std;
class Str: public string {
    public:
        void testlength(){
            cout << this->size() << endl;
//this->size()： 使用函数size()来求字符串的长度：this  是class str类的指针，指向当前【这个类str(一个字符串)】【的一个实例】的地址
        } 
        Str encryption(int n){
            if (this->size() == 0) {
                return *this;
            }
            Str copy = *this;
            if (this->size() != 0) {
                n %= this->size();
                for(int i = 0; i < this->size(); i++){
                    int new_position = (n+i) % this->size();
                    copy[new_position] = this->at(i);
                }
            }
            return copy;
        }
};
int main() {
    // 支持的字符串及参数形式
    string Name = "hello";
    string Name2("Caixukun",5);
    cout <<Name<<" "<<Name2<<endl;
    Str A;
    cin >> A;
    A.testlength();
    cout << A.encryption(5);
    return 0;
}

