# include <iostream>
using namespace std;

int main(){

    int arr[10][10];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            arr[i][j]=1;
        }
    }

    arr[3][4]=0;
    arr[6][8]=0;

    // using two 1D arrays

    bool row[10]={false};
    bool cols[10]={false};
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(arr[i][j]==0){
                row[i]=true;
                cols[j]=true;
            }
        }
    }
    for(int i=0;i<10;i++){
        if(row[i]==true){
            for(int k=0;k<10;k++){
                arr[i][k]=0;
            }
        }
    }
    for(int j=0;j<10;j++){
        if(cols[j]==true){
            for(int m=0;m<10;m++){
                arr[m][j]=0;
            }
        }
    }

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}