#include <iostream>
using namespace std;

int main()
{
    int count;

    /*
     while (count < 10)
     {
         if ((count % 2 == 0))
         {
             cout << count << endl;
             count++;
         }
         else
         {
             count++;
             continue;
         }
        
     }
    */

    while (count < 10)
    {
        if (count %2 !=0)
        {
            count++;
            continue;
        }
        cout << count << endl;
        count++;
    }
    return 0;

    // Both while loops work the same, they are just executed differently.

}