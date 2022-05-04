#include <iostream>
#include<cstring>
using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }

        // virtual void display(){  //Below display function wont work unless we have this virtual display available in the base
        //     cout<<"bogous code"<<endl;
        // }

        virtual void display() = 0; // do nothing function --> pure virtual function
                                    /* when we use this,
                                     we have to make sure that their is a display function in derived class else the code
                                    wont work */
                                    // NOTE: Abstract Base class is a class which has atleast one Virtual Function.
        
};

class CWHVideo : public CWH{
    float videolenght;
    public:
        CWHVideo(string s, float r, float vl): CWH(s,r){
            videolenght = vl;
        }

        void display(){
            cout<<"This is an amazing video with the title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is "<<videolenght<<" minutes"<<endl;
        }
};

class CWHText : public CWH{
    int words;
    public:
        CWHText( string s, float r, int wc): CWH(s,r){
            words = wc;
        }

        void display(){
            cout<<"This is an amazing text tutorial with the title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Number of words in this text tutorial is: "<<words<<" words"<<endl;}
};

int main(){
    string title;
    float rating, vlen;
    int words;

    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);
    // djVideo.display();

    
    title = "Django tutorial text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);
    // djText.display();

    CWH* tuts[2];
    tuts [0] = &djVideo;
    tuts [1] = &djText;

    tuts[0]->display();
    tuts[1]->display();
 

return 0;
}
// Rules for Virtual Functions:
/*
1. They cannot be static
2. They are accessed by object pointers
3. Virtual functions can be a friend of another class
4. a virtual function in base class might not be used
5. If a virtual function is defined in a base class their is no necessity 
   of redefining it in the derived class
*/