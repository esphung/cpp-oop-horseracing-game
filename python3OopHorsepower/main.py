'''
FILENAME: 				main.py
AUTHOR: 				Eric Scott Phung
CREATED: 				2014.01.31 (ESP)
PURPOSE: 				A horse-racing game in Python3
'''

from random import randint
#print (randint(0,9))

class RaceLane(object):
	"""docstring for RaceLane"""
	def __init__(self, arg):
		super(RaceLane, self).__init__()
		self.arg = arg
		self.horse = [Horse.stallionHorse(arg), Horse.mustangHorse(arg), Horse.donkeyHorse(arg)]
		lane = [0,1,2,3,4,5,6,7,8,9,10]
		j = 0
		minRand = 0
		while j < 1:
			randPosition = (randint(minRand,j))
			lane[randPosition] = self.horse[0]
			j = j + 1
			print(lane)
		
		
		 
		#i = 0
		#while i < 3:
			#print("\t{}".format(self.horse[i]))
			#i = i + 1




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
		return self.horseType

	@classmethod
	def mustangHorse(self, arg):
		''' generates a mustang horse '''
		self.arg = arg
		self.horseType = "Mustang"
		return self.horseType
		

	@classmethod
	def donkeyHorse(self, arg):
		''' generates a donkey horse '''
		self.arg = arg
		self.horseType = "Donkey"
		return self.horseType
		
		





		




''' Dev input '''
#horseType = "Stallion"
arg = "READY,SET,GO!"
#Horse(arg, horseType)

position = 0

Horse.stallionHorse(arg)
Horse.mustangHorse(arg)
Horse.donkeyHorse(arg)

RaceLane(arg)









