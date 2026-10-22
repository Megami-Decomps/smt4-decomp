#ifndef CLASSES_OBJ55A800_H
#define CLASSES_OBJ55A800_H

#include "common.h"

/* Array element with a virtual cleanup operation and 0xb8-byte stride. */
class Obj55a800Element {
public:
    virtual ~Obj55a800Element();
    /* 0x04 */ u8 unk04[0xb4];
};

/* Owner of a contiguous array of large polymorphic elements. */
class Obj55a800 {
public:
    virtual ~Obj55a800();
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ Obj55a800Element *begin;
    /* 0x10 */ Obj55a800Element *end;
    /* 0x14 */ Obj55a800Element *capacityEnd;
};

#endif
