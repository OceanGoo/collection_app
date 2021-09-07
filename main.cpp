#include <iostream>
using namespace std;
int main() {
    int a[5];
    cout << "Plese enter 5 number" << endl;
    for(int i = 0 ;i<5;i++){
        cin>>a[i];
    }
    int tb = a[0];
    int ts = a[0];
    int total = a[0];
    for (int i = 1;i<5;i++){
        total += a[i];
        if(tb<a[i])
            tb = a[i];
        if(ts>a[i])
            ts = a[i];
    }
    cout << "max : " << total - ts << endl;
    cout << "min : " << total - tb << endl;
}
