// 0
// 1.1
// 3.52
// 7.513
// 13.3694
// 21.422
// 32.0513
// 45.6923
// 62.841
// 84.0626

#include <iostream>

using namespace std;

void Breakpoints()
{
    double add = 1.0;
    double sum = 0.0;
    for (int i = 0; i < 10; i++)
    {
        sum += add * i;
        cout << "// " << sum << endl;
        add *= 1.1;
    }
    cout << "Total sum is " << sum << endl;
}

int main()
{
    Breakpoints();
}
