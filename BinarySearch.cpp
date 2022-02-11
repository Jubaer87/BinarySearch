
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x[n];
    for(int i=0; i<n; i++){
        cin>>x[i];
    }
    int k;
    cout<<"Enter your target value:"<<endl;
    cin>>k;
    int f=0, l=n-1, mid, flag=-1;
    while(f<=l){
        mid = (f+l)/2;
        if(x[mid]==k){
            flag=1;
            break;
        }else if(x[mid]<k){
            f = mid+1;
        }else if(x[mid]>k){
            l = mid-1;
        }
    }
    if(flag==1){
        cout<<"Found your value in the array."<<endl;
    }else{
        cout<<"Not found your target value in the array."<<endl;
    }

    return 0;
}
