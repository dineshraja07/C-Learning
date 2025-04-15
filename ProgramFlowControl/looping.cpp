#include <iostream>
#include <vector>
using namespace std;
void firstVowelOccurance()
{

    int index = 0;
    int flag = 0;
    char result;
    vector<char> vec = {'h', 'e', 'l', 'l', 'o'};

    if (!vec.empty())
    {
        while (index < vec.size())
        {
            char ch = vec[index];
            cout << vec[index] << endl;
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                result = ch;
                break;
            }
            index++;
        }
    }
    if (flag == 0)
    {
        cout << "No vowel was found" << endl;
    }
    else
    {
        cout << "Vowel found: " << result << endl;
        ;
    }
}
#include <vector>
using namespace std;

void calculate_pairs()
{
    vector<int> vec = {1, 2, 3};
    int result = 0;
    if (vec.size() == 0 || vec.size() == 1)
    {
        result = 0;
    }
    else
    {
        for (int i = 0; i < vec.size() - 1; i++)
        {
            for (int j = i + 1; j < vec.size(); j++)
            {
                cout << i << " " << j << endl;
                result += vec[i] * vec[j];
            }
        }
    }
    cout << "sum of all pairs : " << result << endl;
}
int main()
{
    int i, j;
    for (i = 0; i <= 5; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (i = 0, j = 0; i < 5; i++, j = j + 2)
    {
        cout << i << "*" << j << "=" << (i * j) << endl;
    }
    char str[5][10] = {"CR7", "LM10", "ramos", "pepe"};
    for (int index = 0; index < 5; index++)
    {
        cout << str[index] << endl;
    }
    // 1. finding the fist occurred vowel in vector
    firstVowelOccurance();
    // 2. sum of product of pairs in vector
    calculate_pairs();

    return 0;
}