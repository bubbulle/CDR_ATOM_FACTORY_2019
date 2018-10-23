#!usr/bin/env python-

import numpy as np
import numpy.linalg as alg

import Obstacle from Obstacle
import Robot from Robot

class Map:
    def __init__(self, width, length, width_resolution, length_resolution):
        self.width_ = width
        self.length_ = length
        self.width_resolution_ = width_resolution
        self.length_resolution_ = length_resolution
        self.matrix_= np.zeros((width_resolution,length_resolution)) #Matrix set to 0 
        self.obstacles_= set()
        self.robots_ = set()

    def Add_Robot(self, robot):
        self.matrix_[robot.pose2D] = 2 #Robot is on the map and set to 2

    def Add_Obstacle(self, obstacle):
        self.matrix_[obstacle.pose2D] = 1 #Obstacle i son the map and set to 1

    def Pose_Available(self, piece):
        if(self.matrix_[piece.pose2D] == 0):
            return True
        else:
            return False