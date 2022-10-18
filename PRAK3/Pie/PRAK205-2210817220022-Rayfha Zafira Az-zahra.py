import math

A = int(input("Nilai A = "))
B = int(input("NIlai B = "))
print("\n")
P = (B * B) - (A * A)
C = math.sqrt(P)
K = A + B + C
L = 0.5 * C * A
print("Alas     =", round(C),"cm")
print("Tinggi   =", A,"cm")
print("Keliling =", round(K),"cm")
print("Luas     =", round(L),"cm^2")