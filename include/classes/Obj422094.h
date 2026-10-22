#ifndef CLASSES_OBJ422094_H
#define CLASSES_OBJ422094_H

#include "common.h"

/* State object initialized with no entries and mode six. */
class Obj422094 {
public:
    Obj422094();
    virtual void reset();
    /* 0x04 */ u32 state;
    /* 0x08 */ u32 first;
    /* 0x0C */ u32 second;
    /* 0x10 */ u32 mode;
    /* 0x14 */ u16 count;
    /* 0x16 */ s16 index;
};

#endif
