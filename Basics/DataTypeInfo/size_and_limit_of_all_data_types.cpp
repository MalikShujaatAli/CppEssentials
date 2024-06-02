#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;

int main()
{
    system("cls");
  
    cout << "Data type: char" << endl;
    cout << "Size: " << sizeof(char) << " bytes" << endl;
    cout << "Minimum value: " << CHAR_MIN << endl;
    cout << "Maximum value: " << CHAR_MAX << endl;
    cout << endl;

    cout << "Data type: unsigned char" << endl;
    cout << "Size: " << sizeof(unsigned char) << " bytes" << endl;
    cout << "Minimum value: 0" << endl;
    cout << "Maximum value: " << UCHAR_MAX << endl;
    cout << endl;

    cout << "Data type: short" << endl;
    cout << "Size: " << sizeof(short) << " bytes" << endl;
    cout << "Minimum value: " << SHRT_MIN << endl;
    cout << "Maximum value: " << SHRT_MAX << endl;
    cout << endl;

    cout << "Data type: unsigned short" << endl;
    cout << "Size: " << sizeof(unsigned short) << " bytes" << endl;
    cout << "Minimum value: 0" << endl;
    cout << "Maximum value: " << USHRT_MAX << endl;
    cout << endl;

    cout << "Data type: int" << endl;
    cout << "Size: " << sizeof(int) << " bytes" << endl;
    cout << "Minimum value: " << INT_MIN << endl;
    cout << "Maximum value: " << INT_MAX << endl;
    cout << endl;

    cout << "Data type: unsigned int" << endl;
    cout << "Size: " << sizeof(unsigned int) << " bytes" << endl;
    cout << "Minimum value: 0" << endl;
    cout << "Maximum value: " << UINT_MAX << endl;
    cout << endl;

    cout << "Data type: long" << endl;
    cout << "Size: " << sizeof(long) << " bytes" << endl;
    cout << "Minimum value: " << LONG_MIN << endl;
    cout << "Maximum value: " << LONG_MAX << endl;
    cout << endl;

    cout << "Data type: unsigned long" << endl;
    cout << "Size: " << sizeof(unsigned long) << " bytes" << endl;
    cout << "Minimum value: 0" << endl;
    cout << "Maximum value: " << ULONG_MAX << endl;
    cout << endl;

    cout << "Data type: long long" << endl;
    cout << "Size: " << sizeof(long long) << " bytes" << endl;
    cout << "Minimum value: " << LLONG_MIN << endl;
    cout << "Maximum value: " << LLONG_MAX << endl;
    cout << endl;

    cout << "Data type: unsigned long long" << endl;
    cout << "Size: " << sizeof(unsigned long long) << " bytes" << endl;
    cout << "Minimum value: 0" << endl;
    cout << "Maximum value: " << ULLONG_MAX << endl;
    cout << endl;

 
    cout << "Data type: float" << endl;
    cout << "Size: " << sizeof(float) << " bytes" << endl;
    cout << "Minimum value: " << FLT_MIN << endl;
    cout << "Maximum value: " << FLT_MAX << endl;
    cout << endl;

    cout << "Data type: double" << endl;
    cout << "Size: " << sizeof(double) << " bytes" << endl;
    cout << "Minimum value: " << DBL_MIN << endl;
    cout << "Maximum value: " << DBL_MAX << endl;
    cout << endl;

    cout << "Data type: long double" << endl;
    cout << "Size: " << sizeof(long double) << " bytes" << endl;
    cout << "Minimum value: " << LDBL_MIN << endl;
    cout << "Maximum value: " << LDBL_MAX << endl;
    cout << endl;

    cout << "Data type: bool" << endl;
    cout << "Size: " << sizeof(bool) << " bytes" << endl;
    cout << "Minimum value: false (0)" << endl;
    cout << "Maximum value: true (1)" << endl;
    cout << endl;

    return 0;
}
