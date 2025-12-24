class Solution(object):
    def removeDuplicates(self, nums):
        x = 0
        for i in range(1, len(nums)):
            if nums[i] != nums[i-1]:
                nums[x] = nums[i-1]
                x+=1
        nums[x] = nums[len(nums)-1]
        x+=1
        return x

        