#include<iostream>
using namespace std;
class student
{
   private:
   char grade;
   int age;

    public:
    string name;
    int rollNo;
    
    
    int getGrade()
    {
        return grade;
    }

    char getAge()
    {
        return age;
    }

    setGrade(char h)
    {
        grade = h;
    }

    setAge(int l)
    {
        age = l;
    }
    void printStudentDEtails(){
        cout<<"student name : "<<name<<endl;
        cout<<"student Roll no : "<<rollNo<<endl;
        cout<<"student Age : "<<age<<endl;
        cout<<"student Grade : "<<grade<<endl;
    }

};

int main(){
   student one;
   one.name = "rahul";
   one.printStudentDEtails();


    return 0;
}