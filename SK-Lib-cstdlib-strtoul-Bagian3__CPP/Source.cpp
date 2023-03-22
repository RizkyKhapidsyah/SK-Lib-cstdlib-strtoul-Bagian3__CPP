#include <iostream>
#include <cstdlib>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    char str[256] = "74638 RK";
    char* end;
    long result;

    result = strtoul(str, &end, 0);
    cout << "The unsigned long integer is : " << result << endl;
    cout << "String in str is : " << end << endl;

    result = strtoul(str, &end, 12);
    cout << "The unsigned long integer is : " << result << endl;
    cout << "String in str is : " << end << endl;

    result = strtoul(str, &end, 30);
    cout << "The unsigned long integer is : " << result << endl;
    cout << "String in str is : " << end << endl;

    _getch();
    return 0;
}