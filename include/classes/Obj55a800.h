#ifndef CLASSES_OBJ55A800_H
#define CLASSES_OBJ55A800_H

#include "common.h"
#include "stl/Obj55aff4Values.h"
#include "stl/AsdAllocator.h"
#include <vector>

/* Array element with a virtual cleanup operation and 0xb8-byte stride. */
class Obj55a800Element {
public:
    virtual ~Obj55a800Element();
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ u64 id;
    /* 0x10 */ u8 unk10[0x90];
    /* 0xA0 */ Obj55aff4Values texts;
    /* 0xAC */ u8 unkAC[0xc];
};

typedef char Obj55a800ElementSizeCheck[sizeof(Obj55a800Element) == 0xb8 ? 1 : -1];

typedef std::vector<Obj55a800Element, AsdAllocator<Obj55a800Element> > Obj55a800Elements;

/* Owner of a contiguous array of large polymorphic elements. */
class Obj55a800 {
public:
    virtual ~Obj55a800();
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ Obj55a800Elements elements;
};

#endif
