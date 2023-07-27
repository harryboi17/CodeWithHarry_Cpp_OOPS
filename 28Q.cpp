#include <iostream>
#include <math.h>
#include<cmath>
using namespace std;

class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }

    friend double distanceCalc(point, point);

    void displayPoint()
    {
        cout << "the point is (" << x << ", " << y << ")" << endl;
    }
};

// Create a fucntion which takes two point objects and compute the distance between two points.

double distanceCalc(point p1, point p2)
{
    double d = sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
    cout<<"the distance is "<<d<<endl;
};

int main()
{
    point p(1, 1);
    p.displayPoint();

    point q(4, 6);
    q.displayPoint();

    distanceCalc(q, p);
    return 0;
}