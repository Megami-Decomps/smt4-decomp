#ifndef CLASSES_OBJ4221D4_H
#define CLASSES_OBJ4221D4_H

#include "common.h"

class Obj4221d4 {
public:
    virtual ~Obj4221d4();
    /* 0x04 */ u8 unk04[0x1c];
    /* 0x20 */ void *bufferA;
    /* 0x24 */ u8 unk24[0x24];
    /* 0x48 */ void *bufferB;
    /* 0x4c */ void *bufferC;
};

#endif
