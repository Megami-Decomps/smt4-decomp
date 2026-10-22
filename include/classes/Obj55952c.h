#ifndef CLASSES_OBJ55952C_H
#define CLASSES_OBJ55952C_H

#include "classes/Obj55a254.h"

class Obj55952c : public Obj55a254 {
public:
    virtual ~Obj55952c();
    /* 0x10 */ u32 kind;
    /* 0x14 */ u8 active;
    /* 0x15 */ u8 unk15[3];
    /* 0x18 */ u32 timeout;
};

#endif
