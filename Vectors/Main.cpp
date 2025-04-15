#include <iostream>
#include <vector>
using namespace std;
int main()
{
  cout << "====================\n";
  vector<int> list = {10, 11, 12, 13};
  // modify the element using index and at()
  list[0] = 34567;
  list.at(2) = 34568;
  // access using index
  cout << list[0] << endl;
  // can be accessed and modify using front() and back() methods
  cout << list.front() << " " << list.back() << endl;
  // add values using push_back() method
  list.push_back(10000);
  // insert element at particular position
  int index = 4;
  list.insert(list.begin() + index, 8786);
  // pop the last element in vector
  list.pop_back();
  cout << "last element removed" << endl;
  // print size using size()
  cout << "size of vector : " << list.size() << endl;
  // remove element using index by erase()
  list.erase(list.begin() + 2);
  // iterations
  cout << "iteration using for loop" << endl;
  for (int i = 0; i < list.size(); i++)
  {
    cout << list.at(i) << " ";
  }
  cout << endl;
  cout << "iteration using for each loop" << endl;
  for (int i : list)
  {
    cout << i << " ";
  }
  // out of range exception will be thrown to the user
  //  cout<<list.at(100);
  cout << endl;
  vector<vector<int>> vector2d;
  vector2d.push_back((vector<int>){1, 2, 3, 4, 5});
  vector2d.push_back((vector<int>){2, 4, 6, 8, 10});
  vector2d.push_back((vector<int>){3, 6, 9, 12, 15});
  cout << "2d vector elements" << endl;
  for (vector<int> i : vector2d)
  {
    for (int j : i)
    {
      cout << j << " -> ";
    }
    cout << endl;
  }
  return 0;
}