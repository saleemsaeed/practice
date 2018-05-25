#include <iostream>
using namespace std;

class Animal {
public:
	void speak() { cout << "Grrr" << endl; }

};

class Cat: public Animal {
public:
	void jump() { cout << "Cat jumping!" << endl; }
};

class Tiger: public Cat {
public:
	void attackAntelope() { cout << "Attacking!" << endl;}

};

int main() {
	Animal a;
	a.speak();
	Cat c;
	c.speak();
	c.jump();
	Tiger t;
	t.jump();
	t.speak();
	t.attackAntelope();
}