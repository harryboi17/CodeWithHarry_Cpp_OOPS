#include <iostream>
#include <exception>
#include <string>
#include <stdexcept>
#include <vector>
#include <cmath>
using namespace std;

class Server {
private:
public:
	static int load;
	static int compute(long long A, long long B) {
		load += 1;
		if(A < 0) {
			throw ("A is negative");
		}
		vector<int> v(A, 0);
		int real = -1, cmplx = sqrt(-1);
		if(B == 0) throw 0;
		real = (A/B)*real;
		int ans = v.at(B);
		return real + A - B*ans;
	}
	static int getLoad() {
		return load;
	}
};
int Server::load = 0;

int main() {
	int T; 
    cout<<"Enter the value: "<<endl;
    cin >> T;
	while(T--) {
		long long A, B;
        cout<<"Enter the valur of A and B: "<<endl;
		cin >> A >> B;

        try {
        if (A>= pow(2,4) || B>= pow(2,4)) {
        cout<<"Not enough memory"<<endl;
		Server::load+=1;
		break;
        }
        cout<<Server::compute(A, B)<<endl;
        }
        catch (const char *e) {
        cout<<"Exception: "<<e<<endl;
        }
        catch(...){
            cout<<"Other exception"<<endl;
        }
         
	}
	cout << Server::getLoad() << endl;
	return 0;
}