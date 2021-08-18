#include <iostream>
#include <ctime>


using namespace std;

static const char alphanum[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz"
"0123456789"
"!@#$%^&*";


int size = sizeof(alphanum) - 1;

int main()
{
	int length;

    cout<<"Select your length password: ";
    cin>>length;
	
	srand(time(0));
	for (int i = 0; i < length; i++)
	{
		cout << alphanum[rand() % ::size];
	}
	return 0;
}
