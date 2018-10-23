#!usr/bin/env python-

import numpy as np
import numpy.linalg as alg

from Obstacle import Obstacle
from Robot import Robot

class Map:
    def __init__(self, width, length, width_resolution, length_resolution):
        self.width_ = width
        self.length_ = length
        self.width_resolution_ = width_resolution
        self.length_resolution_ = length_resolution
        self.matrix_= np.zeros((width_resolution,length_resolution)) #Matrix set to 0 
        self.obstacles_= set()
        self.robots_ = set()

    def Pose_Available(self, piece):
        if(self.matrix_[piece.pose2D] == 0):
            return True
        else:
            return False

    def Add_Robot(self, robot):
        if(Pose_Available(self,robot) == True):
            self.matrix_[robot.pose2D.x , robot.pose2D.y] = 2 #Robot is on the map and set to 2

    def Add_Obstacle(self, obstacle):
        if(Pose_Available(self,obstacle) == True):
        self.matrix_[obstacle.pose2D] = 1 #Obstacle i son the map and set to 1