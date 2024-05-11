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
  int temp;
  int final;
  int rno;
  for(int i=0;i<m;i++){
    int rsum=temp;
    temp=0;
    for(int j =0;j<n;j++){
        temp=arr[i][j]+temp;  
    }
    if (temp>rsum){
        final=temp;
        rno=i;
    }
  }
  cout<<"Row with maximum sum is "<<rno+1;

}