# searching array - you can search an array for a certain value and return the indexes that get the match. by using where()
# import numpy as np
# a = np.array([1,2,3,4,5,4,4])
# b = np.where(a == 4)
# print(b)

# # now we will find the indexes where the values are even:
# import numpy as np
# a = np.array([1,2,3,4,5,6,7,8])
# b = np.where(a%2 == 0)
# print(b)

# # now we will find the indexes where the values are odd:
# import numpy as np
# a= np.array([1,2,3,4,5,6,7,8])
# b = np.where(a%2 == 1)
# print(b)

# # Searchsorted() - perform binary search in array.
# # we will now find the index where the value 7 should be insterted.
# import numpy as np
# a = np.array([1,2,6,8,9,7])
# b = np.searchsorted(a, 1)
# print(b)

# # now we will search fron right side
# import numpy as np
# a = np.array([6,7,8,9])
# b = np.searchsorted(a, 6, side='right')
# print(b)

# # how to search multiple values:
# import numpy as np
# sharad = np.array([1,2,3,5,7])
# sharad1 = np.searchsorted(sharad, [2,4,6] , side='right')
# print(sharad1)
