# This solution is unoptimized
class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        prefix = strs[0]
        curr = strs[0]
        prev = strs[0]
        for s in strs:
            curr = s
            pre = ""
            if curr == "":
                return ""
            n = 0
            if len(curr) > len(prev):
                n = len(prev)
            else:
                n = len(curr)
            for i in range(n):
                if curr[i] != prev[i]:
                    break
                #print("curr = ", curr, ", prev = ", prev)
                #print("curr[i] = ", curr[i], "prev[i] = ", prev[i])
                pre += curr[i]
                #print("pre = ", pre)
            if pre == "":
                return ""
            if len(pre) < len(prefix):
                prefix = pre
            #print("prefix = ", prefix)
            prev = curr
        return prefix
                