import turtle as tt
n = int(input("Enter number of sides of polygon: "))
 
input_points = []
for i in range(n):
    x, y = map(float, input("Enter the point " + str(i + 1) + ": ").split())
    input_points.append((x, y))
 
screen = tt.Screen()
point = tt.Turtle()
point.shapesize(0.02)
point.pensize(1)
point.speed("fastest")
point.penup()
point.shapesize(0.2)
 
# DDA Algorithm to get boundary points
allPoints = set()
 
f = True  # to get seed point
side1 = []
 
 
def drawLine(x1, y1, x2, y2):
    global f
    dx = x2 - x1
    dy = y2 - y1
    steps = abs(dx) if abs(dx) > abs(dy) else abs(dy)
    steps = int(steps)
    x_change = dx / steps
    y_change = dy / steps
    allPoints.add((int(x1), int(y1)))
    point.goto(int(x1), int(y1))
    point.dot()
    side1.append((int(x1), int(y1)))
    x1 += 0.5
    y1 += 0.5
    for _ in range(steps):
        x1 += x_change
        y1 += y_change
        allPoints.add((int(x1), int(y1)))
        point.goto(int(x1), int(y1))
        point.dot()
        if f:
            side1.append((int(x1), int(y1)))
    f = False
 
 
def bfs(x1, y1, b, x2=-1000, y2=-1000):
    c = 0
    if (int(x1), int(y1)) in b:
        return False
    dx = x2 - x1
    dy = y2 - y1
    steps = abs(dx) if abs(dx) > abs(dy) else abs(dy)
    steps = int(steps)
    x_change = dx / steps
    y_change = dy / steps
    x1 += 0.5
    y1 += 0.5
    for _ in range(steps):
        x1 += x_change
        y1 += y_change
 
        if (int(x1), int(y1)) in b:
            c += 1
    return c % 2 == 1
 
 
def seedPoint(side, boundary):
    for p in side:
        if bfs(p[0], p[1] + 1, boundary):
            return p[0], p[1] + 1
        if bfs(p[0], p[1] - 1, boundary):
            return p[0], p[1] - 1
        if bfs(p[0] + 1, p[1], boundary):
            return p[0] + 1, p[1]
        if bfs(p[0] - 1, p[1], boundary):
            return p[0] - 1, p[1]
    return -1000, -1000
 
 
def floodfill(x1, y1):
    if (x1, y1) in allPoints:
        return
 
    vis = {(x1, y1)}
    q = [(x1, y1)]
    while len(q) > 0:
        x1, y1 = q.pop(0)
        point.goto(x1, y1)
        point.dot()
        if ((x1 + 1, y1) not in allPoints) and ((x1 + 1, y1) not in vis):
            q.append((x1 + 1, y1))
            vis.add((x1 + 1, y1))
        if ((x1 - 1, y1) not in allPoints) and ((x1 - 1, y1) not in vis):
            q.append((x1 - 1, y1))
            vis.add((x1 - 1, y1))
        if ((x1, y1 + 1) not in allPoints) and ((x1, y1 + 1) not in vis):
            q.append((x1, y1 + 1))
            vis.add((x1, y1 + 1))
        if ((x1, y1 - 1) not in allPoints) and ((x1, y1 - 1) not in vis):
            q.append((x1, y1 - 1))
            vis.add((x1, y1 - 1))
        if ((x1 + 1, y1+1) not in allPoints) and ((x1 + 1, y1+1) not in vis):
            q.append((x1 + 1, y1+1))
            vis.add((x1 + 1, y1+1))
        if ((x1 - 1, y1-1) not in allPoints) and ((x1 - 1, y1-1) not in vis):
            q.append((x1 - 1, y1-1))
            vis.add((x1 - 1, y1-1))
        if ((x1-1, y1 + 1) not in allPoints) and ((x1-1, y1 + 1) not in vis):
            q.append((x1-1, y1 + 1))
            vis.add((x1-1, y1 + 1))
        if ((x1+1, y1 - 1) not in allPoints) and ((x1+1, y1 - 1) not in vis):
            q.append((x1+1, y1 - 1))
            vis.add((x1+1, y1 - 1))
 
for i in range(1, n):
    drawLine(input_points[i - 1][0], input_points[i - 1]
             [1], input_points[i][0], input_points[i][1])
 
drawLine(input_points[n - 1][0], input_points[n - 1]
         [1], input_points[0][0], input_points[0][1])
 
x = seedPoint(side1, allPoints)
print(x)
print(allPoints)
 
point.color("violet")
 
if x[0] != -1000:
    floodfill(x[0], x[1])
 
print("END")
 
screen.exitonclick()
