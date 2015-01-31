'''
FILENAME: 				main.py
AUTHOR: 				Eric Scott Phung
CREATED: 				2014.01.31 (ESP)
PURPOSE: 				A horse-racing game in Python3
'''

class RaceLane(object):
	"""docstring for RaceLane"""
	def __init__(self, arg):
		super(RaceLane, self).__init__()
		self.arg = arg
		self.lane = ['.','.','.']
		i = 0
		while i < 3:
			print("\t{}{}".format(Horse.stallionHorse(arg), self.lane[i:]))
			i = i + 1




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
arg = "ARE YOU A HORSE???"
#Horse(arg, horseType)

position = 0

Horse.stallionHorse(arg)
Horse.mustangHorse(arg)
Horse.donkeyHorse(arg)

RaceLane(arg)









