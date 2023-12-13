#include <iostream>

using namespace std;

class Food{
    double price;
    public:
        Food(){
            cout<<"Food default constructor \n";
        }
};
class KaoNiew{
    int color;
    public:
        KaoNiew(){
            cout<<"KaoNiew default constructor \n";
        }
};
class KaiYang{
    int type;
    public:
        KaiYang(){
            cout<<"KaiYang default constructor \n";
        }

};
class Somtum{
    int chilli;
    public:
        Somtum(){
            cout<<"Somtum default constructor \n";
        }
};
class TumPu{
    bool plara;
    public:
        TumPu(){
            cout<<"TumTu default constructor \n";
        }
};
class TumThai{
    bool peanut;
    public:
        TumThai(){
            cout<<"TumThai default constructor \n";
        }
};
class FoodItem{
    public:
        FoodItem(){
            cout<<"FoodItem default constructor \n";
        }  
};
class Order{
    public:
        Order(){
            cout<<"Order default constructor \n";
        }
};
int main(){
    Food food1;
    KaoNiew kaoNiew1;
    KaiYang kaiYang1;
    Somtum somTum1;
    TumPu tumPu1;
    TumThai tumThai1;
    FoodItem foodItem1;
    Order order1;
}