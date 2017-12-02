 /*
    Glenn Ahearne
    06/11/17
    Exercise 4
    Electrical Resistance of a wire
  */

  /**Preprocessive Directives*/
#include <iostream>
#include <cmath>
//#define PI 3.141592654

/**Function Prototypes*/
int main();
double resistance(double R, double L, double rho);

using namespace std;

/**Main Function*/
int main()
{

    /**Variable Declarations*/
    double res, radius, length, rho;

    /**Assigning Values to variables*/
    radius = 0;
    length = 0;
    rho = 0;

    /**while loop to ensure radius is greater than zero*/
    while (radius <= 0)
    {

        cout << "\n\tEnter Value for Radius : ";
        cin >> radius;

    }

    /**while loop to ensure length is greater than zero*/
    while (length <= 0)
    {

        cout << "\n\tEnter Value for length : ";
        cin >>length;

    }

    /**while loop to ensure resistivity is greater than zero*/
    while (rho <= 0)
    {

        cout << "\n\tEnter Value for Resistivity : ";
        cin >>rho;

    }

    /**calling res function and passing values to it*/
    res = resistance(radius, length, rho);

    /**Read out Resistivity to user*/
    cout <<"\n\t Resistivity of Wire is : " << res << " Ohms" <<endl;


    return 0;
}



/**Resistance Function of type double*/
double resistance(double R, double L, double rho)
{
    /**Calculating resisitivity*/
    double area, res;

    area = M_PI * (R * R);

    res = rho * (L/area);

    return res;
}
