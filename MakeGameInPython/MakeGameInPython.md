<g-emoji class="g-emoji" alias="baseball" fallback-src="https://github.githubassets.com/images/icons/emoji/unicode/1200be.png">⚾</g-emoji>
# Create Breakout Game using Python
## step by step

## step1
Import the required libraries
```bash
import math
import random
import time
from turtle import *
import turtle
```
## step2
we must make required functions
```bash
def make_block(x, y):
    pass
def init_blocks():
    pass 
def init_ball():
    pass
def init_screen():
    pass
def make_paddle():
    pass
def init():
    pass
def move_ball(ball):
    pass
def hit(t1, t2):
    pass
def hit_block(ball, blocks):
    pass
def hit_side_border(ball, screen):
    pass
def hit_top_border(ball, screen):
    pass
def hit_right_border(ball,screen):
    pass
def remove_block(block):
    pass 
def hit_paddle(ball, paddle):
    pass
def change_direction_x(ball):
    pass
def change_direction_y(ball):
    pass
def do_right():
    pass
def do_left():
    pass
```
## step3
Write the required commands in each function
#### def make_block(x, y)
```bash
    colors = ['red', 'blue', 'green', 'cyan', 'purple', 'yellow', 'orange']
    t = Turtle()
    t.shape('square')
    t.setpos(x, y)
    t.penup()
    t.shapesize(stretch_len=5, stretch_wid=1)
    t.color(random.choice(colors))
    return t
```
#### def init_blocks()
```bash
    blocks_x_pos = [-340, -230, -120, -10, 100, 210, 320]
    blocks_y_pos = [280, 255, 230, 205, 180]
    blocks = []
    for x in blocks_x_pos:
        for y in blocks_y_pos:
            t = make_block(x, y)            
            blocks.append(t)
    return blocks
```
#### def init_ball()
```bash
    ball = Turtle()
    ball.shape('circle')
    ball.penup()
    ball.shapesize(1)
    ball.dx = 1
    ball.dy = 1
    ball.setpos(0, -200)
    ball.color('white')
    return ball
```
#### def init_screen()
```bash
    win = Screen()
    win.setup(width=800, height=600)
    win.bgcolor('black')
    win.tracer(0)
    win.title('Breakout Game')
    return win
```
#### def make_paddle()
```bash
    t = Turtle()
    t.shape('square')
    t.penup()
    t.setpos(-100,-200)
    t.shapesize(stretch_len=5, stretch_wid=0.5)
    t.color("green")
    return t
```
#### def init()
```bash
    screen = init_screen()
    blocks = init_blocks()
    paddle = make_paddle()
    ball = init_ball()
    return ball, paddle, blocks, screen 
```
#### def move_ball(ball)
```bash
    ball.setpos(ball.xcor()+ball.dx, ball.ycor()+ball.dy)
```
#### def hit(t1, t2)
```bash
    return math.fabs(t1.xcor() - t2.xcor()) < 110 and \
       math.fabs(t1.ycor() - t2.ycor()) < 25
```
#### def hit_block(ball, blocks)
```bash
    for b in blocks:
        if hit(ball, b):
            return b
```

#### def hit_side_border(ball, screen)
```bash
    return ball.xcor() > screen.window_width()/2 - 10
```

#### def hit_top_border(ball, screen)
```bash
    return ball.ycor() > screen.window_height()/2 - 10
```


#### def hit_right_border(ball,screen)
```bash
    return ball.xcor() < -screen.window_width()/2 - 10
```
#### def remove_block(block)
```bash   
    block.setpos(10000, 10000)
```

#### def hit_paddle(ball, paddle)
```bash
   if ball.xcor()-50 <=paddle.xcor()<=ball.xcor()+50 and ball.ycor() - 20==paddle.ycor() :
       change_direction_y(ball)
```

#### def change_direction_x(ball)
```bash
    ball.dx = -ball.dx
```

#### def change_direction_y(ball)
```bash
    ball.dy = -ball.dy
```
#### def do_right()
```bash
    paddle.setpos(paddle.xcor() + 8, paddle.ycor())
```

#### def do_left()
```bash
    paddle.setpos(paddle.xcor() - 8, paddle.ycor())
```
## step4
```bash
ball, paddle, blocks, screen = init()
scren = turtle.Screen()   
scren.onkeypress(do_right ,'Right')
scren.onkeypress(do_left ,'Left')
scren.listen()

while True:
    move_ball(ball)
    if hit_side_border(ball,screen):
        change_direction_x(ball)
    if hit_top_border(ball,screen):
        change_direction_y(ball)
    if hit_right_border(ball,screen):
        change_direction_x(ball)
    hit_item = hit_block(ball, blocks)
    if hit_item:
        remove_block(hit_item)
        change_direction_y(ball)
    if hit_paddle(ball, paddle):
        change_direction_y(ball)
    screen.update()
    time.sleep(0)
```
## step5
Run the Python code and enjoy:)

<img src="https://media.geeksforgeeks.org/wp-content/uploads/20220616181820/FinalCodeOutput.gif">

