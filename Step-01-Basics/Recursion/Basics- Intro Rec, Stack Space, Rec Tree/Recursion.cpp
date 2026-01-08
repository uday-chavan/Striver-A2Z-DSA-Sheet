#include <iostream>
using namespace std;

void recursion(int count = 0)
{
    if (count == 4)
        return;
    cout << count << endl;
    count++;
    recursion(count);
}

int main()
{
    // exceeding the memory by repeated calling -> stack overflow
    // The condition that we use for stopping -> base condition
    recursion();
    return 0;
}