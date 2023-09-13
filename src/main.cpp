#include <iostream>
using namespace std;
int main()
{

    int age;
    do{
    cout<<"Enter your age:"<<endl;
    cin>>age;
    if(age>=5 && age<=10)
    {
        cout<<"You are a children"<<endl;
        cout<<"--------------------------"<<endl;
    }
    else if(age>=11 && age<=25)
    {
        cout<<"You are a youth"<<endl;
        cout<<"--------------------------"<<endl;
    }
    else if(age>=26 && age<=45)
    {
        cout<<"You are a senior"<<endl;
        cout<<"--------------------------"<<endl;
    }
    else if(age>=46 && age<=60)
    {
        cout<<"You are a super senior"<<endl;
        cout<<"--------------------------"<<endl;
    }
    else if(age>=61 && age<=90)
    {
        cout<<"You are a senior citizen"<<endl;
        cout<<"--------------------------"<<endl;
    }
    else if(age>=91 && age<=100)
    {
        cout<<"Your are a nonagenarian"<<endl;
        cout<<"--------------------------"<<endl;
    }
    else if(age>=101)
    {
        cout<<"You are a more than nonagenarian"<<endl;
        cout<<"--------------------------"<<endl;
    }
    }while(age!=0);


    return 0;
}
