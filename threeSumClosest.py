class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        nums.sort()
        closest = float('inf')
        for i in range(len(nums)):
            l , r = i + 1 , len(nums) - 1
            while l < r :
                threeSum = nums[i] + nums[l] + nums[r]
                if threeSum == target:
                    return threeSum
                if abs(threeSum - target) < abs(closest - target):
                    closest = threeSum
                if threeSum < target:
                    l+=1
                else:
                    r-=1
        return closest
