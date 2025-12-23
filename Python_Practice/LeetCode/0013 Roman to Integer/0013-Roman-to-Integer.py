class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        # Dictionary that hold the Roman Numeral Values
        table = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
        output = 0
        prev = 0
        for c in s:
            curr = table[c]
            if curr > prev:
                output -= prev
                output += (curr - prev)
            else:
                output += curr
            prev = curr
        return output

        