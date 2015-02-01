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
	#print("I am a CLASS horse")
	def __init__(self, arg, name, lane, position):
		super(Horse, self).__init__()
		''' generates each horse and lane '''
		self.arg = arg
		self.lane = lane
		self.position = position

		self.arg = arg
		self.lane = lane
		self.position = position
		self.name = name
		lane[position] = self.name
		Lane(self.arg, self.name, self.position, self.lane)
		print(lane)





		
		


class Lane(object):
	"""docstring for Lane"""
	def __init__(self, arg,name, position, lane):
		super(Lane, self).__init__()
		self.arg = arg
		self.name = name
		''' here is where the position is defined '''
		percentage_chance = 1.0
		percentage_chance = .50
		if random.random() <= percentage_chance:
			position = count + 1
			lane[position] = self.name
		else:
			lane[position] = self.name
			return
		
		
		

''' Dev input '''
#arg = "READY,SET,GO!"
position = 0
count = 0

arg = "Hello World"

while count != 10:
	lane = [0,1,2,3,4,5,6,7,8,9,10]

	Horse(arg, "stallion", lane, position)


	print("=============================")
	count = count + 1
	pass











