# include <iostream>
using namespace std;

//Function performing linear search algo
void linearSearch(int noOfElements, int inputArray[], int keyElement)
{
    int flag = 0, totalNoOfComparisons = 0;
    for(int i = 0; i < noOfElements; i++)
    {
        if(inputArray[i] == keyElement)
        {
            flag = 1;
            totalNoOfComparisons++;
            break;
        }
        
        else
        totalNoOfComparisons++;
    }
    
    if(flag == 1)
    cout<<"Present"<<" "<<totalNoOfComparisons<<"\n";
    
    else
    cout<<"Not Present"<<" "<<totalNoOfComparisons<<"\n";
}

//Driver code
int main()
{
    int testCases, noOfElements, keyElement;
    cin>>testCases;
    for(int i = 1; i <= testCases; i++)
    {
        cin>>noOfElements>>keyElement;
        int inputArray[noOfElements];
        for(int j = 0; j < noOfElements; j++)
        cin>>inputArray[j];
        linearSearch(noOfElements,inputArray,keyElement);
    }
    return ;
}
