#include <iostream>
using namespace std;
#include <string>
#include "extra_functions.h"

bool read_boolean()
{
    string answer;
    cin >> answer;

    while(true)
    {
        if(answer=="Y")
        {
            return true;
        }
        else if(answer=="N")
        {
            return false;
        }
        else{
            cout<<"Invalid answer";
        }
    }

}