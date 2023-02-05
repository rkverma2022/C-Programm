#include <iostream>
using namespace std;

struct data
{
    int value[10];
};

template <typename T, typename T1>

void sort(T array[], T1 n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                T a = array[j];
                array[j] = array[j + 1];
                array[j + 1] = a;
            }
        }
    }
}
int main()
{
    int n;
    cout<<"num of ele"<<endl;
    cin>>n;
    int array[n];
    for(int i=0; i<n;i++)
    {
        cin>>array[i];
    }

    
    cout << "SHORTING int DATATYPE ARRAY" << endl;
    sort(array, n);

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << "\t";
    }

    // // for float
    float farray[] = {1.5, 5.9, 2.2, 9.7, 4.3, 3.7, 8.27, 7.83};
    int m = (sizeof(farray) / sizeof(farray[0]));
    cout << endl
         << "SHORTING float DATATYPE ARRAY" << endl;
    sort(farray, m);
    for (int i = 0; i < m; i++)
    {
        cout << farray[i] << "\t";
    }

    // // for short
    short int sarray[] = {1, 9, 20, 7, 3, 37, 87, 73};
    int p = (sizeof(farray) / sizeof(farray[0]));
    cout << endl
         << "SHORTING short int DATATYPE ARRAY" << endl;
    sort(sarray, p);
    for (int i = 0; i < p; i++)
    {
        cout << sarray[i] << "\t";
    }

    // struct data A[4];
    // for (int j = 0; j < 4; j++)
    // {
    //     for (int i = 0; i < 10; i++)
    //     {
    //         A[j].value[i] = rand();
    //     }
    // }

    // cout << endl
    //      << "SHORTING short int DATATYPE ARRAY" << endl;
    // sort(A.value[0], 4);
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << A[i].value[0] << "\t";
    // }
    return 0;
}
