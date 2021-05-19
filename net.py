numero = 123
val = 0
uno, dos, tres = 1, 2, 3
foo = float(23000.2222222222)
more = float(25000.3333333333)

val = foo + more

print(numero)
print(uno, dos, tres)

print(val)
print(float(val))
print(format(val, '.2f'))
print(round(val, 2))
print("%.2f" % val)
print("{:.2f}".format(val))
print("{:.3f}".format(round(val, 2)))

print(type(val))
