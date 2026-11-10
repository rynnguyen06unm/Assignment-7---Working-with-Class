#include <cmath>
#include <iostream>

// electric field class
class electric_field
{
  private:
    double *efield;

  public:
    // default starts at 0, 0, 0
    electric_field()
    {
        efield = new double[3];
        efield[0] = efield[1] = efield[2] = 0.0;
    }

    // setting up 3 doubles for constructor, x, y, z
    electric_field(double x, double y, double z)
    {
        efield = new double[3];
        efield[0] = x; efield[1] = y; efield[2] = z;
    }

    // destructor frees the array
    ~electric_field() { delete[] efield; }

    // getters and setters
    double getX() { return efield[0]; }
    double getY() { return efield[1]; }
    double getZ() { return efield[2]; }
    void assignX(double x) { efield[0] = x; }
    void assignY(double y) { efield[1] = y; }
    void assignZ(double z) { efield[2] = z; }

    // square root of x^2 + y^2 + z^2, gives the length of the field vector
    double magnitude()
    {
        return std::sqrt(efield[0] * efield[0] + efield[1] * efield[1] + efield[2] * efield[2]);
    }

    // dot product of the field with itself, x*x + y*y + z*z
    double innerproduct()
    {
        return efield[0] * efield[0] + efield[1] * efield[1] + efield[2] * efield[2];
    }
};

// magnetic field class
class magnetic_field
{
  private:
    double *mfield;

  public:
    // default starts at 0, 0, 0
    magnetic_field()
    {
        mfield = new double[3];
        mfield[0] = mfield[1] = mfield[2] = 0.0;
    }

    // setting up 3 doubles for constructor, x, y, z
    magnetic_field(double x, double y, double z)
    {
        mfield = new double[3];
        mfield[0] = x; mfield[1] = y; mfield[2] = z;
    }

    // destructor frees the array
    ~magnetic_field() { delete[] mfield; }

    // getters and setters
    double getX() { return mfield[0]; }
    double getY() { return mfield[1]; }
    double getZ() { return mfield[2]; }
    void assignX(double x) { mfield[0] = x; }
    void assignY(double y) { mfield[1] = y; }
    void assignZ(double z) { mfield[2] = z; }

    // square root of x^2 + y^2 + z^2, gives the length of the field vector
    double magnitude()
    {
        return std::sqrt(mfield[0] * mfield[0] + mfield[1] * mfield[1] + mfield[2] * mfield[2]);
    }

    // prints the unit vector, each component divided by the magnitude so the length ends up as 1
    void unitvector()
    {
        std::cout << "(" << mfield[0] / magnitude() << ", " << mfield[1] / magnitude() << ", " << mfield[2] / magnitude() << ")\n";
    }
};

int main()
{
    // set up default, components, and setters for each field
    electric_field edefault;
    electric_field ecomponents(1.0, 2.0, 3.0);
    electric_field eassign;
    eassign.assignX(1.0); eassign.assignY(2.0); eassign.assignZ(3.0);
    magnetic_field mdefault;
    magnetic_field mcomponents(1.0, 2.0, 3.0);
    magnetic_field massign;
    massign.assignX(1.0); massign.assignY(2.0); massign.assignZ(3.0);

    // print magnitudes for each field
    std::cout << "Electric field default magnitude = " << edefault.magnitude() << "\n";
    std::cout << "Electric field components magnitude = " << ecomponents.magnitude() << "\n";
    std::cout << "Electric field assigned (" << eassign.getX() << ", " << eassign.getY() << ", " << eassign.getZ() << ") magnitude = " << eassign.magnitude() << "\n";
    std::cout << "Magnetic field default magnitude = " << mdefault.magnitude() << "\n";
    std::cout << "Magnetic field components magnitude = " << mcomponents.magnitude() << "\n";
    std::cout << "Magnetic field assigned (" << massign.getX() << ", " << massign.getY() << ", " << massign.getZ() << ") magnitude = " << massign.magnitude() << "\n";

    // inner product for electric, unit vector for magnetic
    std::cout << "Inner product of electric field assigned = " << eassign.innerproduct() << "\n";
    std::cout << "Unit vector of magnetic field assigned = ";
    massign.unitvector();

    return 0;
}
