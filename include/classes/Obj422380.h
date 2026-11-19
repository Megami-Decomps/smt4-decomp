#ifndef CLASSES_OBJ422380_H
#define CLASSES_OBJ422380_H

#include "common.h"
#include <stddef.h>

/* An AA-tree node; a new node starts out linked to itself at level 0 (the tree's sentinel). */
struct Obj422380Node {
    /* 0x00 */ Obj422380Node *left;
    /* 0x04 */ Obj422380Node *right;
    /* 0x08 */ Obj422380Node *parent;
    /* 0x0C */ u8 level;

    Obj422380Node() : left(this), right(this), parent(this), level(0) {}
};

/* A tree-like container (vtable at 0x422380; named after it until its real name is known) whose
 * sentinel node sits inside the object and starts out linked to itself. */
class Obj422380 {
public:
    Obj422380();
    virtual ~Obj422380();

    /* 0x04 */ Obj422380Node *root;
    /* 0x08 */ Obj422380Node nil;     /* sentinel: empty links point here */
    /* 0x18 */ Obj422380Node *leftmost;
    /* 0x1C */ Obj422380Node *rightmost;
    /* 0x20 */ u32 count;
};

typedef char Obj422380SizeCheck[sizeof(Obj422380) == 0x24 && offsetof(Obj422380, leftmost) == 0x18 ? 1 : -1];

#endif
