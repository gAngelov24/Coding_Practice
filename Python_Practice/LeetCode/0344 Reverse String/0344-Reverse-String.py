class Solution(object):
    def reverseString(self, s):
        """
        :type s: List[str]
        :rtype: None Do not return anything, modify s in-place instead.
        """
        n = len(s)
        idx = 0
        temp = s[0]
        for i in range(n-1, n/2 - 1, -1):
            #print("i = ", i, ", idx =", idx)
            #print("s[i] = ", s[i], ", s[idx] = ", s[idx])
            temp = s[i]
            s[i] = s[idx]
            s[idx] = temp
            idx += 1
            #print(s)