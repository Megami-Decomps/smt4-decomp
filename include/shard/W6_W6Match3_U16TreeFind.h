#ifndef W6_W6MATCH3_U16_TREE_FIND_H
#define W6_W6MATCH3_U16_TREE_FIND_H

#include "common.h"

struct U16LookupTree;
struct U16LookupNode;

struct U16LookupIterator {
    U16LookupNode* node;

    explicit U16LookupIterator(U16LookupNode* value) : node(value) {}
    U16LookupIterator(const U16LookupIterator& other) : node(other.node) {}
};

extern "C" U16LookupIterator onlineU16TreeFind(U16LookupTree* tree, u16* key);

#endif
