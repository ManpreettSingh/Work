# import numpy as np
# arr=np.array([1,2,3,4])
# arr1=arr.copy()
# arr[0]=10
# print(arr)
# print(arr1)

import numpy as np
arr=np.array([1,2,3,4])
arr1=arr.view()
arr[0]=10
print(arr)
print(arr1)