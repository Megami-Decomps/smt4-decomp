#ifndef CLASSES_OBJ55BC7C_H
#define CLASSES_OBJ55BC7C_H

#include "common.h"

class Obj55bc7c {
public:
    virtual ~Obj55bc7c();
    virtual const void *getTypeDescriptor() const;
    /* 0x04 */ u8 unk04[0x10];
    /* 0x14 */ u32 *begin;
    /* 0x18 */ u32 *end;
    /* 0x1c */ u8 unk1c[0x20];
    /* 0x3c */ u32 *materials;
};

#endif
