#include<iostream>
using namespace std;

class Students{    ///Class

private:          ///Data Member
    int Roll_No;
    string name;

public:          ///Member Function

     void Accept(){       ///Methods

      cout<<"Enter Your Roll_No :";
      cin>>Roll_No;

      cout<<"Enter Your Name :";
      cin>>name;


     }

     void Display(){

      cout<<"Your Roll_No is :"<<Roll_No<<endl;

      cout<<"Your Name is :"<<name<<endl;


     }

};

int main()
{
    Students S1;

    S1.Accept();
    S1.Display();

    return 0;

}
