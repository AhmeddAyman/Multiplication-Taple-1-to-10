#include <iostream>
#include <string>
#include <cmath>

using namespace std;

//Solution #1 Multiplication Taple 1 to 10
//Course #5

void PrintTableHeader() 
{

    cout << "\n\n\t\t Multiplication Taple From 1 to 10 \n";

    for (int i =1; i <= 10; i ++)
    {
        cout << i << "\t";
    }

    cout << "\n-----------------------------------------------------------------------------------\n";

}

string PrintSperator(int i )
{
    if (i < 10)
        return "   |"; 
    else
        return "  |"; 

}


void PrintMultiplicationTaple()
{
    PrintTableHeader();

    for (int i =1; i <= 10; i ++)
    {
        cout << " " << i << PrintSperator(i) << "\t";

        for (int j = 1 ; j <= 10 ; j ++)
        
        {
            cout << i * j << "\t";
        }

        cout << endl;
    }
    
}

int main()
{

    PrintMultiplicationTaple();

}

