# include <iostream>
# include <math.h>

using namespace std;

bool ktr_snt (int n) {
    for (int i=2;i<sqrt(n);i++){
        if (n%i==0) return false;
    }
    return true;

}


int main() {
    int n; cin>>n;
    if (ktr_snt(n)) cout<<n<<" la so nguyen to\n";
    else cout<<n<< " khong la so nguyen to\n";
    return 0;

}