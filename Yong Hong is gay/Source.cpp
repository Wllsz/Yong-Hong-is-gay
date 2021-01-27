#include <iostream>

using namespace std;


void A() {
	B();
}

void B() {
	C();
}

void C() {
	D();
}

void D() {
	E();
}

void E() {
	F();
}

void F() {
	B();
	for(int i = 0; i < 100000; i++) {
		cout << "Alex Loves renee" << endl;
	}
}

int main(void)
{
	cout << "Hello World, I'm Marie, potatoe\n";
	cout << "Hello World, I'm Alex, dumbass" << endl;
	cout << "Hello World! I'm Jia Lung" << endl;
	cout << "Hello World! fuck off alex" << endl;


	A();

	return 0;
}