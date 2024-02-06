#include <iostream>
using namespace std;


int main() {
 string expression ;

 cout<<"Enter the Expression :"<<endl;
 cin>>expression;

 for(char& input:expression)
 if(input =='+' || input =='-' || input =='*' || input =='/' || input =='=' || input =='%'){

    cout<< "Operator is:"<<input<<endl;

 }


}
