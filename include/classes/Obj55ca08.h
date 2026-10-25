#ifndef CLASSES_OBJ55CA08_H
#define CLASSES_OBJ55CA08_H

#include "common.h"

/* The embedded selection interface has one virtual method, not a virtual destructor. */
class Obj55ca08 {
public:
    Obj55ca08() {}
    ~Obj55ca08();
    virtual void synchronize(const u8 *selection);

    /* 0x04 */ s32 firstRegion;
    /* 0x08 */ s32 secondRegion;
    /* 0x0C */ s32 regionCount;
    /* 0x10 */ u8 soundEnabled;
    /* 0x11 */ u8 selected;
    /* 0x12 */ u8 released;
    /* 0x13 */ u8 unk13;
    /* 0x14 */ s16 selectedIndex;
    /* 0x16 */ u8 unk16[2];
    /* 0x18 */ s16 regions[12];
    /* 0x30 */ s16 touchCount;
    /* 0x32 */ u8 unk32[2];
    /* 0x34 */ u32 unk34;
    /* 0x38 */ u8 unk38[4];
};

extern "C" {
void FUN_0022e500(u8 value);
}

#endif
