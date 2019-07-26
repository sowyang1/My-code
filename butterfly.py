#author: Sydney Owyang
#module:
#desc:
#creater: 6/21/19

from PIL import Image

def start():

    myImage = Image.open("butterfly.jpg")
    myImage.rotate(45).show()

start()
