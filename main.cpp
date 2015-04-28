#include <iostream>
#include <string>

using namespace std;

int main()
{
    string instr, key;
    cout << "Enter string to encrypt:" << endl;
    getline(cin, instr);

    cout << "Enter key:" << endl;
    getline(cin, key);

    for (int i = 0; i < instr.length()-1; i++)
    {
        instr[i] = (unsigned char)instr.c_str()[i] ^ (unsigned char)key.c_str()[i % (key.length())];
    }


    cout << endl << instr << endl;

    cout << "Decrypted: ";
    for (int i = 0; i < instr.length()-1; i++)
    {
        instr[i] = (unsigned char)instr.c_str()[i] ^ (unsigned char)key.c_str()[i % (key.length())];
    }
    cout << instr << endl;
    return 0;
}
