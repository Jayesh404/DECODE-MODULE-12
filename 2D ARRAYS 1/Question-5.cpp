# include <iostream>
using namespace std;

int main(){

    int m,n;
    cout<<"Enter no of rows and column: "<<endl;
    cin>>m>>n;

    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int idx=0;
    int max=0;
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
        }
        if(max<sum){
            idx=i;
            max=sum;
        }
    }
    cout<<idx;
    return 0;
}