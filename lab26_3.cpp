#include<iostream>
#include<set>

using namespace std;

//Write function count() here.
int count(int arr[], int n)
{
    int num = 1;
 
    for (int i = 1; i < n; i++) {
        int j = 0;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;
 
        if (i == j)
            num++;
    }
    return num;
}




