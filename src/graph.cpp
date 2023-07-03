#include "../headers/node.h"
#include "../headers/graph.h"
#include <vector>
#include <iostream>

graph::graph() {std::cout << "i am a graph" << std::endl;}

// this is probably bad -- use a hashmap?
bool graph::add_node(const node& n) {
   for (int i = 0; i < this->nodes.size(); ++i) {
      if (n.get_uid() == this->nodes[i].get_uid()) {
         std::cerr << "ERROR: You cannot add the same node to a graph twice." << std::endl;
         return false;
      }
   }
   this->nodes.push_back(n);
   return true;
}

std::vector<node> graph::get_nodes() {
   return this->nodes;
}
