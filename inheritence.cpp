#include<iostream>
using namespace std;
class beingHuman{
    public:
    int height;
    int weight;
    int age;

    int getAge(){
        return this->age;
    }
    void setAge(int age){
        this->age = age;
    }

};
// creating a class male which is inherited by class beingHuman
class Male: public beingHuman{
    public:
    int HardWorkEfficiency;
    int sleepHours;
    
};
int main(){
    Male m1;
    cout<<"The Weight of m1 : "<<m1.weight<<endl;
}