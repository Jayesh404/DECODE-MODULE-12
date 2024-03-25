# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<vector<int>> res(n,vector<int>(n));
    int minr=0,minc=0;
    int maxr=n-1,maxc=n-1;
    int count=1;
    while(minc<=maxc && minr<=maxr){
        
        for(int i=minc;i<=maxc;i++){
            res[minr][i]=count;
            count++;
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        for(int i=minr;i<=maxr;i++){
            res[i][maxc]=count;
            count++;
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        for(int i=maxc;i>=minc;i--){
            res[maxr][i]=count;
            count++;
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;
        for(int i=maxr;i>=minr;i--){
            res[i][minc]=count;
            count++;
        }
        minc++;
        if(minr>maxr || minc>maxc) break;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}