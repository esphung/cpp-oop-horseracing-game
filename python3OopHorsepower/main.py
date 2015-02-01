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
	def __init__(self, arg, lane, position):
		super(Horse, self).__init__()
		''' generates each horse and lane '''
		self.arg = arg
		self.lane = lane
		self.position = position

		''' starting positions
		i = 0
		while i < 1:
			lane[0] = self.arg
			i = i + 1
		else:
			lane[0] = lane[0]
			'''

		''' lane position changes HERE!!! '''
		
		lane[position] = self.arg
		Lane(arg, position, lane)
		print(lane)
		


class Lane(object):
	"""docstring for Lane"""
	def __init__(self, arg, position, lane):
		super(Lane, self).__init__()
		self.arg = arg
		''' here is where the position is defined '''
		percentage_chance = .5
		if random.random() < percentage_chance:
			position = position + 1
			#print("Yay!!!")
			lane[position] = self.arg
			#return
		
		
		

''' Dev input '''
#arg = "READY,SET,GO!"
position = 0
count = 0

while count < 10:
	lane = [0,1,2,3,4,5,6,7,8,9,10]

	Horse("Stallion", lane, position)
	Horse("Mustang",lane, position)
	Horse("Donkey",lane, position)

	print("=============================")
	count = count + 1
	pass











