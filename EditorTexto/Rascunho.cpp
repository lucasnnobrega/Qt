#include <iostream>
#include <fstream>
#include <ostream>

using namespace std;

int main()
{
    string str1 = "João ";
    string str2 = "Da Silva";

    cout << str1 + str2 + " Pereira" << endl;
    getline(cin, str2);
    cout << str2;
    str2 = str2 + ".txt";
    cout << str2;
    ofstream myfile;
    myfile.open (str2.c_str());
    myfile << "Writing this to a file.\n";
    myfile.close();
    return 0;

}
