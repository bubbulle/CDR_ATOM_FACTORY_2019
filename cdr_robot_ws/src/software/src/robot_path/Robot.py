#!usr/bin/env python-

from Piece import Piece
from Piece import Dimension

class Robot(Piece):
    def __init__(self, dimension, pose2D):
        Piece.__init__(self, dimension, pose2D)