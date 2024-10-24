int binary_search(const int arr[], int start, int end, int khey) {
	if (start > end)
		return -1;

	int mid = start + (end - start) / 2;    //直接平均可能會溢位，所以用此算法
	if (arr[mid] > khey)
		return binary_search(arr, start, mid - 1, khey);
	else if (arr[mid] < khey)
		return binary_search(arr, mid + 1, end, khey);
	else
	    return mid;        //最後檢測相等是因為多數搜尋狀況不是大於要不就小於
}

int binary_search2(const int arr[], int start, int end, int key) {
    int ret = -1;       // 未搜索到数据返回-1下标
    
	int mid;
	while (start <= end) {
		mid = start + (end - start) / 2; //直接平均可能會溢位，所以用此算法
		if (arr[mid] < key)
			start = mid + 1;
		else if (arr[mid] > key)
			end = mid - 1;
		else {            // 最後檢測相等是因為多數搜尋狀況不是大於要不就小於
			ret = mid;  
            break;
        }
	}
	return ret;     // 单一出口
}

int search(int* nums, int numsSize, int target){
    int left = 0;
    int right = numsSize-1;
    int mid = left + (right - left)/2;

    while (target != nums[mid] && left <= right) {
        if (target > nums[mid]) {
            left = mid + 1;
        }
        if (target < nums[mid]) {
            right = mid - 1;
        }
        if (left > right)
            return -1;
        	mid = left + (right - left)/2;
    }
    return mid;
}


