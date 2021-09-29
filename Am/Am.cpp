

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x1, x2, x3, y1, y2, y3, p, s, a, b, c;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    c = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    p = a + b + c;
    s = sqrt((p / 2) * ((p / 2) - a) * ((p / 2) - b) * ((p / 2) - c));
    cout <<"P = " << p << "   S = " << s << "   (^-^)";

}

//с клав координаты трех точекб S и P 