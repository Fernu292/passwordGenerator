#include <iostream>
#include <ctime>
#include<conio.h>


using namespace std;

int main(){

	//Create the template for the password
	string cha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz123456789!@#$%^&*";

	//Get the size for the range
	int size = cha.size();

	//Declare the length of password and string of password
	int length;
	string password;


	cout<<"Digit the length of your Password: ";cin>>length;

	for(int i=0;i<length;i++){
		password+=cha[rand()%size];
	}

	cout<<"Your password is: "<<password;
	getch();
	return 0;
}