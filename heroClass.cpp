#include<iostream>
#include "classBasics01.cpp"
using namespace std;

int main() {
    // creating a hero statically
    hero h1;
    cout << "Size of the h1 object is " << sizeof(h1) << endl;
    h1.setHealth(100);
    h1.setLevel('A');
    cout << "Level of the h1 is " << h1.getLevel() << endl;
    cout << "Health of the h1 is " << h1.getHealth() << endl;

    // creating a hero dynamically
    hero *h2 = new hero;
    h2->setHealth(50);
    h2->setLevel('B');
    cout << "Level of the h2 is " << h2->getLevel() << endl;
    cout << "Health of the h2 is " << h2->getHealth() << endl;

    // Free dynamically allocated memory
    delete h2;

    return 0;
}
