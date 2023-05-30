# rotate an 2d array 90 degress clockwise
def rotate(x):
    return list(zip(*x[::-1]))

def main():
    # input format
    # 1st line of input: size of panels
    # first N lines denote blue panel
    # next N lines denote red panel
    # # denotes colored cell, . denotes empty cell
    
    # read stdin from in/panel_puzzle.txt
    
    n = 0
    blue = []
    red = []
    
    with open('problems/in/panel_puzzle.txt', 'r') as f:
        n = int(f.readline())
        blue = [f.readline().strip() for _ in range(n)]
        red = [f.readline().strip() for _ in range(n)]
    
    # convert blue and red into 2d array
    blue = [list(x) for x in blue]
    red = [list(x) for x in red]
    
    # rotate red 90 degrees clockwise 4 times
    for _ in range(4):
        red = rotate(red)
        
        print('red', red)

if __name__ == '__main__':
    main()