class Solution(object):
    def lengthOfLastWord(self, s):
        n = len(s)
        maxCount = []
        count = 0
        """
        :type s: str
        :rtype: int
        """
        for i in range(n):
            cur = s[i]
            if cur == ' ':
                if count > 0:
                    maxCount.append(count)
                count = 0
            else:
                count+=1
            #print("cur = ", cur, ", maxCount = ", maxCount, ", count = ", count)
        if count > 0:
            maxCount.append(count)
        return maxCount[-1]
        