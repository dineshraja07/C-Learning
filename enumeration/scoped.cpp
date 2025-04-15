#include<iostream>
#include<string>
#include<vector>
using namespace std;
void test1()
{
    // enum Direction{north,west,east,south};//0 ,1, 2, 3 
    // enum Season{summer,winter,autumn,spring};//0,1,2,3
    // cout<<boolalpha;
    // cout<<(north==summer)<<endl;//true; since north=0 and summer =0
    // int value=north; //it allows implicit conversion to int


    enum class Direction{north,west,east,south};//0 ,1, 2, 3 
    enum class Season{summer,winter,autumn,spring};//0,1,2,3
      int value=Direction::north; //no implicit conversion to int
    // cout<<(Direction::north == Season::summer) <<endl; //cannot compare different enum type
}
int main()
{
    test1();
}