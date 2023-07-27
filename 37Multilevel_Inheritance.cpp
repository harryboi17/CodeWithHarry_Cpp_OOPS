#include <iostream>
using namespace std;

class Student{
    protected:
        int roll_number;
    public:
        void set_rollnumber(int);
        void get_rollnumber(void);

};

void Student :: set_rollnumber(int r){
    roll_number = r;
}

void Student :: get_rollnumber(){
    cout<<"the roll number is "<<roll_number<<endl;
}

class Exam : public Student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float, float);
        void get_marks(void);
};

void Exam :: set_marks(float m1, float m2){
    maths = m1;
    physics = m2;
}

void Exam :: get_marks(){
    cout<<"the marks obtained in  maths are: "<<maths<<endl;
    cout<<"the marks obtained in  physics are: "<<physics<<endl;
}

class Result : public Exam{
    float percentage;
    public:
        void display(){
            get_rollnumber();
            get_marks();
            cout<<"your percentage is "<<(maths+physics)/2<<"%"<<endl;
        }
};

/*
[ A-->B-->C ]
1. ABC is called Inheritance Path
*/

int main(){
Result Harshit;
Harshit.set_rollnumber(17);
Harshit.set_marks(94 , 95);
Harshit.display();

return 0;
}