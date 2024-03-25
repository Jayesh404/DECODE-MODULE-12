# include <iostream>
using namespace std;

int main(){

    int m,n;
    cout<<"Enter no of rows and column: "<<endl;
    cin>>m>>n;

    int arr1[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<endl;
    int arr2[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr2[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr1[i][j]+arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}