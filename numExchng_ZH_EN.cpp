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
				conv[h] = "零萬零仟零佰零拾";
				for (int i = 0; i < sub[h].length(); i++)
				{
					switch (sub[h][i])
					{
					case '0':
						conv[h].append("零");
						break;
					case '1':
						conv[h].append("壹");
						break;
					case '2':
						conv[h].append("貳");
						break;
					case '3':
						conv[h].append("參");
						break;
					case '4':
						conv[h].append("肆");
						break;
					case '5':
						conv[h].append("伍");
						break;
					case '6':
						conv[h].append("陸");
						break;
					case '7':
						conv[h].append("柒");
						break;
					case '8':
						conv[h].append("捌");
						break;
					case '9':
						conv[h].append("玖");
						break;
					default:
						break;
					}
				}
				break;
			case 2:
				conv[h] = "零萬零仟零佰拾";
				for (int i = 0; i < sub[h].length(); i++)
				{
					switch (sub[h][i])
					{
					case '0':
						conv[h].insert(4 * i + 12, "零");
						break;
					case '1':
						conv[h].insert(4 * i + 12, "壹");
						break;
					case '2':
						conv[h].insert(4 * i + 12, "貳");
						break;
					case '3':
						conv[h].insert(4 * i + 12, "參");
						break;
					case '4':
						conv[h].insert(4 * i + 12, "肆");
						break;
					case '5':
						conv[h].insert(4 * i + 12, "伍");
						break;
					case '6':
						conv[h].insert(4 * i + 12, "陸");
						break;
					case '7':
						conv[h].insert(4 * i + 12, "柒");
						break;
					case '8':
						conv[h].insert(4 * i + 12, "捌");
						break;
					case '9':
						conv[h].insert(4 * i + 12, "玖");
						break;
					default:
						break;
					}
				}
				break;
			case 3:
				conv[h] = "零萬零仟佰拾";
				for (int i = 0; i < sub[h].length(); i++)
				{
					switch (sub[h][i])
					{
					case '0':
						conv[h].insert(4 * i + 8, "零");
						break;
					case '1':
						conv[h].insert(4 * i + 8, "壹");
						break;
					case '2':
						conv[h].insert(4 * i + 8, "貳");
						break;
					case '3':
						conv[h].insert(4 * i + 8, "參");
						break;
					case '4':
						conv[h].insert(4 * i + 8, "肆");
						break;
					case '5':
						conv[h].insert(4 * i + 8, "伍");
						break;
					case '6':
						conv[h].insert(4 * i + 8, "陸");
						break;
					case '7':
						conv[h].insert(4 * i + 8, "柒");
						break;
					case '8':
						conv[h].insert(4 * i + 8, "捌");
						break;
					case '9':
						conv[h].insert(4 * i + 8, "玖");
						break;
					default:
						break;
					}
				}
				break;
			case 4:
				conv[h] = "零萬仟佰拾";
				for (int i = 0; i < sub[h].length(); i++)
				{
					switch (sub[h][i])
					{
					case '0':
						conv[h].insert(4 * i + 4, "零");
						break;
					case '1':
						conv[h].insert(4 * i + 4, "壹");
						break;
					case '2':
						conv[h].insert(4 * i + 4, "貳");
						break;
					case '3':
						conv[h].insert(4 * i + 4, "參");
						break;
					case '4':
						conv[h].insert(4 * i + 4, "肆");
						break;
					case '5':
						conv[h].insert(4 * i + 4, "伍");
						break;
					case '6':
						conv[h].insert(4 * i + 4, "陸");
						break;
					case '7':
						conv[h].insert(4 * i + 4, "柒");
						break;
					case '8':
						conv[h].insert(4 * i + 4, "捌");
						break;
					case '9':
						conv[h].insert(4 * i + 4, "玖");
						break;
					default:
						break;
					}
				}
				break;
			case 5:
				conv[h] = "萬仟佰拾";
				for (int i = 0; i < sub[h].length(); i++)
				{
					switch (sub[h][i])
					{
					case '0':
						conv[h].insert(4 * i, "零");
						break;
					case '1':
						conv[h].insert(4 * i, "壹");
						break;
					case '2':
						conv[h].insert(4 * i, "貳");
						break;
					case '3':
						conv[h].insert(4 * i, "參");
						break;
					case '4':
						conv[h].insert(4 * i, "肆");
						break;
					case '5':
						conv[h].insert(4 * i, "伍");
						break;
					case '6':
						conv[h].insert(4 * i, "陸");
						break;
					case '7':
						conv[h].insert(4 * i, "柒");
						break;
					case '8':
						conv[h].insert(4 * i, "捌");
						break;
					case '9':
						conv[h].insert(4 * i, "玖");
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
				cout << conv[h] << "，";
			else
				cout << conv[h];
		}
	}
	else
	{
		string sub[2];
		sub[0] = num.substr(0, num.find("，"));
		sub[1] = num.substr(num.find("，"));
		sub[1].erase(0, 4);

		for (int i = 0; i < 2; i++)
		{
			string _1, _2, _3, _4, _5;
			_1 = sub[i].substr(0, num.find("萬"));
			_2 = sub[i].substr(num.find("萬"), 4);
			_2.erase(0, 2);
			_3 = sub[i].substr(num.find("仟"), 4);
			_3.erase(0, 2);
			_4 = sub[i].substr(num.find("仟"), 4);
			_4.erase(0, 2);
			_5 = sub[i].substr(num.find("拾"), 4);
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
				case '零':
					if (j != 0)
						conv[i][j] = '0';
					break;
				case '壹':
					conv[i][j] = '1';
					break;
				case '貳':
					conv[i][j] = '2';
					break;
				case '參':
					conv[i][j] = '3';
					break;
				case '肆':
					conv[i][j] = '4';
					break;
				case '伍':
					conv[i][j] = '5';
					break;
				case '陸':
					conv[i][j] = '6';
					break;
				case '柒':
					conv[i][j] = '7';
					break;
				case '捌':
					conv[i][j] = '8';
					break;
				case '玖':
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
