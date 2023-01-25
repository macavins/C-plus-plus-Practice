#include <iostream>

using namespace std;


void sayHi(){
    cout << "Hello User";

}

void hiName(string name, int age){
    cout << "Hello " << name << " you are " << age << endl;
}

int main() 
{
    cout << "Top" << endl;
    sayHi();
    cout << "" << endl;
    cout << "Bottom" << endl;

    hiName("Mikey", 25);
    hiName("Eric", 28);
    hiName("Ron", 30);



    return 0;
}