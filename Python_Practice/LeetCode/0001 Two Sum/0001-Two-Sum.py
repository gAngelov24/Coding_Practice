class Solution(object):
    def twoSum(self, nums, target):
        seen = {}
        for i in range(len(nums)):
            #print("seen = ", seen)
            need = target - nums[i]
            #print("need = ", need)
            if need in seen:
                return [i, seen[need]]
            seen[nums[i]] = i

            