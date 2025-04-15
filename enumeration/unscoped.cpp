#include<iostream>
#include<string>
#include<vector>
using namespace std;
enum Direction {north,south,east,west};//it is unscoped 
string direction_to_string(Direction direction)
{
    string result;
    switch(direction)
    {
        case north:
           result="north";
           break;
        case east:
          result="east";
          break;
        case south:
         result="south";
         break;
        case west:
         result="west";
         break;
        default:
         result="unknown direction";
         break;
    }
    return result;
}
void test1()
{
        Direction direction=north;
    cout<<"value of direction : "<<direction<<endl;//0
    cout<<"name of direction : "<<direction_to_string(direction)<<endl;//north
 
    Direction direction1=Direction(3);
    cout<<"value of direction1 : "<<direction1<<endl;//3
    cout<<"name of direction1 : "<<direction_to_string(direction1)<<endl;//west

    Direction direction2=Direction(4);
    cout<<"value of direction2 : "<<direction2<<endl;//4
    cout<<"name of direction2 : "<<direction_to_string(direction2)<<endl;//unknown direction

}

enum Grocery_items{milk,bread,apple,orange};
ostream &operator<<(ostream &os,Grocery_items item)
{
    switch(item)
    {
        case milk:
            os<<"Milk";
            break;
        case bread:
            os<<"bread";
            break;
        case apple:
            os<<"apple";
            break;
        case orange:
           os<<"orange";
           break;
        default:
         os<<"unknown item";
           break;
    }
    return os;
}
bool is_grocery(Grocery_items item)
{
     switch(item){
        case apple:
        case orange:
        case milk:
        case bread:
           return true;
        default:
         return false;
     }
}
void test2()
{
    Grocery_items item1=apple;
    cout<<apple<<endl; //overrided
    cout<<boolalpha;
    cout<<is_grocery(item1)<<endl; //true
    cout<<is_grocery(Grocery_items(7))<<endl; //false
    
}
void test3()
{
    vector<Grocery_items> items;
    items.push_back(apple);
    items.push_back(orange);
    items.push_back(milk);
    items.push_back(Grocery_items(17));
    for(auto item:items)
    {
        cout<<item<<endl;
    }
}
int main()
{
//    test1();
    //  test2();
    test3();
}