# include <iostream>
using namespace std;

//Jump Search Algo
void jumpSearch(int noOfElements , int arr[], int keyElement)
{
    int lowerLimit = 0 , upperLimit = 2 , totalComparisons = 0, flag = 0;
    
    //Bound Founding Algo
    while(1)
    {
        if(keyElement > arr[lowerLimit] && keyElement < arr[upperLimit])
        break;
        
        else if(keyElement == arr[lowerLimit] || keyElement == arr[upperLimit])
        {
             totalComparisons++;
             cout<<"Present"<<" "<<totalComparisons;
             return;
        }
       
        lowerLimit = upperLimit;
        upperLimit = upperLimit * 2;
       
       if(flag == 1)
       {
           cout<<"Not Present"<<" "<<totalComparisons;
           return;
       }
       
        if(upperLimit >= noOfElements - 1)
        {
            flag = 1;
            upperLimit = noOfElements - 1;
        }
        
    }
    
    //Linear Search Algo inside Bound
    for(int i = lowerLimit + 1; i < upperLimit; i++)
    {
        if(arr[i] == keyElement)
        {
            totalComparisons++;
            cout<<"Present"<<" "<<totalComparisons;
            return;
        } 
        
        else
        totalComparisons++;
    }
    cout<<"Not Present"<<" "<<totalComparisons;
}

//Driver Code
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
        jumpSearch(noOfElements,arr,keyElement);
    }
    return 0;
}
