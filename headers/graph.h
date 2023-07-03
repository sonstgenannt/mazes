#include<vector>

class graph {
   private:
      std::vector<node> nodes;

   public:
      graph();
      bool add_node(const node& n);
      std::vector<node> get_nodes();
};
