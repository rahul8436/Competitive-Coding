#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    for(int i=0;i<T;i++){
        int k,n;
    cin >> n >> k;

    int ar[n];
    for(int i=0;i<n;i++){
        ar[i] = i+1;
    }

    int nk = n - k;
    int index = 1;

    for(int i=0;i<nk;i++){
        if(index>n){
            if(n%2==0){
                index = n;
            }else{
                index = n-1;
            }
            for(int j=i;j<nk;j++){
                ar[index-1] *= (-1);
                index -= 2;
            }
            break;
        }
        ar[index-1] *= (-1);
        index += 2;
    }

    for(int i=0;i<n;i++){
        cout << ar[i] << " ";
    }

    cout << "\n";
    }

    return 0;
}
