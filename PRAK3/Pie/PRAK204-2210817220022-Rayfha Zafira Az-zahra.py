r = int(input("Jari-jari = "))
t = int(input("Tinggi = "))
phi = 3.142857
v = phi * (r*r) * t
l = 2* phi * r * (r + t);
k = 2 * phi * r;
print("Volume = %.2f "%(v))
print("Luas = %.2f "%(l))
print("Keliling = %.2f "%(k))