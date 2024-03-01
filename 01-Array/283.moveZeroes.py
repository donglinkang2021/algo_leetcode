nums = [0,1,0,3,4]

def moveZeroes(nums: list[int]) -> list[int]:
    for i in range(len(nums)):
        if nums[i] == 0:
            nums.remove(0) # remove the first 0
            nums.append(0) # append 0 at the end
    return nums

print(moveZeroes(nums))