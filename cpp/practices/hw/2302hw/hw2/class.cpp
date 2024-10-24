#include <iostream>
using namespace std;
 
class Space{
   public:      
      void setLength(int l){
         length = l;
      }
      void setWidth(int w){
         width = w;
      }
      void setHeight(int h){
         height = h;
      }
      void spaceinitialization();

   protected:
      int length;
      int width;
      int height;
};

class Exp {
   protected:
      int exp;

   public:
      int expup(int exp);
};

class Level {

   private:
      int level[100];

   protected:
      int levelup(int *level) {
         if (*level == 100)
            return 100;
         level++;
         return *level;
      }
};

class Hero {
   private:
      int HP;
      int damage;
      int cure;
      

   public:
      int getdamage();
      void getvoice() {
         cout << "ji ni tai mei!" << endl;
      }
      void getskill();

      void gethitanimation();
      void getskillanimation();

};

class enemy {
   private:
      int HP;
      int damage;
      int cure;
      
   public:
      int getdamage();
      void getvoice();
      void getskill();

      void gethitanimation();
      void getskillanimation();

};

class mission: public Hero, public Exp, public Space, public enemy{
   public: 
      void levellimited() {
         cout << "the level of the hero is not enough to enter this mission" << endl;
      }
      void getenemy();
      void missionprocess();

};

int main(void) {;
   mission A01;
   Hero caixukun;
   A01.levellimited();
   caixukun.getvoice();

   return 0;
}