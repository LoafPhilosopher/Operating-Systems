#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 100000; i++)
        for (int j = 0; j < 10000; j++)
            if (i * i + j * j == 19451945)
                cout << i << ' ' << j << endl;
}