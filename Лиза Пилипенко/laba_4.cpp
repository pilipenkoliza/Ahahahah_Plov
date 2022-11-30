#include <iostream>
#include <ctime>

using namespace std;

void swape(int& a, int& b) {
    int buffer = a;
    a = b;
    b = buffer;
}

void shuffle(int* mass, int N)
{
    for (int i = 0; i < N; ++i)
        swape(mass[i], mass[rand ()% N]);
}
 
int main(){
    int N;
    cout << "Array size: " << endl;
    cin >> N;
    int* mass = new int[N];
    cout << "Array elements: " << endl;
    for (int r = 0; r < N; r++) {
        cin >> mass[r];
    }
    srand(time(NULL));

    shuffle(mass, N);
    for (int j = 0; j < N; ++j)
        cout << mass[j];
    delete[] mass;
    return 0;
}
