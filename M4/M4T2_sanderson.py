# CSC 134
# M4T2 Turtles and loops
# sandersonl
# 10/7/26

# set up turlte
# choose colors

import turtle
win = turtle.Screen()

# set color
t= turtle.Turtle()
t.color("green")
t.pencolor("blue")
t.shape("turtle")
t.pensize(3)
t.fillcolor("grey")
# Draw your picture
# option 1 fro loop

#top 3 lines
t.left(90)
t.forward(100)
t.penup()
t.right(90)
t.forward(100)
t.right(90)
t.pendown()
t.forward(100)
t.left(90)
t.penup()
t.forward(100)
t.left(90)
t.pendown()
t.forward(100)
# left(45)
# t.forward(141.421356237)
# t.left(90)
# t.forward(141.421356237)
t.penup()
t.goto(0,-200)
t.pendown()
t.forward(100)
t.penup()
t.right(90)
t.forward(100)
t.right(90)
t.pendown()
t.forward(100)
t.left(90)
t.penup()
t.forward(100)
t.left(90)
t.pendown()
t.forward(100)
t.left(45)
t.forward(141.421356237)
t.penup()
t.goto(100,-100)
t.pendown()
t.forward(141.421356237)
t.penup()
t.goto(0,100)
t.pendown()
t.right(90)
t.forward(141.421356237)
t.right(90)
t.forward(141.421356237)
t.penup()
t.goto(200,-200)
t.pendown()
t.right(90)
t.forward(141.421356237)
t.right(90)
t.forward(141.421356237)
t.right(45)
t.forward(100)
t.right(45)
t.forward(70.7106781187)
t.penup()
t.goto(150,-50)
t.pendown()
t.forward(70.7106781187)
# last line - keep window open

win.mainloop()
