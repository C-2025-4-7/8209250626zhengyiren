#include <iostream>
#include <cmath> // 包含fabs（绝对值函数）
using namespace std;

int main() {
    double a, xn, xn1;
    cout << "请输入a的值：";
    cin >> a;
    if (a < 0) {
        cout << "错误：a不能为负数" << endl;
        return 1;
    }
    xn = a;
    do {
        xn1 = 0.5 * (xn + a / xn); 
        if (fabs(xn1 - xn) < 1e-5) break; 
        xn = xn1; 
    } while (true);

    cout << "a的平方根（精度1e-5）：" << xn1 << endl;
    return 0;
}