#include <iostream>
#include <math.h>

using namespace std;

class power
{
public:
    double setdata(double, int = 2);
    //getter function --> To display the result
    void getdata(double x, int = 2)
    {
        double result;
        cout << x << "^" << 2 << "=" << result;
        cout << endl;
    }
};
  //setter function --> To calculate power
double power ::setdata(double x, int y)
{
    double result = pow(x, y);
    return result;
}
int main()
{
    power p;
    double m, result;
    int n;
    cout << "Enter the value of base" << endl;
    cin >> m;
    p.setdata(m);
    p.getdata(m, result);
    return 0;
}
