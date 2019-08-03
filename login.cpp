#include <iostream>
#include <string>
using namespace std;
int main( )
{
	char Ch;
	string user,password,password2,user2;
	do{
	cout << "/////////////////MENU//////////\n";
	cout << "1.Register\n";
	cout << "2.Login\n";
	cout << "Q.Exit Program\n";
	cout << "\n_______________________________\n";
	cout << "\nEnter Menu: ";
	cin >> Ch;
	if(Ch == '1')
	{
	cout << "\n**************Register********\n";
	cout << "Input Username : ";
	cin >> user2;
	cout << "Input Password : ";
	cin >> password;
	}
	if (Ch == '2') {
	cout << "\n***************Login**********\n";
	cout << "Input Username : ";
	cin >> user;
	cout << "Input Password : ";
	cin >> password2;
	while (password != password2,user2 != user) {
    std::cout << "Username or Password Incorrect Please try again " "\n";
	break;
	}
	if (password == password2,user2 == user) {
	std::cout << "Username or Password correct ^____^ " "\n";
	}
	}
	}while(Ch != 'Q');
	cout << "Exit Program\n";
	return 0;	
}