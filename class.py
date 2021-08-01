class Person:
  def __init__(self, name, id):
    self.name = name
    self.id = id
  def user(self):
    return f'Nombre de usuario es: {self.name} y su id: {self.id}'

p = Person("julio", 22)

print(p.user())