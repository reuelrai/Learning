def calculate_area(length, breadth):
    return length*breadth

length=float(input("Enter length: "))
breadth=float(input("Enter breadth: "))

area=calculate_area(length, breadth)

print(f"The area of rectangle is: {area}")
