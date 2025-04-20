# same swap function

def swap(x, y):
    tmp = x # also, tmp is a temporary variable for safely keeping `x` value
    x = y
    y = tmp
    print(f"Inside swap: x = {x}, y = {y}\n") 

if __name__ == '__main__':
  x = 21
  y = 17
  # swap called, x = 17, y = 21
  swap(x,y)
  # inside main part, x = 21, y = 17
  print(f"Inside main: x = {x}, y = {y}\n")


