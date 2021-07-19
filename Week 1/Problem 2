# include <iostream>
using namespace std;

void binarySearch(int noOfElements, int arr[], int keyElement)
{
    int lowerLimit = 0 , upperLimit = noOfElements - 1 , midValue , totalComparisons = 0;
    while(upperLimit >= lowerLimit)
    {
        midValue = (lowerLimit + upperLimit)/2;
        
        if(arr[midValue] < keyElement)
        {
            lowerLimit = midValue + 1;
            totalComparisons++;
        }
        
        else if(arr[midValue] > keyElement)
        {
            upperLimit = midValue - 1;
            totalComparisons++;
        }
        
        else
        {
            totalComparisons++;
            cout<<"Present"<<" "<<totalComparisons;
            return;
        }
        
    }
    cout<<"Not Present"<<" "<<totalComparisons;
}

int main()
{
    int noOfElements , keyElement, testCases;
    cin>>testCases;
    for(int j = 1; j <= testCases; j++)
    {
        cin>>noOfElements;
        int arr[noOfElements];
        for(int i = 0; i < noOfElements; i++)
        cin>>arr[i];
        cin>>keyElement;
        binarySearch(noOfElements,arr,keyElement);
    }
    return 0;
}
