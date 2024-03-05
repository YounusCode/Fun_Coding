#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double radius;
    double weight;
    const double helium_lift = 9.958736e-7; // Lift of helium in kg/cm^3

    cout << "Radius of one balloon (cm): " << endl;
    cin >> radius;
    cout << "Weight of object being lifted (kg): " << endl;
    cin >> weight;

    double volume = (4.0 / 3.0) * M_PI * pow(radius, 3); 

    int num_balloons = 1 + weight / (volume * helium_lift);

    double total_volume = num_balloons * volume;

    cout << "Volume for one balloon (cm^3): " << endl;
    cout << volume << endl;
    cout << "Number of balloons needed: " << endl;
    cout << num_balloons << endl;
    cout << "Total Volume (cm^3): " << endl;
    cout << total_volume << endl;

    return 0;
}
