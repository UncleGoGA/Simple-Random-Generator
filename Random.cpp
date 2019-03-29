#include <iostream>

using namespace std;

int random(int a, int b, int c, int m){
    a = (b * a + c)%m;
    return a;
}

int main(){
    const int b = 1366;
    const int c = 1283;
    const int m = 6075;
    int a, safe;
    cin >> a;
    safe = a;
    do{
        cout << random(a,b,c,m) << endl;
    }
    while(a != safe);

    return 0;
}