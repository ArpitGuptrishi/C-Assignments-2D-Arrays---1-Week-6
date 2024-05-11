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

  // Input coordinate 1
  cout<<"Enter coordinate 1:"<<endl;
  int l1,r1;
  cin>>l1;
  cin>>r1;
  
  // Input coordinate 2
  cout<<"Enter coordinate 2:"<<endl;
  int l2,r2;
  cin>>l2;
  cin>>r2;
  int temp=0;
  if(l1>l2){
    for(int i=l2;i<=l1;i++){
        if (r1>r2){
            for (int j=r2;j<=r1;j++){
                temp +=arr[i][j];
            }
        }
        else{
            for (int j=r2;j>=r1;j--){
                temp +=arr[i][j];
            }
        }
    }
  }
 else{
    for(int i=l2;i>=l1;i--){
        if (r1>r2){
            for (int j=r2;j<=r1;j++){
                temp +=arr[i][j];
            }
        }
        else{
            for (int j=r2;j>=r1;j--){
                temp +=arr[i][j];
            }
        }
    }
 }
 cout<<"Sum="<<temp;
}