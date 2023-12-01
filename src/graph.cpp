#include "../headers/node.h"
#include "../headers/graph.h"
#include <vector>
#include <map>
#include <iostream>

graph::graph() {std::cout << "i am a graph" << std::endl;}

// this is now using a hashmap
bool graph::add_node(const node& n) {
   if (this->nodes.count(n.get_uid()) > 0) {
      std::cerr << "ERROR: You cannot add the same node to a graph twice." << std::endl;
      return false;
   }
   this->nodes.insert(std::make_pair(n.get_uid(), n));
   return true;
}

bool graph::add_edge(const node& n1, const node& n2) {
   this->edges.push_back(std::vector<node>{n1, n2});
   return true;
}

std::map<std::string, node> graph::get_nodes() {
   return this->nodes;
}

std::vector<std::vector<node>> graph::get_edges() {
   return this->edges;
}
