def suma(one, two , detect):
  if detect == 1:
    return one + two
  elif detect == 2:
    return one - two
  elif detect == 3:
    return one * two
  elif detect == 4:
    return one / two

# Window
r = int(input(f"1_ Sum\n2_ Res\n3_ Mul\n4_ Div\n"))
n1 = int(input("Valor 1: "))
n2 = int(input("Valor 2: "))

print(f"Suma total es {suma(n1, n2, r)}")
