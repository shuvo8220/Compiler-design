#include<iostream>
using namespace std;

int main(){

  int n;
  cout<<"enter the number"<<endl;
  cin>>n;

  if(n<0){


    cout<<"factorial is no define negative number"<<endl;


  }

  int factorial=1;

  for(int i=2; i<n; ++i){


    factorial*=i;


  }


  cout<<factorial<<endl;

  return 0;


}
