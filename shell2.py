
myval1 = 1

def inputs(myval1):
        print"inputs has begun"
        print"myval1 is: ", myval1

def processing(myval2):
        print"processing has begun"
        print"myval2 is: ", myval2

def outputs(myval3):
        print"outputs has begun"
        print"myval2 is: ", myval3


def mainline():
        print"this is my python mainline start"
        myval2 = 2
        myval3 = 3
        inputs(myval1)
        processing(myval2)
        outputs(myval3)
        print"this is my python mainline end..."

## added by Professor Reed to "automatically start the process"
##
mainline()
