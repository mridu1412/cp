#include <iostream>

int main()
{

    using namespace std;
    int j=3;
    int k=4;
    int l=5;
    auto f=[j,&k] {return j+k;};//j by value,k by reference
    auto f2=[&] {return j+k+l;};//j,k and l by reference by default
    auto f3=[=] {return j+k+l;};//j,k,l by value by default
    auto f4=[&] {return "f4";};//No variables so empty capture
    // Assign the lambda expression that adds two numbers to an auto variable.
    auto f1 = [](int x, int y) { return x + y; };
   cout << "Values as entered are x=2, y=3, j=3 k=4 l=5" <<endl;
   cout <<"Order of functions f1 (x+y)  f(j+k) f2(j+k+l) f3(j+k+l) f4(f4)" << endl;

    cout << f1(2, 3) << endl;
    cout << f() <<endl;
    cout << f2() <<endl;
    cout <<f3() <<endl;
    cout << f4() <<endl;

}
