/* NON_MATCHING: constructor and vtable require their proposed C++ symbol names before the retail relocation can match. */
#include "common.h"

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

/* Initializes the object's empty state and default mode. */
Obj422094::Obj422094()
{
    state = 0;
    first = 0;
    second = 0;
    count = 0;
    index = -1;
    mode = 6;
}
