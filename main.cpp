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

    }

    void assignY(double y)
    {

    }

    void assignZ(double z)
    {

    }

    double magnitude()
    {
        return 0;
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

    }

    void assignY(double y)
    {

    }

    void assignZ(double z)
    {

    }

    double magnitude()
    {
        return 0;
    }

    void unitvector()
    {

    }
};

int main()
{
    electric_field edefault;
    electric_field ecomponents(1.0, 2.0, 3.0);
    magnetic_field mdefault;
    magnetic_field mcomponents(1.0, 2.0, 3.0);

    std::cout << edefault.getX() << " " << edefault.getY() << " " << edefault.getZ() << "\n";
    std::cout << ecomponents.getX() << " " << ecomponents.getY() << " " << ecomponents.getZ() << "\n";
    std::cout << mdefault.getX() << " " << mdefault.getY() << " " << mdefault.getZ() << "\n";
    std::cout << mcomponents.getX() << " " << mcomponents.getY() << " " << mcomponents.getZ() << "\n";

    return 0;
}
