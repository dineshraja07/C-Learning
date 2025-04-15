#include <iostream>
#include <cstring> //similar to <string.h> in C
#include <cctype>  // similar to <ctype.h> header file in C
// isdigit,ispunct,islower,isupper,toupper,tolower,isalpha,isalnum,ispace
using namespace std;
int main()
{
    char str[] = "dineshKarthick"; // {'d','i','n','e','s','h','\0' };
    char str1[] = {'d', 'i', 'n', 'e', 's', 'h'};
    char str2[100] = "dineshraja"; //{d,i,n,e,s,h,\0,\0};
    char str3[100];
    strcpy(str3, str2);
    cout << str3 << endl;
    int result = strcmp(str3, str);
    cout << result << endl;
    int length = strlen(str);
    // it gives -1 when , left ith character in string is less then
    // right character in string, gives i for other case
    // gives 0 in the case of equal string
    strcat(str3, str);
    cout << str3 << endl;
    strupr(str3);
    cout << str3 << endl;
}