#include <iostream>

using namespace std;



enum QUOTES
{
	QUIT = 0,
	ALEX,
	MARIE,
	JIA_LUNG,
	YONG_HONG,
	TOTAL_QUOTES
};

int main(void)
{
	bool reading = true;
	while (reading)
	{
		int quote;

		cout << "QUOTES:\
1) Alex\n\
2) Marie\n\
3) Jia Lung\n\
4) Yong Hong\n\
Narrator: Whose quote would you like to see?: "; cin >> quote;

		switch (quote)
		{
		case(QUIT):
			reading = false;
			break;
		case(MARIE):
			cout << "Marie: Hello World, I'm Marie, potatoe\n\n";
			break;
		case(ALEX):
			cout << "Alex: Hello World, I'm Alex, dumbass\n" << endl;
			break;
		case(JIA_LUNG):
			cout << "Jia Lung: Hello World! I'm Jia Lung\n" << endl;
			break;
		case(YONG_HONG):
			cout << "Yong Hong: Hello World! fuck off alex\n" << endl;
			break;
		default:
			cout << "Narrator: Dude choose a proper Quote No.\n\n";
			break;
		}
	}
	return 0;
}