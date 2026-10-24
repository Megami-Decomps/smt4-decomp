#ifndef CLASSES_OBJ4213B0_H
#define CLASSES_OBJ4213B0_H

#include "classes/AsdAllocatorObject.h"

/* A 16-byte array element with nothing to destroy. */
struct Obj4213b0Element {
    ~Obj4213b0Element() {}
    u8 unk00[0x10];
};

/* The array an Obj4213b0 holds: it destroys its elements and gives its storage back to its allocator. */
struct Obj4213b0Array {
    ~Obj4213b0Array();
    void clear();

    /* 0x00 */ AsdAllocatorObject *allocator;
    /* 0x04 */ Obj4213b0Element *begin;
    /* 0x08 */ Obj4213b0Element *end;
    /* 0x0C */ Obj4213b0Element *capacity;
};

/* A holder of one growable array (vtable at 0x4213b0; named after it until its real name is known). */
class Obj4213b0 {
public:
    virtual ~Obj4213b0();

    /* 0x04 */ u32 unk04;
    /* 0x08 */ Obj4213b0Array array;
};

typedef char Obj4213b0SizeCheck[sizeof(Obj4213b0) == 0x18 ? 1 : -1];

#endif
