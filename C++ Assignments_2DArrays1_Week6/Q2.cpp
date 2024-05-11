#include<iostream>
using namespace std;
int main(){
  //Input for row and column
  int m,n;
  cout<<"Enter no. of rows:";
  cin>>m;
  cout<<"Enter no. of columns:";
  cin>>n;

  //Matrix 1
  int arr1[m][n];
  //Matrix 2
  int arr2[m][n];

  //Element Input
  cout<<"Enter Elements for Matrix 1 :"<<endl;
  for(int i=0;i<m;i++){
    for(int j =0;j<n;j++){
        cin>>arr1[i][j];
    }
  }
  cout<<"Enter Elements for Matrix 2 :"<<endl;
  for(int i=0;i<m;i++){
    for(int j =0;j<n;j++){
        cin>>arr2[i][j];
    }
  }
  //Addition and storing in matrix 2
  for(int i=0;i<m;i++){
    for(int j =0;j<n;j++){
        arr2[i][j]=arr2[i][j]+arr1[i][j];

    }
  }

  //Printing Matrix 2
  cout<<"Result:"<<endl;
  for(int i=0;i<m;i++){
    for(int j =0;j<n;j++){
        cout<<arr2[i][j]<<" ";
    }
    cout<<endl;
  }
  
}