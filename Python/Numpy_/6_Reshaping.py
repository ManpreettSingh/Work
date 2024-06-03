import numpy as np
# we can usw -1 where 

# 1-D to 2-D array

# a=np.array([1,2,3,4,5,6,7,8])
# print(a.reshape(4,2))

# # 1-D to 3-D array

# a=np.array([1,2,3,4,5,6,7,8,9,10,11,12])
# print(a.reshape(3,2,2))

# 1-D to 4-D array

# a=np.array([1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16])
# print(a.reshape(2,2,2,2))
# print(a)

# a=np.array([1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16])
# a=(a.reshape(4,4))
# b=a.copy()
# print(b.reshape(2,2,2,2).base)

a=np.array([[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]])
print(a.reshape(-1))
