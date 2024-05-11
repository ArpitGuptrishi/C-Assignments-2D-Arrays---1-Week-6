#include<iostream>
using namespace std;
int main(){
//Input for row and column
  int m,n;
  cout<<"Enter no. of rows:";
  cin>>m;
  cout<<"Enter no. of columns:";
  cin>>n;

  //Matrix 
  int arr[m][n];
  //Element Input
  cout<<"Enter Elements for Matrix :"<<endl;
  for(int i=0;i<m;i++){
    for(int j =0;j<n;j++){
        cin>>arr[i][j];
    }
  }
  int a =(m-1)/2;
  int b =(n-1)/2;
  for(int i=0;i<m;i++){
    for(int j =0;j<n;j++){
        if (i==a || j==b){
        cout<<arr[i][j]<<" ";
        }
        else{
            cout<<"  ";
        }
    
    }
    cout<<endl;
  }

}