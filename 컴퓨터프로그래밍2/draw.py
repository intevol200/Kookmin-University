import turtle
t=turtle.Turtle()

def draw(numb):
    for i in range(numb):
        t.forward(50)
        t.left(360/numb)

n = int(turtle.textinput('','그리고 싶은 도형을 입력해주세요 (예. 3 = 삼각형) '))

draw(n)
