#include<iostream>
#include<vector>
#include<string>

#include<stdlib.h>
#include<time.h>
#include "headers/node.h"

using namespace std;

class graph {
   private:
      vector<node> nodes;
   public:
      graph() {std::cout << "i am a graph" << std::endl;}

      // this is probably bad -- use a hashmap
      bool add_node(const node& n) {
         for (int i = 0; i < this->nodes.size(); ++i) {
            if (n.get_uid() == this->nodes[i].get_uid()) {
               cerr << "ERROR: You cannot add the same node to a graph twice." << endl;
               return false;
            }
         }
         this->nodes.push_back(n);
         return true;
      }

      vector<node> get_nodes() {
         return this->nodes;
      }
};

int main() {
   srand(time(NULL));
   graph g;
   node n;
   node m;
   g.add_node(n);
   g.add_node(m);
}
