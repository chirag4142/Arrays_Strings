//Name:Chirag Tekwani
//PRN:23070123042
//Aim:Using loops to reverse a given string.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1;
    string str2;
    int n;
cout << "Enter the string 1: ";
cin >> str1;
n = str1.length();
for(int i = n;i>=0;i--)
{cout << str1[i] ;}


    return 0;
}
/*Output:
olleh
*/
