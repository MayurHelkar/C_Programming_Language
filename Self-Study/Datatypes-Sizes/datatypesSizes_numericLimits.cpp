using namespace std;

#include <iostream>
#include <limits>

int main()
{
    cout << "bool ::" << endl;
    cout << "min value : " << numeric_limits<bool>::min() << " and ";
    cout << "max value : " << numeric_limits<bool>::max() << endl;

    cout << endl;

    cout << "char ::" << endl;
    cout << "min value : " << int(numeric_limits<char>::min()) << " and ";
    cout << "max value : " << int(numeric_limits<char>::max()) << endl;
    cout << "char signed ::" << endl;
    cout << "min value : " << int(numeric_limits<char signed>::min()) << " and ";
    cout << "max value : " << int(numeric_limits<char signed>::max()) << endl;
    cout << "signed char ::" << endl;
    cout << "min value : " << int(numeric_limits<signed char>::min()) << " and ";
    cout << "max value : " << int(numeric_limits<signed char>::max()) << endl;
    cout << "char unsigned ::" << endl;
    cout << "min value : " << int(numeric_limits<char unsigned>::min()) << " and ";
    cout << "max value : " << int(numeric_limits<unsigned char>::max()) << endl;
    cout << "unsigned char ::" << endl;
    cout << "min value : " << int(numeric_limits<unsigned char>::min()) << " and ";
    cout << "max value : " << int(numeric_limits<unsigned char>::max()) << endl;    

    cout << endl;

    cout << "short ::" << endl;
    cout << "min value : " << numeric_limits<short>::min() << " and ";
    cout << "max value : " << numeric_limits<short>::max() << endl;
    cout << "short signed ::" << endl;
    cout << "min value : " << numeric_limits<short signed>::min() << " and ";
    cout << "max value : " << numeric_limits<short signed>::max() << endl;
    cout << "signed short ::" << endl;
    cout << "min value : " << numeric_limits<signed short>::min() << " and ";
    cout << "max value : " << numeric_limits<signed short>::max() << endl;
    cout << "short unsigned ::" << endl;
    cout << "min value : " << numeric_limits<short unsigned>::min() << " and ";
    cout << "max value : " << numeric_limits<unsigned short>::max() << endl;
    cout << "unsigned short ::" << endl;
    cout << "min value : " << numeric_limits<unsigned short>::min() << " and ";
    cout << "max value : " << numeric_limits<unsigned short>::max() << endl; 

    cout << endl;

    cout << "int short signed ::" << endl;
    cout << "min value : " << numeric_limits<int short signed>::min() << " and ";
    cout << "max value : " << numeric_limits<int short signed>::max() << endl;
    cout << "int signed short ::" << endl;
    cout << "min value : " << numeric_limits<int signed short>::min() << " and ";
    cout << "max value : " << numeric_limits<int signed short >::max() << endl;
    cout << "short int signed ::" << endl;
    cout << "min value : " << numeric_limits<short int signed>::min() << " and ";
    cout << "max value : " << numeric_limits<short int signed>::max() << endl;
    cout << "short signed int ::" << endl;
    cout << "min value : " << numeric_limits<short signed int>::min() << " and ";
    cout << "max value : " << numeric_limits<short signed int>::max() << endl;
    cout << "signed short int ::" << endl;
    cout << "min value : " << numeric_limits<signed short int>::min() << " and ";
    cout << "max value : " << numeric_limits<signed short int>::max() << endl;
    cout << "signed int short ::" << endl;
    cout << "min value : " << numeric_limits<signed int short>::min() << " and ";
    cout << "max value : " << numeric_limits<signed int short>::max() << endl;

    cout << endl;
    
    cout << "int ::" << endl;
    cout << "min value : " << numeric_limits<int>::min() << " and ";
    cout << "max value : " << numeric_limits<int>::max() << endl;
    cout << "int signed ::" << endl;
    cout << "min value : " << numeric_limits<int signed>::min() << " and ";
    cout << "max value : " << numeric_limits<int signed>::max() << endl;
    cout << "signed int ::" << endl;
    cout << "min value : " << numeric_limits<signed int>::min() << " and ";
    cout << "max value : " << numeric_limits<signed int>::max() << endl;
    cout << "int unsigned ::" << endl;
    cout << "min value : " << numeric_limits<int unsigned>::min() << " and ";
    cout << "max value : " << numeric_limits<unsigned int>::max() << endl;
    cout << "unsigned int ::" << endl;
    cout << "min value : " << numeric_limits<unsigned int>::min() << " and ";
    cout << "max value : " << numeric_limits<unsigned int>::max() << endl;  

    cout << endl;

    cout << "long ::" << endl;
    cout << "min value : " << numeric_limits<long>::min() << " and ";
    cout << "max value : " << numeric_limits<long>::max() << endl;
    cout << "long signed ::" << endl;
    cout << "min value : " << numeric_limits<long signed>::min() << " and ";
    cout << "max value : " << numeric_limits<long signed>::max() << endl;
    cout << "signed long ::" << endl;
    cout << "min value : " << numeric_limits<signed long>::min() << " and ";
    cout << "max value : " << numeric_limits<signed long>::max() << endl;
    cout << "long unsigned ::" << endl;
    cout << "min value : " << numeric_limits<long unsigned>::min() << " and ";
    cout << "max value : " << numeric_limits<unsigned long>::max() << endl;
    cout << "unsigned long ::" << endl;
    cout << "min value : " << numeric_limits<unsigned long>::min() << " and ";
    cout << "max value : " << numeric_limits<unsigned long>::max() << endl; 

    cout << endl;

    cout << "long int ::" << endl;
    cout << "min value : " << numeric_limits<long int>::min() << " and ";
    cout << "max value : " << numeric_limits<long int>::max() << endl;
    cout << "int long ::" << endl;
    cout << "min value : " << numeric_limits<int long>::min() << " and ";
    cout << "max value : " << numeric_limits<int long >::max() << endl;
    cout << "int long signed ::" << endl;
    cout << "min value : " << numeric_limits<int long signed>::min() << " and ";
    cout << "max value : " << numeric_limits<int long signed>::max() << endl;
    cout << "int signed long ::" << endl;
    cout << "min value : " << numeric_limits<int signed long>::min() << " and ";
    cout << "max value : " << numeric_limits<int signed long >::max() << endl;
    cout << "long int signed ::" << endl;
    cout << "min value : " << numeric_limits<long int signed>::min() << " and ";
    cout << "max value : " << numeric_limits<long int signed>::max() << endl;
    cout << "long signed int ::" << endl;
    cout << "min value : " << numeric_limits<long signed int>::min() << " and ";
    cout << "max value : " << numeric_limits<long signed int>::max() << endl;
    cout << "signed long int ::" << endl;
    cout << "min value : " << numeric_limits<signed long int>::min() << " and ";
    cout << "max value : " << numeric_limits<signed long int>::max() << endl;
    cout << "signed int long ::" << endl;
    cout << "min value : " << numeric_limits<signed int long>::min() << " and ";
    cout << "max value : " << numeric_limits<signed int long>::max() << endl;

    cout << endl;

    cout << "float ::" << endl;
    cout << "min value : " << numeric_limits<float>::min() << " and ";
    cout << "max value : " << numeric_limits<float>::max() << endl;

    cout << endl;

    cout << "double ::" << endl;
    cout << "min value : " << numeric_limits<double>::min() << " and ";
    cout << "max value : " << numeric_limits<double>::max() << endl;
    cout << "double long ::" << endl;
    cout << "min value : " << numeric_limits<double long>::min() << " and ";
    cout << "max value : " << numeric_limits<double long>::max() << endl;
    cout << "long double ::" << endl;
    cout << "min value : " << numeric_limits<long double>::min() << " and ";
    cout << "max value : " << numeric_limits<long double>::max() << endl;

    cout << endl;

    cout << "long long ::" << endl;
    cout << "min value : " << numeric_limits<long long>::min() << " and ";
    cout << "max value : " << numeric_limits<long long>::max() << endl;
    cout << "long long signed ::" << endl;
    cout << "min value : " << numeric_limits<long long signed>::min() << " and ";
    cout << "max value : " << numeric_limits<long long signed>::max() << endl;
    cout << "long signed long ::" << endl;
    cout << "min value : " << numeric_limits<long signed long>::min() << " and ";
    cout << "max value : " << numeric_limits<long signed long>::max() << endl;
    cout << "signed long long ::" << endl;
    cout << "min value : " << numeric_limits<signed long long>::min() << " and ";
    cout << "max value : " << numeric_limits<signed long long>::max() << endl;
    cout << "long long unsigned  ::" << endl;
    cout << "min value : " << numeric_limits<long long unsigned>::min() << " and ";
    cout << "max value : " << numeric_limits<long long unsigned>::max() << endl;
    cout << "long unsigned long ::" << endl;
    cout << "min value : " << numeric_limits<long unsigned long>::min() << " and ";
    cout << "max value : " << numeric_limits<long unsigned long>::max() << endl;
    cout << "unsigned long long ::" << endl;
    cout << "min value : " << numeric_limits<unsigned long long>::min() << " and ";
    cout << "max value : " << numeric_limits<unsigned long long>::max() << endl;

    return 0;
}