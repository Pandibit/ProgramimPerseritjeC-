#include<iostream>
using namespace std;

//
//double getTotal(double nums[], int size) {
//    double mul = 1;
//
//    // Using the size passed to the function
//    for(int i = 0; i < size; i++) {
//        mul *= nums[i];
//    }
//
//    return mul;
//}

//int getIndex(int nums[], int length, int element)
//{
//    for(int i=0; i< length; i++)
//    {
//        if(nums[i] == element)
//        {
//            return i;
//        }
//    }
//    return -1;
//}

void bubbleSort(int nums[], int length){
    int temp;

    for(int i=0; i < length ; i++)
    {
        for(int j=0; j< length - i - 1 ; j++)
        {
            if(nums[j] < nums[j+1])
            {
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;

            }
        }
    }
};

int main() {

    int nums[] = {1,2,32,54,2,3245,2424,234,234};
    int length = sizeof(nums)/ sizeof(int);

    cout<< "Sorted elements are: "<< endl;
    bubbleSort(nums, length);

    for(int i = 0; i < length; i++)
    {
        cout<<nums[i]<< endl;
    }
//    double nums[] = {1, 2, 3};
//    int size = sizeof(nums) / sizeof(nums[0]);  // Correctly calculating size in main
//
//    double results = getTotal(nums, size);  // Passing the size to the function
//
//    cout << results << endl;  // Expected output: 6 (1*2*3)
//    return 0;

//    int nums[] = {1,2,3,4,5};
//    int length = sizeof(nums)/ sizeof(int);
//    int element;
//    int index;
//    cout << "Jep elementin: "<< endl;
//    cin >> element;
//
//    index = getIndex(nums, length, element);
//    cout<< index;
}

