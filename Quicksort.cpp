    //choose element
    int PivotIndex=s;
    int PivotElement=arr[s];
    int count=0;
    //pivot position find
    for(int i=s;i<e;i++){
         if(arr[i+1]<=PivotElement ){
            count ++;
         }
    }
    int rigthIndex=s+count;
    swap(arr[PivotIndex],arr[rigthIndex]);
    PivotIndex=rigthIndex;
    //step3 left me chote right me bade
    int i=s;
    int j=e;
    while(i<PivotIndex && j>PivotIndex){
        while(arr[i]<=PivotElement){
            i++;
        }
        while(arr[j]>PivotElement){
            j--;
        }
    }
    //2 case ho sakte h if you found element to swap and no need to swap
        if(i<PivotIndex && j>PivotIndex){
            swap(arr[i],arr[j]);
        }
        return PivotIndex;

    

   
}
