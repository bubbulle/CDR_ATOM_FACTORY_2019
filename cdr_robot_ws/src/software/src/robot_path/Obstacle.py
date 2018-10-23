#!usr/bin/env python-

from Piece import Piece
from Piece import Dimension

class Obstacle(Piece):
    def __init__(self, dimension, pose2D, movable):
        Piece.__init__(self, dimension, pose2D)
        self.movable_ = movable

    
