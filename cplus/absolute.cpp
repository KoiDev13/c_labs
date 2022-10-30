#include <iostream>

using namespace std;

int abs(int x){
    if (x < 0){
        return -x;
    } else {
        return x;
    }
}

int main(){
    int a, absa;
    cout << "Nhap so thuc bat ky: ";
    cin >> a;
    absa = abs(a);
    cout << "Tri tuye doi cua a la " << absa << "\n";
    return 0;
}