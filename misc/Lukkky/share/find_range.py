#!/usr/bin/python3
import random
import time
import sys

flag = "KCTFJr{Coding_skill_is_always_important}"
count = 0

class Unbuffered(object):
   def __init__(self, stream):
       self.stream = stream
   def write(self, data):
       self.stream.write(data)
       self.stream.flush()
   def writelines(self, datas):
       self.stream.writelines(datas)
       self.stream.flush()
   def __getattr__(self, attr):
       return getattr(self.stream, attr)

def find_answer(b, quiz):
    b.append(quiz)
    b.sort()
    return b.index(quiz) + 1
    
if __name__ == '__main__': 
    sys.stdout = Unbuffered(sys.stdout)
    endtime = time.time() + (60 * 7)
    
    # for i in range(7):
    a = [i for i in range(1, 7777)]
    print('In this challenge, you have to find a range containing random number.')
    print('If you get 777 answer, I will give you FLAG ;D')

    for i in range(777):

        #b = random.choices(a, k=5)
        b = random.sample(a, 5)
        quiz = b.pop()
        b.sort()

        print('\nRandom Number : {}'.format(quiz))
        print('[1] 0 <= x < {}'.format(b[0]))
        print('[2] {} <= x < {}'.format(b[0], b[1]))
        print('[3] {} <= x < {}'.format(b[1], b[2]))
        print('[4] {} <= x < {}'.format(b[2], b[3]))
        print('[5] {} <= x < 7777'.format(b[3]))

        answer = input('>> ')
        if find_answer(b, quiz) == int(answer):
            count += 1
        else :
            print('wrong answer!')
            break

        if count == 777:
            print("FLAG : {}".format(flag))
            break

        if time.time() > endtime:
            print('TIME ALERT!')
            break

    print('bye bye~!')
    
