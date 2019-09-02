from IPython.display import Javascript, display_javascript, HTML, IFrame
# fetch library
import time

def bridge(cmd):
    jscmd2 = 'window.simulatorWindow.postMessage("' + cmd + '", "*");'
    jsf2 = Javascript(jscmd2)
    display_javascript(jsf2)
    
class Car(object):
    def __init__(self):
        self._bridge = bridge
        self.max_steer = 25.0
    
    # define throttle
    def gas(self, amt):
        
        if amt > 1:
            # any value between 1.0 (full throttle)
            amt = 1

        if amt < -1:
            # any value between -1.0 (full reverse)
            amt = -1
        s = 'throttle:' + str(amt)
        self._bridge(s)
    # a function that takes the car steering values like any value between -25 to 25 works here
    def steer(self, angle):
        if angle > self.max_steer:
            angle = max_steer
        if angle < -self.max_steer:
            angle = -max_steer
        
        frac = float(angle) / self.max_steer
        s = "steer:" + str(frac)
        self._bridge(s)
