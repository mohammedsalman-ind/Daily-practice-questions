void convertToWave(int *arr, int n) {
    int temp;
    for(int i=0;i<n-1;i+=2){
        if(arr[i]<arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        // return arr;
    }
        return arr;
    
}
