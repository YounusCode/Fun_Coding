def happy_birthday(name, year_born, current_year):
    """
    Purpose: 
        A happy birthday message of the name and person's new age.
    Parameters:
        name - the person's name (string)
        year_born - the student's score on quiz 1 (int).
        current_year - the student's score on quiz 2 (int).
    Return Value:
        None.
    """
    new_age = current_year - year_born
    suffix = "th"
    if new_age % 10 == 1 and new_age % 100 != 11:
        suffix = "st"
    elif new_age % 10 == 2 and new_age % 100 != 12:
        suffix = "nd"
    elif new_age % 10 == 3 and new_age % 100 != 13:
        suffix = "rd"
    print(f"Happy {new_age}{suffix} Birthday, {name}!")


# Example of calling the function
happy_birthday('Emily', 1921, 1963)
