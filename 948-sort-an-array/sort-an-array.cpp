class Solution {
public:
    int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (i <= high - 1 && arr[i] <= pivot)
            i++;

        while (j >= low + 1 && arr[j] > pivot)
            j--;

        if (i < j)
            swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]);
    return j;
}

    void quickSort(vector<int>& nums, int low, int high)
    {
        if (low >= high)
            return;

        int pIndex = partition(nums, low, high);

        quickSort(nums, low, pIndex - 1);
        quickSort(nums, pIndex + 1, high);
    }

    vector<int> sortArray(vector<int>& nums)
    {
        quickSort(nums, 0, nums.size() - 1);
        return nums;
    }
};