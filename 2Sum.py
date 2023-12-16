class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hash_tabel={}
        for i in range(len(nums)):
           difference = target - nums[i]
           if(difference not in hash_tabel):  
             hash_tabel[nums[i]] = i
           else:
             return(hash_tabel[difference],i)
                 
