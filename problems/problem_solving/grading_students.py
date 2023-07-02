# Grading Policy
# studentGrade = 1..100
# if studentGrade < 40: fail

# Rounding Rules
# if (studentGrade - ciel(studentGrade) x 5) < 3 : ciel(studentGrade) x 5
# if studentGrade < 38 : studentGrade

# Input
# grades : integer array
# Output
# integer array

import math

def gradingStudents(grades):
    
    newGrades = []
    
    for i in grades:
        nextval = math.ceil(i / 5) * 5
    
        if (i < 38 or nextval - i >= 3): 
            newGrades.append(i)
        elif (nextval - i < 3):
            newGrades.append(nextval)  
    
    return newGrades


sample = [4, 73, 67, 38, 33]
print(gradingStudents(sample))