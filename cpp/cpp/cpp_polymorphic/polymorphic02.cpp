#include<iostream>
using namespace std;
class Soldier {
    private:  
        int damage_per_hit;float physical_resistance;
    public: 
        Soldier (int x, float y) {
            x = damage_per_hit;
            y = physical_resistance;
        }
        virtual void attack() {
            cout << damage_per_hit << "damage caused!" << endl;
        }
};
class Hero : public Soldier{
    private:  
        int damage_per_hit; float physical_resistance;
    public: 
        Hero (int x, float y) : Soldier(x,y){// 注意构造函数的继承，不要写错了
            x = damage_per_hit;
            y = physical_resistance;
        }
        void attack() {
            cout << damage_per_hit << "damage caused!" << endl;
        }
};
void start_attack(Soldier *A) {// stary_attack函数可    传入地址
    A->attack();
}
int main() {
    Hero B(60, 0.75);
    Hero *p_to_B = &B;
    start_attack(p_to_B);// 必须传进去地址
}