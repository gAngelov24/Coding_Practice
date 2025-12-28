class Solution(object):
    def mostBooked(self, n, meetings):
        """
        :type n: int
        :type meetings: List[List[int]]
        :rtype: int
        """
        busy_rooms = [] # min heap to keep track of which rooms are busy and until when
        open_rooms = [] # min heap to keep track of which rooms are NOT busy
        bookings   = [] # max heap used to keep track of how many times each room has been used

        # busy_rooms = [[end time, room #], ...]
        # open_rooms = [room #[1], room #[3], room #[2], ...]
        # bookings   = [[count, room #(1)], [count, room #(2)], ...]

        # sort meetings by start time
        meetings = sorted(meetings)

        #initialize free_rooms, since at time = 0, all rooms are open
        for i in range(n):
            heapq.heappush(open_rooms, i)
            bookings.append([0, i])

        # print(meetings)
        # print(busy_rooms)
        # print(open_rooms)
        # print(bookings)
        
        # iterate through meetings
        for m in meetings:
            # print("m = ", m)
            start = m[0]
            end   = m[1]
            dur   = end-start 
            if len(busy_rooms) > 0:
                while len(busy_rooms) > 0 and busy_rooms[0][0] <= start:
                    x = heapq.heappop(busy_rooms)
                    heapq.heappush(open_rooms, x[1])
            if len(open_rooms) > 0:
                room = heapq.heappop(open_rooms)
                heapq.heappush(busy_rooms, [start + dur, room])
                bookings[room][0] -= 1
            else: # no rooms are open
                next_avail = heapq.heappop(busy_rooms)
                next_avail[0] += dur
                heapq.heappush(busy_rooms, next_avail)
                bookings[next_avail[1]][0] -= 1
            # print(busy_rooms)
            # print(open_rooms)
            # print(bookings)
        
        heapq.heapify(bookings)

        return bookings[0][1]
            



        
