#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<limits>
using namespace std;
//string stream associate the string object with the stream 
int main()
{
    int num{};
    double total{};
    string name{};
    string info{"Jake 100 12.34"};
// read from string object using stream
    istringstream iss{info};//iss is name of variable with type istringstream
    iss>>name>>num>>total; //read from string object like it were a stream;
    cout<<"name : "<<name<<endl;
    cout<<"number : "<<num<<endl;
    cout<<"total : "<<total<<endl;


//writing into string object;
    ostringstream oss{};
    oss<<name<<num<<total;
    cout<<oss.str()<<endl;

/*here we get input from user as string and check if it is integer or not
  if entry="12", then true ,entry ="hello", then false;
*/
    cout<<"Data validation"<<endl;
    bool done=false;
    string entry{};
    int value{};
    do{
        cout<<"ENter an integer"<<endl;
        cin>>entry;
        istringstream validator{entry};
        if(validator>>value)
        {
            done=true;
        }
        else{
            cout<<"sorry that's not an integer"<<endl;
        }
        cin.ignore(numeric_limits<streamsize>::max(),'\n');//if entry ="12hello",then entry =12 but "hello" still in the buffer,so we clean that here
    }while(!done);
    cout<<"you entered the integer : "<<value<<endl;
    return 0;
}