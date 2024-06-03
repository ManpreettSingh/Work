import numpy as np


# splitting in 1-D array

# a=np.array([1,2,3,4,5,6])
# b=np.array_split(a,4)
# print(b)

# a=np.array([1,2,3,4,5,6])
# b=np.array_split(a,4)
# print(b[1])

# splitting in 2-D array

# a=np.array([[1,2,3],[4,5,6],[7,8,9]])
# b=np.array_split(a,2)
# print(b)

a=np.array([[1,2,3],[4,5,6],[7,8,9]])
b=np.array_split(a,3,axis=1)
print(b)

# splitting in 2-D array

# a=np.array([[1,2,3,5],[4,5,6,6],[7,8,9,11],[11,22,33,0]])
# b=np.vsplit(a,4)
# print(b)

# a=np.array([[1,2,3,5],[4,5,6,6],[7,8,9,11],[11,22,33,0]])
# b=np.hsplit(a,4)
# print(b)




