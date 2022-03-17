// Name: ªÂ¬f§g
// Date: Mar 17, 2022
// Last update: Mar 17, 2022
// Problem statement: This C++ program do the student structure task
#include <iostream>
#include <sstream>
using namespace std;
typedef struct 
{
	char firstName[25];
	char lastName[30];
	char phone[15];
} StRec;

int main()
{
	StRec stu[10];
	int listCnt = 0; // counter for data, if exceeds 10 -> error
	string cmd;
	while (getline(cin, cmd))
	{
		stringstream ss(cmd);
		string ssinput;
		char crud[10] = "";
		char fName[25] = "";
		char lName[30] = "";
		char fone[15] = "";
		int cntr = 0;
		while (ss >> ssinput)
		{
			switch (cntr)
			{
			case 0:
				strcpy_s(crud, ssinput.c_str());
				break;
			case 1:
				strcpy_s(fName, ssinput.c_str());
				break;
			case 2:
				strcpy_s(lName, ssinput.c_str());
				break;
			case 3:
				strcpy_s(fone, ssinput.c_str());
				break;
			default:
				break;
			}
			cntr++;
		}

		// check input error
		if (strcmp(fone, "") == false)
		{
			for (int i = 0; i < strlen(fone); i++)
			{
				if (isdigit(fone[i]) != 1)
				{
					cout << "Input Error" << endl;
					break;
				}
			}
		}
		else if ( (strcmp(crud, "insert") && strcmp(crud, "print") &&
			strcmp(crud, "search") && strcmp(crud, "delete")) == false ||
			strlen(fName) > 25 || strlen(lName) > 30 || strlen(fone) > 15)
		{
			cout << "Input Error" << endl;
		}

		// insert -> >10 rec -> Insert Error
		else if (strcmp(crud, "insert") == 0)
		{
			if (listCnt > 10)
			{
				cout << "Insert Error" << endl;
			}
			else
			{
				strcpy_s(stu[listCnt].firstName, fName);
				strcpy_s(stu[listCnt].lastName, lName);
				strcpy_s(stu[listCnt].phone, fone);
				listCnt++;
			}
		}

		// delete -> DNE -> Delete Error
		else if (strcmp(crud, "delete") == 0)
		{
			for (int i = 0; i < 10; i++)
			{
				if (strcmp(fName, stu[i].firstName) == 0 && strcmp(lName, stu[i].lastName) == 0 && strcmp(fone, stu[i].phone) == 0)
				{
					for (int j = i; j < 10; j++)
					{
						memset(stu[j].firstName, 0, sizeof stu[j].firstName);
						memset(stu[j].lastName, 0, sizeof stu[j].lastName);
						memset(stu[j].phone, 0, sizeof stu[j].phone);

						strcpy_s(stu[j].firstName, stu[j + 1].firstName);
						strcpy_s(stu[j].lastName, stu[j + 1].lastName);
						strcpy_s(stu[j].phone, stu[j + 1].phone);
					}
					listCnt--;
				}
				else
				{
					cout << "Delete Error" << endl;
				}
			}

		}

		// search -> DNE -> Search Error
		else if (strcmp(crud, "search") == 0)
		{
			for (int i = 0; i < 10; i++)
			{
				if (strcmp(fName, stu[i].firstName) == 0 && strcmp(lName, stu[i].lastName) == 0 && strcmp(fone, stu[i].phone) == 0)
				{
					cout << i << endl;
				}
				else
				{
					cout << "Search Error" << endl;
				}
			}
		}

		// print -> seperate by space -> DNE -> Print Error
		else if (strcmp(crud, "print") == 0)
		{
			if (listCnt == 0)
			{
				cout << "Print Error" << endl;
			}
			else
			{
				for (int i = 0; i < listCnt; i++)
					cout << stu[i].firstName << " " << stu[i].lastName << " " << stu[i].phone << endl;
			}
		}
	}
}