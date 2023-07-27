#include <iostream>
using namespace std;

class Student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no = a;
        }

        void print_no(){
            cout<<"Your roll number is "<<roll_no<<endl;
        }    
};

class Test : virtual public Student{ // If we didnt used the word virtual then, their would an ambiguity as the setnumber function will be Inheritate
                                     // to both Test and Sports, and then while running Result class, it would have the set roll function from 2 diff classed
                                     // creating an amiguity
    protected:
        float maths, physics;
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }

        void print_marks(){
            cout<<"You have obtained "<<endl
                <<"Maths: "<<maths<<endl<<"Physics: "<<physics<<endl;
        }
};

class Sports : virtual public Student{
    protected:
        float score;
    public:
        void set_score(float a){
            score = a;
        }

        void print_score(){
            cout<<"Your PT score is "<<score<<endl;
        }
};

class Result : public Test, public Sports{
    private:
        float total;
    public:
        void display(void){
            total = maths + physics + score;
            print_no();
            print_marks();
            print_score();

            cout<<"Your total marks obtained is "<<total<<endl;
        }
};

int main(){
    Result R;
    R.set_number(2);
    R.set_marks(70.5, 34.78);
    R.set_score(23.777);
    R.display();

return 0;
}