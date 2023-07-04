#include <iostream>
#include <cstdlib>
using namespace std;
/*
 * Steps for optimization:
 *  if a number is larger than the target, and no negatives will be given in the list, you may disregard these numbers
 *  and make a seperate array of numbers that could work.
 */
int main() {
    int arr[100];
    int target =19;
    //First for loop will fill the array of a hundred items with random numbers.

    for(int i=0; i <100; i++)
    {
        arr[i]= rand()%90;
        cout<<i<<". "<<arr[i]<<endl;
    }
    cout<<"done filling"<<endl;
    //this checks each for the target number, and does not do rechecking, making it faster!
    for(int i =0; i< 100; i++)
    {

        for (int j=1; j < 100; j++)
        {

            if (arr[i] + arr[j] == target)
            {
                cout<<"numbers are at index i: "<<i<<" j: "<<j<<endl;
                cout<<"the numbers are i: "<<arr[i]<<" and "<<arr[j]<<endl;
                break;
            }
        }
    }

    return 0;
}
