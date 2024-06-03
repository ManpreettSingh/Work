import numpy as np

# # joind two 1-D array
# a = np.array([1,2,3,4,5])
# b = np.array([6,7,8,9,10])
# c = np.concatenate((a,b))
# print(c)

# joind two 1-D array axis=0 me a ke bad b without changing number of
# element in array
# a = np.array([[1,2],[3,4],[5,6]])
# b = np.array([[6,7],[8,9],[10,11]])
# c = np.concatenate((a,b) , axis=0)
# print(c)

# # joind two 1-D array axis=1 me a ke element ke bad b with changing number of
# # element in array
# a = np.array([[1,2],[3,4],[5,6]])
# b = np.array([[6,7],[8,9],[10,11]])
# c = np.concatenate((a,b) , axis=1)
# print(c)

# joing array using stack function
# create krta h alag se dono ko and then add
# a = np.array([[1,2],[3,4],[5,6]])
# b = np.array([[6,7],[8,9],[10,11]])
# c = np.stack((a,b))
# print(c)

# isme normal stack krke hota h
# a = np.array([[1,2],[3,4],[5,6]])
# b = np.array([[6,7],[8,9],[10,11]])
# c = np.stack((a,b),axis=0)
# print(c)

# isme dono ke first array ke sath new array bnti h
# a = np.array([[1,2],[3,4],[5,6]])
# b = np.array([[6,7],[8,9],[10,11]])
# c = np.stack((a,b),axis=0)
# print(c)

# a = np.array([[1,2,5],[3,4,8],[5,6,11]])
# b = np.array([[6,7,1],[8,9,2],[10,11,0]])
# c = np.stack((a,b),axis=0)
# print(c)

# stack seprate array bnake ke dalta h 
# on the other than concatenate saro ko same me dalta h 

# a = np.array([[1,2,5],[3,4,8],[5,6,11]])
# b = np.array([[6,7,1],[8,9,2],[10,11,0]])
# c = np.hstack((a,b))
# print(c)

# a = np.array([[1,2,5],[3,4,8],[5,6,11]])
# b = np.array([[6,7,1],[8,9,2],[10,11,0]])
# c = np.vstack((a,b))
# print(c)

