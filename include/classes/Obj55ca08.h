#ifndef CLASSES_OBJ55CA08_H
#define CLASSES_OBJ55CA08_H

#include "common.h"

/* The embedded selection interface has one virtual method, not a virtual destructor. */
class Obj55ca08 {
public:
    Obj55ca08() {}
    ~Obj55ca08();
    virtual void synchronize();

    /* 0x04 */ u8 unk04[0x2c];
    /* 0x30 */ s16 touchCount;
    /* 0x32 */ u8 unk32[2];
    /* 0x34 */ u32 unk34;
    /* 0x38 */ u8 unk38[4];
};

#endif
