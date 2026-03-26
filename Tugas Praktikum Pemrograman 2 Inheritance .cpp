//Nama: Khalil Azmil Permana 1257070076

//Program yang saya disatukan bu dari soal A dan B.
#include <iostream>
using namespace std;


class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};


class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};


class Cat : public Animal {
public:
    void sound() {
        cout << "Cat meows" << endl;
    }
};


class Cow : public Animal {
public:
    void sound() {
        cout << "Cow moos" << endl;
    }
};

int main() {
   
    Dog d;
    Cat c;
    Cow w;

   
    d.sound();
    d.eat();
    cout << endl;

    c.sound();
    c.eat();
    cout << endl;

    w.sound();
    w.eat();

    return 0;
}