dollars_amt = int(input("Enter dollars: "))
cents_amt = float(input("Enter cents: "))
total_in_cents = dollars_amt * 100 + cents_amt
quarters = total_in_cents // 25
total_in_cents = total_in_cents % 25
dimes = total_in_cents // 10
total_in_cents = total_in_cents % 10
nickels = total_in_cents // 5
total_in_cents = total_in_cents % 5
pennies = total_in_cents
print(f"{quarters} quarters")
print(f"{dimes} dimes")
print(f"{nickels} nickels")
print(f"{pennies} pennies")
