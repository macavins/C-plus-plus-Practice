#include <iostream>

using namespace std;

int main() {

    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Hello " << name << " ";
    
    int age;
    cout << "Enter your age: ";
    cin >> age;

    cout << "you are " << age << " years young";

    //system("pause");


    
    return 0;
}