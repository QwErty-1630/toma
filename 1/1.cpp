#include <iostream>
#include <iomanip>
using namespace std;

double c(int n) {
    if (n == 0) return 0.5;
    return 1.0 / (n + c(n - 1));
}
double a(int n) {
    double result = 2;
    if (n == 0) return 1;
    for (int i = 0; i <= n; i++) {
        result = 1.0 / (i + result);
    }
    return result;
}
int main() {
    setlocale(LC_ALL, "rus");
    int n;
    cout << "Введите значение n: ";
    cin >> n;
    if (n <= 0) {
        cout << "n должно быть натуральным" << endl;
        return 1;
    }
    double result = c(n);
    double rez = a(n);
    cout << fixed << setprecision(6);
    cout << "y(" << n << ") = " << result << endl;
    cout << "y(" << n << ") = " << rez << endl;
    return 0;
}