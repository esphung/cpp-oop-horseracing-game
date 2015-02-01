'''
FILENAME: 				main.py
AUTHOR: 				Eric Scott Phung
CREATED: 				2014.01.31 (ESP)
PURPOSE: 				A horse-racing game in Python3
'''

from random import randint
import random
#print (randint(0,9))


class Horse(object):
	"""Class for creating a Horse"""
	def __init__(self, arg, name, lane, position):
		super(Horse, self).__init__()
		''' generates each horse and lane '''
		self.arg = arg
		self.lane = lane
		self.arg = arg
		self.lane = lane
		self.position = position
		self.name = name
		#self.lane[position] = self.name
		Lane(self.arg, self.name, self.position, self.lane)
		print(self.lane)



class Lane(object):
	"""docstring for Lane"""
	def __init__(self, arg, name, position, lane):
		super(Lane, self).__init__()
		self.arg = arg
		self.name = name
		self.lane = lane
		self.position = position
		''' here is where the position is defined '''
		percentage_chance = .50
		if random.random() <= percentage_chance:
			position = count + 1
			lane[position] = self.name
		else:
			position = count
			lane[position] = self.name
		if position == 10:		
			print("{} has FINISHED to race!".format(self.name))
			keepGoing = False



position = 0
count = 0
arg = "Hello World"
MAX = 10

name = ['stallion', 'mustang', 'donkey']

keepGoing = True
while (count != MAX) and (keepGoing == True):
	lane = [0,1,2,3,4,5,6,7,8,9,10]
	for i in range(len(name)):
		lane[0] = "Start"
		Horse(arg, name[i], lane, position)
		lane = [0,1,2,3,4,5,6,7,8,9,10]# reset lane	
	input("Pass:\t{}\nPress Enter...".format(count))
	count = count + 1









