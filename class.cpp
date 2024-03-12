// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class student{
    private:
        char name[20];
        int er_no, sub1,sub2,sub3;
    public:
        void indata()
        {
            cout<<"enter student name=\t\t";
            cin>>name;
            cout<<"enter enrollment no.=\t";
            cin>>er_no;
            cout<<"enter subject 1 mark=\t";
            cin>>sub1;
            cout<<"enter subject 2 mark=\t";
            cin>>sub2;
            cout<<"enter subject 3 mark=\t";
            cin>>sub3;
            cout<<"_______________________________\n";
        }
        void opdata()
        {
            float per;
            per=(sub1+sub2+sub3)/3;
            cout<<"percentage of subjets=\t"<<per;
        }
};
    int main()
    {
        student p;
        p.indata();
        p.opdata();
    }
    

