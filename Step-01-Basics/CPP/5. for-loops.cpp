// For loop

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << "Hey, Striver, this is the " << i << "'th iteration" << endl;
    }
    return 0;
}

// Nested For loop

#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "i = " << i << ", j = " << j << endl;
        }
    }
    return 0;
}

//  Conditionals Inside For Loops

for (int i = 1; i <= 10; i++)
{
    if (i % 2 == 0)
    {
        // Code for even numbers
    }
    else
    {
        // Code for odd numbers
    }
}

// Customising For Loops

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 25; i += 5)
    {
        cout << "i = " << i << endl;
    }
    return 0;
}
