#include <bits/stdc++.h>
using namespace std;
//
// void --> which does not return any value
// return
// parameterised
// non-parameterised
//

// void printName(string name)
// {
//     cout << "Hello " << name;
// }
// int main()
// {
//     string name;
//     cin >> name;
//     printName(name);

//     string name2;
//     cin >> name2;
//     printName(name2);
//     return 0;
// }

//

// pass by value -> makes copy for modifications, the original value remains unchanged

// void doSomething(int num)
// {
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
// }
// int main()
// {
//     int num = 10;
//     doSomething(num);
//     cout << num << endl;
//     return 0;
// }

//

// pass by reference

void doSomething(int &num)
{
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}
int main()
{
    int num = 10;
    doSomething(num);
    cout << num << endl;
    return 0;
}