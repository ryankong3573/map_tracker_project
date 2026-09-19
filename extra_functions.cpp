#include <iostream>
using namespace std;
#include <string>
#include "extra_functions.h"

bool read_boolean()
{
    while(true)
    {
        string answer;
        cin >> answer;

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