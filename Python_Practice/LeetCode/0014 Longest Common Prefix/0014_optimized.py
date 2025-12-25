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
            if curr == "":
                return ""
            n = min(len(curr), len(prev))
            if n < len(prefix):
                prefix = prefix[:n]
            for i in range(n):
                if curr[i] != prev[i]:
                    prefix = prefix[:i]
                    break
            if prefix == "":
                return prefix
            prev = curr
        
        return prefix
                