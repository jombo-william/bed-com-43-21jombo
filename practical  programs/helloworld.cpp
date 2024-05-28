#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    vector<string> msg {"hello","c++","world","from"," vs code","and the c++ extensions"};
    for(const string& word : msg)
    {
        cout << word<< "    ";
    }
    cout<<endl;
    cout<< "william jombo is learnig c++ , \n \n";
    cout<<endl;

}