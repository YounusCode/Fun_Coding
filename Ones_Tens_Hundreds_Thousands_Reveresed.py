num = int(input("Enter a 4 digit number: "))
ones = num % 10
print("Ones digit is", ones)
tens = (num // 10) % 10
print("Tens digit is ", tens)
hunds = (num // 100) % 10
print(f"Hundreds digit is {hunds}")
thous = num // 1000
print("Thousands digit is" + " " + str(thous))
rev = 1000 * ones + 100 * tens + 10 * hunds + thous
print("Original number reversed is " + str(rev))
