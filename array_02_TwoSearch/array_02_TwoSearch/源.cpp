using namespace std;
#include<vector>
#include<stdio.h>
#include <iostream>

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1; // ����target������ұյ������[left, right]
        while (left <= right) { // ��left==right������[left, right]��Ȼ��Ч�������� <=
            int middle = left + ((right - left) / 2);// ��ֹ��� ��ͬ��(left + right)/2
            if (nums[middle] > target) {
                right = middle - 1; // target �������䣬����[left, middle - 1]
            }
            else if (nums[middle] < target) {
                left = middle + 1; // target �������䣬����[middle + 1, right]
            }
            else { // nums[middle] == target
                return middle; // �������ҵ�Ŀ��ֵ��ֱ�ӷ����±�
            }
        }
        // δ�ҵ�Ŀ��ֵ
        return -1;
    }
};

int main()
{
    Solution A;
    vector<int> arr_b = { 4, 6, 1, 6, 8, 23, 9, 0, 4, 3, 1 };

    int result = A.search(arr_b, 8);
    cout<<result;
    return 0;
}