'''
FILENAME: 				main.py
AUTHOR: 				Eric Scott Phung
CREATED: 				2014.01.31 (ESP)
PURPOSE: 				A horse-racing game in Python3
'''

from random import randint
#print (randint(0,9))



class Horse(object):
	"""Class for creating a Horse"""
	#print("I am a CLASS horse")
	def __init__(self, arg):
		super(Horse, self).__init__()
		self.arg = arg
		self.name = name
		print("I am a SUPERSET horse")
		

	@classmethod
	def stallionHorse(self, arg):
		''' generates a stallion horse '''
		self.arg = arg
		self.horseType = "Stallion"
		lane = [0,1,2,3,4,5,6,7,8,9,10]
		j = 0
		minRand = 0
		randPosition = (randint(minRand,j))
		lane[randPosition] = self.horseType
		j = j + 1
		print(lane)

	@classmethod
	def mustangHorse(self, arg):
		''' generates a mustang horse '''
		self.arg = arg
		self.horseType = "Mustang"
		lane = [0,1,2,3,4,5,6,7,8,9,10]
		j = 0
		minRand = 0
		randPosition = (randint(minRand,j))
		lane[randPosition] = self.horseType
		j = j + 1
		print(lane)

	@classmethod
	def donkeyHorse(self, arg):
		''' generates a donkey horse '''
		self.arg = arg
		self.horseType = "Donkey"
		lane = [0,1,2,3,4,5,6,7,8,9,10]
		j = 0
		minRand = 0
		randPosition = (randint(minRand,j))
		lane[randPosition] = self.horseType
		j = j + 1
		print(lane)
		
		



		




''' Dev input '''

arg = "READY,SET,GO!"

Horse.stallionHorse(arg)
Horse.mustangHorse(arg)
Horse.donkeyHorse(arg)










