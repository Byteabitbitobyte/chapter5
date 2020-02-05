#include <iostream>

using namespace std;

const float Pi = 3.14;

int main()
{

    int radius, height, volume;
    std::cout << "Enter Radius of the cylinder followed by the Height of the cylinder in cm:";
    cin >> radius >> height;
    volume = height * Pi * (radius * radius);
    std::cout << "Volume of cylinder in cubic cm:\n";
    cout << volume;

    return 0;

}


