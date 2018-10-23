#!usr/bin/env python-

class Dimension:
    def __init__(self, width, length, height):
        self.width_ = width
        self.length_ = length
        self.height_ = height

class Piece: 
    def __init__(self,dimension, pose2D):
        self.dimension_ = dimension
        self.pose2D_ = pose2D