class Solution(object):
    def bestClosingTime(self, customers):
        """ :type customers: str :rtype: int """
        n = len(customers)
        penalty = 0
        pen_idx = 0
        for c in customers:
            if c == 'Y':
                penalty += 1
        #print(penalty)
        pen = penalty
        for i in range(n):
            cur = customers[i]
            if cur == 'Y':
                pen -= 1
            else:
                pen += 1
            #print(pen)
            if pen < penalty:
                penalty = pen
                pen_idx = i + 1
        return pen_idx