#ifndef CLASSES_OBJ422380_H
#define CLASSES_OBJ422380_H

#include "common.h"

struct Obj422380Node {
    /* 0x00 */ Obj422380Node *next;
    /* 0x04 */ Obj422380Node *prev;
    /* 0x08 */ Obj422380Node *parent;
};

/* A tree-like container (vtable at 0x422380; named after it until its real name is known) whose
 * header node sits inside the object and starts out linked to itself. */
class Obj422380 {
public:
    Obj422380();
    virtual ~Obj422380();

    /* 0x04 */ Obj422380Node *head;
    /* 0x08 */ Obj422380Node anchor;
    /* 0x14 */ u8 color;
    /* 0x18 */ Obj422380Node *leftmost;
    /* 0x1C */ Obj422380Node *rightmost;
    /* 0x20 */ u32 count;
};

typedef char Obj422380SizeCheck[sizeof(Obj422380) == 0x24 ? 1 : -1];

#endif
