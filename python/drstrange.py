import random  # for random stuff

# reusing variable name
random = random.seed(random.randint(1, 14000605))

common = 100
h = common + 4
e = common + 1
l = common + 8  # duplicate character. Saving memory
o = common + 10 + 1
w = common + 10 + 9
r = common + 10 + 4
d = common
space = 32
exclamation = 33
message = [h,e,l,l,o, space, w, o, r, l, d, exclamation]

# this is an if statement
if (random == 69420):
    # converting number to string
    print("".join([chr(i) for i in message]))