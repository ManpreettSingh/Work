import numpy as np
#  itrating 1-D array
# a=np.array([1,2,3,4,5,6])
# for i in a:
#     print(i)

# # itrating 2-D array
# a=np.array([[1,2,3,4],[5,6,7,8],[9,10,11,12]])
# for i in a:
#     for j in i:
#         print(j)

# itrating 3-D array
# a=np.array([[[1,2,3,4],[5,6,7,8],[9,10,11,12]]])
# for i in a:
#     for j in i:
#         for k in j:
#             print(k)

# itrating 3-D array using nditrator
# a=np.array([[[1,2,3,4],[5,6,7,8],[9,10,11,12]]])
# for i in np.nditer(a):
#     print(i)

# itrating 3-D array using nditrator
a=np.array([[[1,2,3,4],[5,6,7,8],[9,10,11,12]]])
for i in np.nditer(a[:,1:,1:3]):
    print(i)
