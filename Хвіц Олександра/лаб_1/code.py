a = float(input("Введіть сторону a: "))
b = float(input("Введіть сторону b: "))
c = float(input("Введіть сторону c: "))

if a + b > c and a + c > b and b + c > a:
    p = (a + b + c) / 2
    S = (p * (p - a) * (p - b) * (p - c)) ** 0.5
    print("Площа трикутника:", S)
else:
    print("Такий трикутник не існує")
