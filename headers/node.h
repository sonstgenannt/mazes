#include <string>
class node {
   private:
      std::string uid;
      /*
       * Generates a UID for a node.
       * length -- length of the UID.
       * min    -- minimum unicode char to generate.
       * max    -- maximum unicode char to generate.
       */
      std::string gen_uid(const int& length, const int& min, const int& max) const;
      
   public:
      node(); // basic constructor
      std::string get_uid() const; // UID getter
};
