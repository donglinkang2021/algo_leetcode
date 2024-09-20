#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> sortArray(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    return nums;
}

void printArray(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int partition(vector<int>& nums, int left, int right) {
    int pivot = nums[right];
    int i = left - 1;
    for (int j = left; j < right; j++)
        if (nums[j] < pivot)
            swap(nums[++i], nums[j]);
    swap(nums[++i], nums[right]);
    return i;
}

void quickSort(vector<int>& nums, int left, int right) {
    if (left < right) {
        int pivot = partition(nums, left, right);
        quickSort(nums, left, pivot - 1);
        quickSort(nums, pivot + 1, right);
    }
}


int quickSelect(vector<int> &nums, int left, int right, int topk) {
    if (left < right) {
        int pivot = nums[right];
        int i = left - 1;
        for (int j = left; j < right; j++)
            if (nums[j] < pivot) swap(nums[++i], nums[j]);
        swap(nums[++i], nums[right]);
        pivot = i;

        if (pivot > topk)
            return quickSelect(nums, left, pivot - 1, topk);
        else if (pivot < topk)
            return quickSelect(nums, pivot + 1, right, topk);
        else
            return nums[topk];
    } else
        return nums[topk];
}

int findKthLargest(vector<int>& nums, int k) {
    int n = nums.size();
    return quickSelect(nums, 0, n-1, n-k);
}


// 新增函数：从文件读取数据
vector<int> readDataFromFile(const string& filename) {
    vector<int> nums;
    ifstream infile(filename);
    if (!infile.is_open()) {
        cerr << "无法打开文件: " << filename << endl;
        return nums;
    }
    string line;
    while (getline(infile, line)) {
        // 去除方括号
        line.erase(remove(line.begin(), line.end(), '['), line.end());
        line.erase(remove(line.begin(), line.end(), ']'), line.end());
        // 分割逗号
        stringstream ss(line);
        string num;
        while (getline(ss, num, ',')) {
            try {
                nums.push_back(stoi(num));
            } catch (invalid_argument& e) {
                // 忽略非整数部分
                continue;
            }
        }
    }
    infile.close();
    return nums;
}



int main()
{
    // 从 data.txt 读取数据
    string filename = "data.txt";
    vector<int> nums1 = readDataFromFile(filename);
    vector<int> nums2 = nums1;

    // vector<int> nums1;
    // vector<int> nums2;
    if(nums1.empty()) {
        // 如果读取失败，则生成随机数组
        srand(time(0));
        const int N = 1e6;
        const int MAX = 0x3f3f3f3f;
        for (int i = 0; i < N; i++) nums1.push_back(rand() % MAX);
        nums2 = nums1;
    }

    // 计算标准库 sort 的时间
    auto start = chrono::high_resolution_clock::now();
    sortArray(nums2);
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::nanoseconds>(end - start);
    cout << "Standard sort time: \t" << duration.count() << " ns" << endl;

    // 计算快速排序的时间
    start = chrono::high_resolution_clock::now();
    quickSort(nums1, 0, nums1.size() - 1);
    end = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::nanoseconds>(end - start);
    cout << "Quick sort time: \t" << duration.count() << " ns" << endl;
    

    return 0;
}