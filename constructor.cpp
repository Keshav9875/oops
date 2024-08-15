#include<bits/stdc++.h>
using namespace std;

class student{
    private:
      int age=-1;
      int sid=-1;
      static string name;

    public:

     void getAge(){
        cout<<"Age of student is "<<age<<endl;
     }

     void setAge(int age);// function prototype.

     void instancefun(){
        cout<<name;
     }
     
     static void staticfun(){ //static member fun
        cout<<name<<endl;
        // cout<<age<<endl; //error u can't access member variables in static fun...s
     }
     student(){// construtor in c++
        cout<<"object initilization done..."<<endl;
     }
     student(int age){// construtor in c++
         this->age=age;
          cout<<"object initilization done..."<<endl;
     }
     student(int age ,int sid){// construtor in c++
       this->age=age;
       this->sid=sid;
        cout<<"object initilization done..."<<endl;
     }
        
     
  
};
string student::name="ajeet";
void student::setAge(int age){
    this->age=age;
}

int main(){
    student s1;
    student s2(12); //constructor overloading...
    student s3(13,786);
    student s4=student(14);
    student s5=23;

    s1.getAge();
    s2.getAge();
    s3.getAge();
    s4.getAge();
    s5.getAge();

    // cout<<student::name<<endl;
    // student::name="keshav";
    // cout<<student::name<<endl;
    // student::staticfun();
    // s1.instancefun();
    // s1.getAge();
    // s1.setAge(20);
    // s1.getAge();
    

   
}