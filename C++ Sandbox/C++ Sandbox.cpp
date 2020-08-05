

#include <iostream>

using namespace std;

int main()
{
    //Data Types//
    int myNum{ 123 };
    cout << myNum << endl;

    myNum = 321;
    cout << myNum << endl;

    int a{ 3 / 2 };
    cout << a << endl;

    auto i{ 3.0 / 2 };
    cout << i << endl;

    double b{ 3.0 / 2 };
    cout << b << endl;

    const double dblNum{ 12.3 };
    cout << dblNum << endl;

    int array[] = { 0,1,2,3,4,5 };
    cout << array[5] << endl;

    //Iterating Over an Array
    for (int i = 0; i < 6; i++)
    {
        int number = array[i];
        cout << number << endl;
    }

    

    
    /*cout << "Calculator Console Application" << endl << endl;
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;*/
    return 0;
}

