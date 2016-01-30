##Python 2.7+ by Professor Reed -- Exercise 2b, ShoeSize tells your Age!
##PreConference Workshop on Feb. 9th, 2016 -- Robotic Programming
##

##import readline

### Global Variables:
shoesize = 0
dobyr = 0
urage = 0  

def inputs():
    print"\n ===this is the called inputs subroutine==="
    print"Modify shoesize to your shoe size (whole size up): "
    print shoesize
    global shoesize
    global dobyr
    global urage 
##    shoesize = 10 ## test age
    shoesize = 13
    print shoesize
    print "IP shoesize is: "
    print shoesize
    
    dobyr = 1951
    print "IP DOB year is: "
    print dobyr
    
    return()

def processing():
    print"\n ===this is the called processing subroutine==="
    print"\n Being Processing Magic Shoe==>Age Calculations!"
    global urage
    result1 = shoesize * 5
    print result1
    result2 = result1 + 50
    print result2
    result3 = result2 * 20
    print result3
    result4 = result3 + 1016
    print result4
    dobyr = 1951
    result5 = result4 - dobyr
    print result5
    urage = result5
    print urage
    return()

def outputs():
    print"\n ===this is the called outputs subroutine==="
    print"Your shoe size is: ", shoesize
    print"Your Birth Year (YYYY) is: ", dobyr
    print"Your age from your shoe size (shoe size age nnnn) is: ", urage
    return

def mainline():
    print"*** this is our mainline in Python starting ***"
   
    inputs()
    processing()
    outputs()
    
    print"\n*** this is our mainline in Python ending ***"
    return ## end of mainline in Python

mainline()

