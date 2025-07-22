#include<iostream>
using namespace std;
class book{
public:
book() {
cout<<"book is opened."<<endl;
}
~book(){
cout<<"book is closed."<<endl;
}	
};
int main() {
book d;
return 0;	
}