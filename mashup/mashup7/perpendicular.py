import math

# Read the number of test cases
t = int(input())

# Process each test case
for _ in range(t):
    X, Y, K = map(int, input().split())

    # First line segment (AB)
    if K <= X:
        # Horizontal segment
        Ax, Ay, Bx, By = 0, 0, K, 0
    elif K <= Y:
        # Vertical segment
        Ax, Ay, Bx, By = 0, 0, 0, K
    else:
        # Diagonal segment
        Ax, Ay, Bx, By = 0, 0, X, int(math.sqrt(K**2 - X**2))

    # Second line segment (CD)
    if Ax == Bx:  # AB is vertical
        Cx, Cy, Dx, Dy = 0, 0, K, 0  # Horizontal CD
    elif Ay == By:  # AB is horizontal
        Cx, Cy, Dx, Dy = 0, 0, 0, K  # Vertical CD
    else:
        # AB is diagonal; calculate a perpendicular direction
        Cx, Cy = Bx, By
        Dx, Dy = Cx - (By - Ay), Cy + (Bx - Ax)

    # Ensure Dx, Dy fit within bounds
    Dx = max(0, min(Dx, X))
    Dy = max(0, min(Dy, Y))

    # Print results
    print(Ax, Ay, Bx, By)
    print(Cx, Cy, Dx, Dy)
