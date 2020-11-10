/* By --> S T U D E N T
 * the easiest sorting algrithm -> bubble sort
 * the logic is under bubbleSort function
 */

#include <iostream>

template <typename T>
void mySwap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
    return;
}

template <typename T>
void bubbleSort(T *arr, int len)
{
    for (int i=0; i<len-1; i++)             // loop len-1 times
    {
        for (int j=0; j<len-1-i; j++)       // each time compare current value and current next value
        {
            if (arr[j] < arr[j+1])          // desending order
            {
                mySwap(arr[j], arr[j+1]);   // swap
            }
        }
    }
    return;
}

template <typename T>
void myPrint(T *arr, int len)
{
    for (int i=0; i<len; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return;
}

int main()
{
    int *arrInt, len;
    double *arrDouble;
    char *arrChar;

    len = 5;
    arrInt = new int[len];
    arrInt[0] = 3;
    arrInt[1] = 1;
    arrInt[2] = 9;
    arrInt[3] = 2;
    arrInt[4] = 2;

    arrDouble = new double[len];
    arrDouble[0] = 9.9;
    arrDouble[1] = 1.0;
    arrDouble[2] = 0.1;
    arrDouble[3] = 3.1;
    arrDouble[4] = 0.9;

    arrChar = new char[len];
    arrChar[0] = 'z';
    arrChar[1] = 'x';
    arrChar[2] = 'a';
    arrChar[3] = 'b';
    arrChar[4] = 'z';

    bubbleSort(arrInt, len);
    bubbleSort(arrDouble, len);
    bubbleSort(arrChar, len);

    myPrint(arrInt, len);
    myPrint(arrDouble, len);
    myPrint(arrChar, len);

    return 0;
}
