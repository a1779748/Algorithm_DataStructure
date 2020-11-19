/* By --> S T U D E N T
 * binary search template version
 * The binary search is only suit for the sorted array
 */

#include <iostream>
#include <vector>

template <typename T>
int binarySearch(std::vector<T> &arr, int len, T target)
{
    int left = 0;                       // the index of the left bound
    int right = len-1;                  // the index of the right bound
    int mid = (len-1)/2;                // the index of the middle bound
    
    while (arr[mid] != target)
    {
        if (arr[mid] < target)          // the target value is on the right side of the middle value
        {
            left = mid + 1;             // update the boundary of left side to mid+1;
        }
        else                            // the target value is on the left side of the middle value
        {
            right = mid - 1;            // update the boundary of right side to mid-1;
        }
        mid = (right + left)/2;         // update the middle index
    }
    return mid;

}

// test case for integer array
void test1()
{
    std::vector<int> arr;
    arr.push_back(-99);
    arr.push_back(19);
    arr.push_back(99);
    arr.push_back(199);
    arr.push_back(999);
    
    int target = -99;
    
    std::cout << "the index of " << target << " is "  
              << binarySearch(arr, 5, target) << std::endl << std::endl;
}

// test case for float point array
void test2()
{
    std::vector<double> arr;
    arr.push_back(-10.1);
    arr.push_back(-0.1);
    arr.push_back(1.1);
    arr.push_back(101);

    double target = 101;

    std::cout << "the index of " << target << " is "  
              << binarySearch(arr, 4, target) << std::endl << std::endl;
}

// test case for char array
void test3()
{
    std::vector<char> arr;
    arr.push_back('a');
    arr.push_back('c');
    arr.push_back('d');
    arr.push_back('x');
    arr.push_back('z');
    
    char target = 'z';
    
    std::cout << "the index of " << target << " is "  
              << binarySearch(arr, 5, target) << std::endl << std::endl;
}

int main()
{

    std::cout << "expect index: 0" << std::endl;
    test1();
    std::cout << "expect index: 3" << std::endl;
    test2();
    std::cout << "expect index: 4" << std::endl;
    test3();
 
    return 0;
}
