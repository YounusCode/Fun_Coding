class TwoSum(object):
    def twoSum(self, nums, target):
        """
        nums: List[int]
        target: int
        """
        for i in range(len(nums)):
            for j in range(i + 1, len(nums)):
                if nums[i] + nums[j] == target:
                    return [i, j]
        return []

if __name__ == '__main__':
    example = TwoSum()
    print (example.twoSum([2, 7, 11, 15], 18))
