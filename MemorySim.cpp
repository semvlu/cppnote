// Name: ªÂ¬f§g
// Date:May 14, 2022
// Last Update:May 14, 2022
// Problem statement: This C++ program does the memory simulator task
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main()
{

    int N, n;
    cin >> N >> n;
    vector<unsigned char> memory(N, 0);

    while (n--)
    {
        string cmd;
        int pos;
        string type;

        cin >> cmd >> pos >> type;

        //char
        if (type == "char")
        {

            if (cmd == "Set")
            {
                unsigned int value;
                cin >> value;
                if (pos + 1 > N) 
                    cout << "Violation Access." << endl;
                memory[pos] = value;
            }
            else if (cmd == "Get") 
            {
                if (pos + 1 > N) 
                {
                    cout << "Violation Access." << endl;
                    continue;
                }
                cout << int(memory[pos]) << endl;

            }

        }
        //short
        else if (type == "short")
        {
            if (cmd == "Set")
            {
                unsigned short value;
                cin >> value;
                if (pos +2 > N) 
                    cout << "Violation Access." << endl;
                for (int i = 0; i < 2; i++)
                    memory[pos + i] = (value >> (i * 8));
            }
            else if (cmd == "Get")
            {
                if (pos + 2 > N) 
                {
                    cout << "Violation Access." << endl;
                    continue;
                }
                unsigned short output = 0;
                for (int i = 0; i < 2; i++)
                    output += (short(memory[pos + i]) << (i * 8));
                cout << output << endl;
            }

        }
        //int
        else if (type == "int") 
        {
            if (cmd == "Set")
            {
                unsigned int value;
                cin >> value;
                if (pos + 4 > N) 
                    cout << "Violation Access." << endl;
                for (int i = 0; i < 4; i++)
                    memory[pos + i] = (value >> (i * 8));

            }
            else if (cmd == "Get") {
                if (pos + 4 > N)
                {
                    cout << "Violation Access." << endl;
                    continue;
                }
                unsigned int output = 0;
                for (int i = 0; i < 4; i++)
                    output += (int(memory[pos + i]) << (i * 8));
                cout << output << endl;
            }

        }
        //string
        else if (type == "String") {

            if (cmd == "Set") {
                string value;
                getline(cin, value);
                value.erase(0, value.find_first_not_of(' '));
                for (char c : value) 
                {
                    if (pos > N) 
                    {
                        cout << "Violation Access." << endl;
                        continue;
                    }
                    memory[pos++] = c;
                }
            }
            else if (cmd == "Get") 
            {
                if (pos + 1 > N) 
                {
                    cout << "Violation Access." << endl;
                    continue;
                }
                string output = "";
                for (int i = pos; i < memory.size(); i++)
                {
                    if (memory[i] == '\0' || memory[i] == 0) { break; }
                    output += memory[i];
                }
                cout << output << endl;
            }

        }
    }
}