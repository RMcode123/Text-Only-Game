#include <iostream>

using namespace std;

int main() 
{
    int ChoiceNumber = 0;
    string Choices[99];
    
    while (ChoiceNumber <= 98);
    {
        Choices[ChoiceNumber] = "null";
        ChoiceNumber++;
    }
    
    Choices[0] = "Start";
    Choices[1] = "Credits";
    Choices[98] = "help";
    
    ChoiceNumber = 0;
    
    while (ChoiceNumber <= 98)
    {
     cout << ChoiceNumber + 1 << ". " << Choices[ChoiceNumber] << endl;
     ChoiceNumber++;
    }
    cout << ChoiceNumber << ". " << "help" << endl;
}
