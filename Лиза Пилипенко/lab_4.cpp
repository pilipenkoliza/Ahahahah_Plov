#include <iostream>
#include <ctime>

using namespace std;

void shuffle(int m[7])
{
    for (int i = 0; i < 7; ++i)
        swap(m[i], m[rand() % 7]);
}

int main()
{
    int m[7] = {1,6,9,2,5,3,7};
    srand(time(NULL));

    shuffle(m);
    for (int j = 0; j < 7; ++j)
        cout << m[j];

    return 0;
}
