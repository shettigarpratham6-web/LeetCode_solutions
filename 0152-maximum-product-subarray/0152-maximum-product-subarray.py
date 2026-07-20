class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        l=1
        h=1
        lmin=1
        hmax=1
        maximum=max(nums)
        for i in nums:
            l=i*lmin
            h=i*hmax
            hmax=max(h,l,i)
            lmin=min(h,l,i)
            if maximum<hmax:
                maximum=hmax
        return maximum
        