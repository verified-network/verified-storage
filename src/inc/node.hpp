#ifndef PMT_NODE_H
#define PMT_NODE_H

#include <vector>

#include "alias.hpp"
#include "nodetype.hpp"

class Node {
    protected:
        buffer_t value_;
        char node_type_;

    public:
        Node();
        char GetNodeType();
        void SetNodeType(char  input);
        buffer_t GetValue();
        void SetValue(buffer_t input);
        bufferarray_t Raw();
        buffer_t Serialize();
        buffer_t Hash();
};

#endif