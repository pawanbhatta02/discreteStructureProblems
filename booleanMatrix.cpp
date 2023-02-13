#include <iostream>
#include <unistd.h>
#define MAX 5

using namespace std;

void join(int M[], int N[], int n)
{
    int i, j;
    int O[n * n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (M[i * n + j] || N[i * n + j])
            {
                O[i * n + j] = 1;
            }
            else
            {
                O[i * n + j] = 0;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << O[i * n + j] << " ";
        }
        cout << endl;
    }
}

void meet(int M[], int N[], int n)
{
    int i, j;
    int O[n * n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (M[i * n + j] && N[i * n + j])
            {
                O[i * n + j] = 1;
            }
            else
            {
                O[i * n + j] = 0;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << O[i * n + j] << " ";
        }
        cout << endl;
    }
}

void product(int M[], int N[], int n)
{
    int i, j, k;
    int O[n * n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (k = 0; k < n; k++)
            {
                O[i * n+ j] = O[i * n+j] || (M[i * n + k] && N[j + n * k]);
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << O[i * n + j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n, i, j, num, option;
    cout << "Enter the dimension of matrix : ";
    cin >> n;
    int M[n * n];
    int N[n * n];

    cout << "Enter values for matrix A: " << endl
         << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "Row , Column : " << i + 1 << " , " << j + 1 << " = ";
            cin >> num;
            if (num)
            {
                M[i * n + j] = 1;
            }
            else
            {
                M[i * n + j] = 0;
            }
            cout << endl;
        }
    }

    cout << endl
         << endl
         << "Enter values for matrix B: " << endl
         << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "Row , Column : " << i + 1 << " , " << j + 1 << " = ";
            cin >> num;
            if (num)
            {
                N[i * n + j] = 1;
            }
            else
            {
                N[i * n + j] = 0;
            }
            cout << endl;
        }
    }

    cout << "Which operation do you perform ? " << endl;
    cout << "1. Join" << endl
         << "2. Meet" << endl
         << "3. Product" << endl;
    cout << "Choose : ";
    cin >> option;

    switch (option)
    {
    case 1:
        join(M, N, n);
        break;
    case 2:
        meet(M, N, n);
        break;
    case 3:
        product(M, N, n);
        break;
    }

    return 0;
}