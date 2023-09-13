#include <iostream>

using namespace std;

template<class T>
T sum(T a,T b){
    return a + b;
}

int main()
{
    cout << "Hello world!" << endl;
    cout << "Hello world!" << endl;
    cout << sum(1,2) << endl;
    return 0;
}
