// nonononononononono
// sort

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a[10] = {1,2,5,6,3,4,5,6,7,2};
	sort(a, a+10);
	for (int i=0; i<10; i++) {
		cout << a[i] << endl;
	}
	return 0;
}
