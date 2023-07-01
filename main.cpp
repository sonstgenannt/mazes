#include<iostream>
#include<vector>
#include<string>

#include<stdlib.h>
#include<time.h>

using namespace std;

class node {
   private:
      string uid;
      string gen_uid(const int& length, const int& min, const int& max) const {
         string id = "";
         for (int i = 0; i < length; ++i) {
            char chr = rand() % (max - min + 1) + min;
            id += chr;
         }
         return id;
      }

   public:
      node() {
         this->uid = gen_uid(5, 65, 90);
      }

      string get_uid() const {
         return this->uid;
      }
};

class graph {
   private:
      vector<node> nodes;
   public:
      graph() {std::cout << "i am a graph" << std::endl;}

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
