#include<ctime>
#include <iostream>
using namespace std;
void rate(int);
int main ()
{
srand(time(0));   
int x = rand()%2500;
int y;
int z;

cout<<"to start the game Enter Number From 0 to 2500 : ";
while (y!=x)
{
cin>>y;
z++;
if(x>y){cout<<"your number is less than ours \n"<<"try again\n";}
else if (x<y){
    cout<<"your number greater than ours \n"<<"try again\n";;
}
else {
cout<<"GG we have winner now you passed the game after "<<z<<endl ;
cout<<"Your Rate Is: ";
rate(z);
}
}
return 0;
}
void rate(int n){
if(n<=5){
    cout<<"A+"<<endl;
}
else if(n>5||n<=7){
cout<<"A"<<endl;
}
else if(n>7||n<=9){
    cout<<"A-"<<endl;
}
else if(n>9||n<=12){
    cout<<"B+"<<endl;
}
else if(n>12||n<=15){
    cout<<"B-"<<endl;
}
else if(n>15||n<=18){
    cout<<"B"<<endl;
}
else if(n>18||n<=21){
    cout<<"C+"<<endl;
}
else if(n>21||n<=24){
    cout<<"C"<<endl;
}
else if(n>24||n<=27){
    cout<<"C-"<<endl;
}
else{
    cout<<"D"<<endl;
}
}