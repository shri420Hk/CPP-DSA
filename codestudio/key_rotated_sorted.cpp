int findPivot(int* arr,  int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s<e){

        if(arr[mid]>=arr[0]){
            s = mid + 1;
        }
        else{
            e=mid ;
        }
        mid = s + (e-s)/2;
    }
    return s;

}
int binarySearch(int* arr, int s, int e, int k){
    int low = s;
    int high = e;
    int mid = low + (high - low)/2;
    while(low<=high){
        
        if(arr[mid]==k){
            return mid;
        }
        else if(k>arr[mid]){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
        mid = low + (high - low)/2;
    }
    return -1;
}
int search(int* arr, int n, int key) {
    // Write your code here.
    int pivot = findPivot(arr,  n);

    if(key>=arr[pivot] && key<=arr[n-1]){
        return binarySearch(arr , pivot,  n-1,  key);
    }
    else{
        return binarySearch(arr,  0,  pivot-1,  key);
    }
}
