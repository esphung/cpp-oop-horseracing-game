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
	def __init__(self, arg, lane):
		super(Horse, self).__init__()
		''' generates each horse and lane '''
		self.arg = arg
		self.lane = lane
		''' lane position must change HERE!!! '''
		lane[0] = self.arg
		print(lane)






''' Dev input '''
#arg = "READY,SET,GO!"
lane = [0,1,2,3,4,5,6,7,8,9,10]


Horse("Stallion", lane)
Horse("Mustang",lane)
Horse("Donkey",lane)










