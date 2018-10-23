#!/usr/bin/env python

import numpy

#Pseudo_code for A_star algo

"""
function A*(start,goal)
    closedset := the empty set    // The set of nodes already evaluated.
    openset := {start}    // The set of tentative nodes to be evaluated, initially containing the start node
    came_from := the empty map    // The map of navigated nodes.
 
    g_score[start] := 0    // Cost from start along best known path.
    // Estimated total cost from start to goal through y.
    f_score[start] := g_score[start] + heuristic_cost_estimate(start, goal)
 
    while openset is not empty
        current := the node in openset having the lowest f_score[] value
        if current = goal
            return reconstruct_path(came_from, goal)
 
        remove current from openset
        add current to closedset
        for each neighbor in neighbor_nodes(current)
            if neighbor in closedset
                continue
            tentative_g_score := g_score[current] + dist_between(current,neighbor)
 
            if neighbor not in openset or tentative_g_score < g_score[neighbor] 
                came_from[neighbor] := current
                g_score[neighbor] := tentative_g_score
                f_score[neighbor] := g_score[neighbor] + heuristic_cost_estimate(neighbor, goal)
                if neighbor not in openset
                    add neighbor to openset
 
    return failure
 
function reconstruct_path(came_from,current)
    total_path := [current]
    while current in came_from:
        current := came_from[current]
        total_path.append(current)
    return total_path

"""

class Node:
    def __init__(self, x=0, y=0):
        self.x_ = x
        self.y_ = y

        self.parent = None

        self.cost_ = None
        self.cost_.heuristic_ = 0
        self.cost_.g_ = 0
        self.cost_.f_ = 0

    def test(self):
        print("x")

class A_Star:
    def __init__(self, map=None, start_node=Node(), target_node=Node()):
        self.closed_list = set()
        self.opened_list = set()

        self.start_node_ = Node()
        self.target_node_ = Node()

        self.start_node_.x_ = start_node.x_
        self.start_node_.y_ = start_node.y_

        self.opened_list.add(self.start_node_)

        self.final_path_ = []
        
    def path_finding(self):
        current = self.start_node_

        while self.opened_list:
            #current := the node in openset having the lowest f_score[] value
            current = min(self.opened_list, lambda node : node.cost_.g_ + node.cost_.heuristic_)

            if current == self.target_node_:
                while current.parent:
                    self.final_path_.append(current)
                    current = current.parent
                
                self.final_path_.append(current)
                return self.final_path_[::-1]

            self.opened_list.remove(current)
            self.closed_list.add(current)

            for node in self.opened_list:
                
