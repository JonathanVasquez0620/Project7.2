/*
Jonathan Vasquez

Main menu U)ser, A)dministrator or Q)uit
User asks for userID and number of copies and increment the appropriate account. Return to Main Menu
Administrator brings up menu B)alance, M)aster or P)roject
Balance shows copy total of all accounts, Master and Project input user and link to appropriate account.
*/
#include<iostream>

using namespace std;

int main()
{
	int* user[100] = { nullptr };
	int masterAccount = 0, projectAccount[10] = { 0 };
	for (int i = 0; i < 100; i++)
	{
		user[i] = &masterAccount;
	}
	int id, copies;
	bool quit = false;
	char menuChoice;
	
	do
	{
		cout << "Enter choice from the following Menu.\n";
		cout << "U)ser	A)dministrator or	Q)uit:" << endl;
		cin >> menuChoice;

		switch (menuChoice)
		{
		case 'U':
			cout << "Enter user ID followed by number of copies: ";
			cin >> id >> copies;
			*user[id] = *user[id] + copies;
			break;
		case 'A':
			char adMenu;
			cout << "Enter choice from the following menu:\n";
			cout << "B)alance	M)aster	or P)roject:" << endl;
			cin >> adMenu;
			switch (adMenu)
			{
			case 'B':
				cout << masterAccount << endl;
				for (int i = 0; i < 9; i++)
				{
					cout << projectAccount[i] << endl;
				}
				break;
			case 'M':
				cout << "Enter user id to be placed into Master Account (0-99):" << endl;
				cin >> id;
				user[id] = &masterAccount;
				break;
			case 'P':
				int projAccount;
				cout << "Enter user id (0 - 99) and Project Account (0-9) to be placed into:" << endl;
				cin >> id >> projAccount ;
				user[id] = &projectAccount[projAccount];
				break;
			default:
				break;
			}
			break;
		case 'Q':
			cout << "Have a nice day.";
			quit = true;
			break;
		default:
			cout << "Your choice was not valid. Please try again: " << endl;
			break;
		}

	}
	while (quit == false);
	return 0;
}