class Opera():
  def __init__(self, one, two):
    self.one = one;
    self.two = two;

  def _suma(self):
    resultado = self.one + self.two
    return f"la  suma de {self.one} y {self.two} es de {resultado}"

n1 = int(input("1_ "))
n2 = int(input("2_ "))

o = Opera(n1, n2)

print(o.suma())
