#include <iostream>
#include <string>
using namespace std;

int main()
{
	string num, conv[2];
	cin >> num;
	if (num[0] >= 49 && num[0] <= 57)
	{
		string sub[2];
		for(int i = 0; i < 2; i++)
			sub[i] = num.substr(0, num.find(","));

		for (int h = 0; h < 2; h++)
		{
			switch (sub[h].length())
			{
			case 1:
				conv[h] = "�s�U�s�a�s�չs�B";
				for (int i = 0; i < sub[h].length(); i++)
				{
					switch (sub[h][i])
					{
					case '0':
						conv[h].append("�s");
						break;
					case '1':
						conv[h].append("��");
						break;
					case '2':
						conv[h].append("�L");
						break;
					case '3':
						conv[h].append("��");
						break;
					case '4':
						conv[h].append("�v");
						break;
					case '5':
						conv[h].append("��");
						break;
					case '6':
						conv[h].append("��");
						break;
					case '7':
						conv[h].append("�m");
						break;
					case '8':
						conv[h].append("��");
						break;
					case '9':
						conv[h].append("�h");
						break;
					default:
						break;
					}
				}
				break;
			case 2:
				conv[h] = "�s�U�s�a�s�լB";
				for (int i = 0; i < sub[h].length(); i++)
				{
					switch (sub[h][i])
					{
					case '0':
						conv[h].insert(4 * i + 12, "�s");
						break;
					case '1':
						conv[h].insert(4 * i + 12, "��");
						break;
					case '2':
						conv[h].insert(4 * i + 12, "�L");
						break;
					case '3':
						conv[h].insert(4 * i + 12, "��");
						break;
					case '4':
						conv[h].insert(4 * i + 12, "�v");
						break;
					case '5':
						conv[h].insert(4 * i + 12, "��");
						break;
					case '6':
						conv[h].insert(4 * i + 12, "��");
						break;
					case '7':
						conv[h].insert(4 * i + 12, "�m");
						break;
					case '8':
						conv[h].insert(4 * i + 12, "��");
						break;
					case '9':
						conv[h].insert(4 * i + 12, "�h");
						break;
					default:
						break;
					}
				}
				break;
			case 3:
				conv[h] = "�s�U�s�a�լB";
				for (int i = 0; i < sub[h].length(); i++)
				{
					switch (sub[h][i])
					{
					case '0':
						conv[h].insert(4 * i + 8, "�s");
						break;
					case '1':
						conv[h].insert(4 * i + 8, "��");
						break;
					case '2':
						conv[h].insert(4 * i + 8, "�L");
						break;
					case '3':
						conv[h].insert(4 * i + 8, "��");
						break;
					case '4':
						conv[h].insert(4 * i + 8, "�v");
						break;
					case '5':
						conv[h].insert(4 * i + 8, "��");
						break;
					case '6':
						conv[h].insert(4 * i + 8, "��");
						break;
					case '7':
						conv[h].insert(4 * i + 8, "�m");
						break;
					case '8':
						conv[h].insert(4 * i + 8, "��");
						break;
					case '9':
						conv[h].insert(4 * i + 8, "�h");
						break;
					default:
						break;
					}
				}
				break;
			case 4:
				conv[h] = "�s�U�a�լB";
				for (int i = 0; i < sub[h].length(); i++)
				{
					switch (sub[h][i])
					{
					case '0':
						conv[h].insert(4 * i + 4, "�s");
						break;
					case '1':
						conv[h].insert(4 * i + 4, "��");
						break;
					case '2':
						conv[h].insert(4 * i + 4, "�L");
						break;
					case '3':
						conv[h].insert(4 * i + 4, "��");
						break;
					case '4':
						conv[h].insert(4 * i + 4, "�v");
						break;
					case '5':
						conv[h].insert(4 * i + 4, "��");
						break;
					case '6':
						conv[h].insert(4 * i + 4, "��");
						break;
					case '7':
						conv[h].insert(4 * i + 4, "�m");
						break;
					case '8':
						conv[h].insert(4 * i + 4, "��");
						break;
					case '9':
						conv[h].insert(4 * i + 4, "�h");
						break;
					default:
						break;
					}
				}
				break;
			case 5:
				conv[h] = "�U�a�լB";
				for (int i = 0; i < sub[h].length(); i++)
				{
					switch (sub[h][i])
					{
					case '0':
						conv[h].insert(4 * i, "�s");
						break;
					case '1':
						conv[h].insert(4 * i, "��");
						break;
					case '2':
						conv[h].insert(4 * i, "�L");
						break;
					case '3':
						conv[h].insert(4 * i, "��");
						break;
					case '4':
						conv[h].insert(4 * i, "�v");
						break;
					case '5':
						conv[h].insert(4 * i, "��");
						break;
					case '6':
						conv[h].insert(4 * i, "��");
						break;
					case '7':
						conv[h].insert(4 * i, "�m");
						break;
					case '8':
						conv[h].insert(4 * i, "��");
						break;
					case '9':
						conv[h].insert(4 * i, "�h");
						break;
					default:
						break;
					}
				}
				break;
			default:
				break;
			}
			if (h == 0)
				cout << conv[h] << "�A";
			else
				cout << conv[h];
		}
	}
	else
	{
		string sub[2];
		sub[0] = num.substr(0, num.find("�A"));
		sub[1] = num.substr(num.find("�A"));
		sub[1].erase(0, 4);

		for (int i = 0; i < 2; i++)
		{
			string _1, _2, _3, _4, _5;
			_1 = sub[i].substr(0, num.find("�U"));
			_2 = sub[i].substr(num.find("�U"), 4);
			_2.erase(0, 2);
			_3 = sub[i].substr(num.find("�a"), 4);
			_3.erase(0, 2);
			_4 = sub[i].substr(num.find("�a"), 4);
			_4.erase(0, 2);
			_5 = sub[i].substr(num.find("�B"), 4);
			_5.erase(0, 2);

			sub[i].clear();
			sub[i].append(_1);
			sub[i].append(_2);
			sub[i].append(_3);
			sub[i].append(_4);
			sub[i].append(_5);

			auto subInChar = sub[i].c_str();
			for (int j = 0; j < sub[i].length(); j++)
			{
				switch (subInChar[j])
				{
				case '�s':
					if (j != 0)
						conv[i][j] = '0';
					break;
				case '��':
					conv[i][j] = '1';
					break;
				case '�L':
					conv[i][j] = '2';
					break;
				case '��':
					conv[i][j] = '3';
					break;
				case '�v':
					conv[i][j] = '4';
					break;
				case '��':
					conv[i][j] = '5';
					break;
				case '��':
					conv[i][j] = '6';
					break;
				case '�m':
					conv[i][j] = '7';
					break;
				case '��':
					conv[i][j] = '8';
					break;
				case '�h':
					conv[i][j] = '9';
					break;
				default:
					break;
				}
			}
			if (i != 1)
				cout << conv[i] << ",";
			else
				cout << conv[i] << endl;
		}
	}

	
}
