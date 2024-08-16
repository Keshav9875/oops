#include<bits/stdc++.h>
using namespace std;

class student{
    int age;
    int sid;

    public:
     void setage_sid(int age,int sid){
        this->age=age;
        this->sid=sid;
     }
     void getage_sid(){
        cout<<age;
        cout<<sid;
     }
     student(student &s){  //copy constructor give only reference otherwise recursion happens;
        this->age=s.age;
        this->sid=s.sid;
     }
     student(){
        cout<<"object initialize";
     }
};

int main(){
    student s;
    s.setage_sid(20,111);
    student s1(s);
    s1.getage_sid();

    

}