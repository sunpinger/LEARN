"""
text_file = open('人工智能与python程序设计.txt', 'rt',encoding='utf-8')
print(text_file.readline(),end='')
print(text_file.readline(),end='')
print(text_file.readline())

binary_file = open('人工智能与Python程序设计.txt', 'rb')
print(binary_file.readline())

class Student(object):
	\"""docstring for Student\"""
	def __init__(self, name, score):
		self.name = name
		self.score = score

	def print_score(self):
		print('%s: %d'%(self.name,self.score))

Michael= Student('Michael', 98)
print(Michael.name)
Michael.print_score()
"""

# import spell

# print(spell.correction('speling'))
# print(spell.edits2('set'))

# import zhon

# for i in zhon.hanzi.punctuation:
# 	print(i)

# a = 0
# b = [0]

# print(type(b) == list)

print('\u2026\u2027')


