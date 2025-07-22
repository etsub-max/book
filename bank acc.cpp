#include<iostream>
using namespace std;
class bankaccount{
private:
int balance;
public:
void setdeposit(int d) {
balance = d;
}
int getbalance() {
return balance;	
}
};
int main() {
bankaccount b;
b.setdeposit(1000);
cout<<"deposit:"<<b.getbalance()<<endl;	
return 0;	
}
