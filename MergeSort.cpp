#include <iostream>
using  namespace std;



void Merge(int *arr,int s,int e){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    //assume to create arrays for len1 and len2
    int *left=new int[len1];
    int *right=new int [len2];
    //copy values
    int k=s;
    for (int i = 0; i < len1; i++)
    {
        left[i]=arr[k];
        k++;
    }
    k=mid+1;
    for (int  i = 0; i < len2; i++)
    {
        right[i]=arr[k];
        k++;
    }
    //merge logic
    int Leftindex=0;
    int Rightindex=0;
    int mainarrayindex=s;
    while(Leftindex<len1 && Rightindex<len2){
        if(left[Leftindex]<right[Rightindex]){
            arr[mainarrayindex++]=left[Leftindex++];
        }
    
         else{
            arr[mainarrayindex++]=right[Rightindex++];
        }
    }   
    //copy logic for left array
    while(Leftindex<len1){
        arr[mainarrayindex++]=left[Leftindex++];
    }
    //copy logic for right array
    while(Rightindex<len2){
        arr[mainarrayindex++]=right[Rightindex++];
    }
}

void MergeSort(int arr[],int s,int e){
    
    int mid=(s+e)/2;
    if(s>=e){
        return;
    }
    //left
    MergeSort(arr,s,mid);

    //right
    MergeSort(arr,mid+1,e); 
    //merge 2 sorted arrays
    Merge(arr,s,e);
    

}


int main(){
    int arr[]={1,2,8,7,4};
    int n=5;
    int s=0;
    int e=n-1;
    MergeSort(arr,s,e);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"";
    }
    cout<<endl;
}
