#ifndef CLASSES_OBJ4208C4_H
#define CLASSES_OBJ4208C4_H

#include "common.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"


/* Owns the three model-animation lists populated from a model owner. */
class Obj4208c4 {
public:
    Obj4208c4()
        : kind4Animations(NULL), kind5Animations(NULL), kind6Animations(NULL), count(0)
    {
    }
    virtual ~Obj4208c4();
    static void *operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }
    /* 0x04 */ void **kind4Animations;
    /* 0x08 */ void **kind5Animations;
    /* 0x0C */ void **kind6Animations;
    /* 0x10 */ u32 count;
};

#endif
