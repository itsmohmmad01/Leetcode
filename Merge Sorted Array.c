void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    for(int i=0;i<n;i++ ){
        nums1[m]=nums2[i];
        m++;
    }

    for(int i=0 ; i<m-1;i++){
        for(int j = i ;j<m;j++){
            if(nums1[i]>nums1[j]){
                nums1[i]=nums1[i]+nums1[j];
                nums1[j]=nums1[i]-nums1[j];
                nums1[i]=nums1[i]-nums1[j];
            }
        }
    }
    
}
