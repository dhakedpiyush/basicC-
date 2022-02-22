#include <iostream>
using namespace std;

int main()
{
    char button;

    cout << "Enter the button : ";
    cin >> button;


    switch (button)
    {
    case 'a':
        cout << "Hello";
        break;

    case 'b':
        cout << "hola";
        break;

    case 'c':
        cout << " Salut";
        break;

    default:
        cout << "Please enter a valid choice";
    }
    

}
