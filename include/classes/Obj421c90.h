#ifndef CLASSES_OBJ421C90_H
#define CLASSES_OBJ421C90_H

#include "common.h"

/* Abstract object with a link and a trailing state/flag pair. */
class Obj421c90 {
public:
    Obj421c90();
    virtual ~Obj421c90();
    virtual void unk08() = 0;
    virtual void unk0c() = 0;
    virtual void unk10() = 0;
    /* 0x004 */ u32 link;
    /* 0x008 */ u8 unk008[0x200];
    /* 0x208 */ u16 state;
    /* 0x20A */ u8 flag;
};

#endif
