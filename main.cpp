#include <iostream>
#include <cmath>

using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

int main() {
    double x1, y1, x2, y2;

    cout << "Enter x-coordinate of point 1: ";
    cin >> x1;
    cout << "Enter y-coordinate of point 1: ";
    cin >> y1;

    cout << "Enter x-coordinate of point 2: ";
    cin >> x2;
    cout << "Enter y-coordinate of point 2: ";
    cin >> y2;

    double dist = distance(x1, y1, x2, y2);
    cout << "The Euclidean distance between the two points is: " << dist << endl;

    return 0;
}
