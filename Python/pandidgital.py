"""
Created by Shouvik Dutta
Make it HactoberFest Accepted Kindly
"""
def is_pandigital(num):
    num = str(num)
    for digit in range(1, 10):
        digit = str(digit)
        if digit in num:
            num = num.replace(digit, "", 1)
        else:
            return False
    return len(num) == 0
def solution():
    for num in range(9487, 9233, -1):
        num_to_check = int(str(num * 1) + str(num * 2))
        if is_pandigital(num_to_check):
            return num_to_check
if __name__ == "__main__":
    print(solution())
