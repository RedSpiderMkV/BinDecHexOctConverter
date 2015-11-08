
#include<iostream>
using namespace std;

void printDecToBin(int decimalNumber)
{
    if(decimalNumber / 2 != 0)
    {
        printDecToBin(decimalNumber / 2);
    } // end if

    cout << decimalNumber % 2;

} // end method

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;

    printDecToBin(5);
    cout << endl;
    printDecToBin(12);


    return 0;
}
