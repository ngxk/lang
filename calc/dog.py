class Calculator:
  def __init__(self, one, two):
    self.one = one
    self.two = two

  def sum(self):
    return self.one + self.two

  def res(self):
    return self.one - self.two

  def mul(self):
    return self.one * self.two

  def div(self):
    return self.one / self.two


detect = int(input(f"1_ Sum\n2_ Res\n3_ Mul\n4_ Div\n"))
n1 = int(input("Valor 1: "))
n2 = int(input("Valor 2: "))

c = Calculator(n1, n2)

if detect == 1:
  print(c.sum())
elif detect == 2:
  print(c.res())
elif detect == 3:
  print(c.mul())
elif detect == 4:
  print(c.div ())

