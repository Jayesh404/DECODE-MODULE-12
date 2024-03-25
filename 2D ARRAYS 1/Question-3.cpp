# include <iostream>
using namespace std;

int main(){

    int m,n;
    cout<<"Enter no of rows and column: "<<endl;
    cin>>m>>n;

    int l1,r1,l2,r2;
    cout<<"Enter l1,r1,l2,r2 : "<<endl;
    cin>>l1>>r1>>l2>>r2;

    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int sum=0;
    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
            sum+=arr[i][j];
        }
    }
    cout<<sum;
    return 0;
}