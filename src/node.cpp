#include "../headers/node.h"
std::string node::gen_uid(const int& length, const int& min, const int& max) const {
   std::string id = "";
   for (int i = 0; i < length; ++i) {
      char chr = rand() % (max - min + 1) + min;
      id += chr;
   }
   return id;
}

node::node() {
   this->uid = gen_uid(5, 65, 90);
}

std::string node::get_uid() const {
   return this->uid;
}
