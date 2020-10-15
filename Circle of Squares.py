import turtle
t = turtle.Turtle()
def square():
   for i in range(4):
       t.forward(100)
       t.left(90)
       
for i in range(100):
    square()
    t.left(11)


