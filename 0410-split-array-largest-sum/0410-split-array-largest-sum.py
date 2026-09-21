class Solution:
    def splitArray(self, weights: list[int], days: int) -> int:
        def func(c):
            sum=0
            day=1
            for i in weights:
                if sum+i<=c:
                    sum=sum+i
                elif sum+i>c:
                    day+=1
                    sum=i
            return day<=days

        l=max(weights)
        r=sum(weights)
        while l<=r:
            mid=(l+r)//2
            if func(mid):
                m=mid
                r=mid-1
            else:
                l=mid+1
        return m

        