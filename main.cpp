#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
//Begin!
int main()
{
    //Words are stored here
    vector<string> storage;

    ifstream file;
    file.open("words.txt");
    
    //Read in one word per line
    while (!file.eof())
    {
        string tmp = "";
        getline(file, tmp);
        storage.push_back(tmp);
        //To see it as it's read in
        //cout << tmp << endl;
    }
    //cout << storage.size() << endl;

    //Do something
    cout << "Doing something" << endl;
    for (int i = 0; i < storage.size(); i ++)
    {
        cout << storage[i] << endl; //Replace this with whatever
    }
    
    file.close();
}
