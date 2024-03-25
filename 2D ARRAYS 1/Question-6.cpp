# include <iostream>
using namespace std;

void func(int arr[][3],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==n/2 || j==n/2) cout<<arr[i][j]<<" ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}

int main(){

    int n;
    cout<<"Enter n : "<<endl;
    cin>>n;

    int arr[3][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    func(arr,n);
    return 0;
}