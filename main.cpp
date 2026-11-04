#include <cmath>
#include <iostream>

class electric_field
{
  private:
    double *efield;

  public:
    electric_field()
    {
        efield = new double[3];
        efield[0] = 0.0;
        efield[1] = 0.0;
        efield[2] = 0.0;
    }

    electric_field(double x, double y, double z)
    {
        efield = new double[3];
        efield[0] = x;
        efield[1] = y;
        efield[2] = z;
    }

    ~electric_field()
    {
        delete[] efield;
    }

    double getX()
    {
        return efield[0];
    }

    double getY()
    {
        return efield[1];
    }

    double getZ()
    {
        return efield[2];
    }

    void assignX(double x)
    {
        efield[0] = x;
    }

    void assignY(double y)
    {
        efield[1] = y;
    }

    void assignZ(double z)
    {
        efield[2] = z;
    }

    double magnitude()
    {
        return std::sqrt(efield[0] * efield[0] + efield[1] * efield[1] + efield[2] * efield[2]);
    }

    double innerproduct()
    {
        return 0;
    }
};

class magnetic_field
{
  private:
    double *mfield;

  public:
    magnetic_field()
    {
        mfield = new double[3];
        mfield[0] = 0.0;
        mfield[1] = 0.0;
        mfield[2] = 0.0;
    }

    magnetic_field(double x, double y, double z)
    {
        mfield = new double[3];
        mfield[0] = x;
        mfield[1] = y;
        mfield[2] = z;
    }

    ~magnetic_field()
    {
        delete[] mfield;
    }

    double getX()
    {
        return mfield[0];
    }

    double getY()
    {
        return mfield[1];
    }

    double getZ()
    {
        return mfield[2];
    }

    void assignX(double x)
    {
        mfield[0] = x;
    }

    void assignY(double y)
    {
        mfield[1] = y;
    }

    void assignZ(double z)
    {
        mfield[2] = z;
    }

    double magnitude()
    {
        return std::sqrt(mfield[0] * mfield[0] + mfield[1] * mfield[1] + mfield[2] * mfield[2]);
    }

    void unitvector()
    {

    }
};

int main()
{
    electric_field edefault;
    electric_field ecomponents(1.0, 2.0, 3.0);
    electric_field eassign;
    eassign.assignX(1.0);
    eassign.assignY(2.0);
    eassign.assignZ(3.0);

    magnetic_field mdefault;
    magnetic_field mcomponents(1.0, 2.0, 3.0);
    magnetic_field massign;
    massign.assignX(1.0);
    massign.assignY(2.0);
    massign.assignZ(3.0);

    std::cout << "edefault: " << edefault.magnitude() << "\n";
    std::cout << "ecomponents: " << ecomponents.magnitude() << "\n";
    std::cout << "eassign: " << eassign.magnitude() << "\n";
    std::cout << "mdefault: " << mdefault.magnitude() << "\n";
    std::cout << "mcomponents: " << mcomponents.magnitude() << "\n";
    std::cout << "massign: " << massign.magnitude() << "\n";

    return 0;
}
