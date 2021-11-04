#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void create(int* a, const int n, const int l, const int h);
void change(int* a, const int n);

int main() {
    srand((unsigned)time(NULL));

    const int n = 16;
    int a[n];

    int low = 0;
    int hight = 15;

    create(a, n, low, hight);

    cout << "=================================================================\n" << "|";

    for (int i = 0; i < n; i++) {
        cout << setw(3) << a[i] << "|";
    }
    cout << endl;

    change(a, n);

    cout << "=================================================================\n" << "|";

    for (int i = 0; i < n; i++) {
        cout << setw(3) << a[i] << "|";
    }
    cout << endl << "=================================================================\n";
}

void create(int* a, const int n, const int l, const int h)
{
    for (int i = 0; i < n; i++)
        a[i] = l + rand() % (h - l + 1);
}

void change(int* a, const int n) {
    int k;
    int p = n ;
    int i = 0;
     while(i<p){
        k = a[i];
        a[i] = a[i + 1];
        a[i + 1] = k;
        i += 2;
      }
}