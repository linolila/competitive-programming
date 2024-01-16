class Solution:
    def subArrayRanges(self, nums: List[int]) -> int:
        sum =0
        for i in range(len(nums)):
          small=nums[i]
          largest = nums[i]
          for j in range(i + 1 ,len(nums)):
              small = min(nums[j],small)
              largest = max (nums[j], largest)
              sum += largest - small
           
        return sum
