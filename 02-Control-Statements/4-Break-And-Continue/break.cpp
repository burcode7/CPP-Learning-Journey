#include <iostream>
using namespace std;

int main()
{
    int count = 0;

    while (count < 10)
    {   
        // Continue function ignores the rest of the while loop and continues in the code
        if(count == 5)
        {
            count++;
            continue;
        }
        cout << count << endl;
        count++;
    }

    cout << endl;

    for(int i = 0; i < 10; i++)
    {
        // Once it reaches five, it leaves the loop
        if(i == 5)
        {
            break;
        }
        cout << i << endl;
    }

    return 0;
}