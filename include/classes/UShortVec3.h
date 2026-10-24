#ifndef CLASSES_USHORTVEC3_H
#define CLASSES_USHORTVEC3_H

#include "common.h"

/* Three 16-bit components, zeroed by an out-of-line constructor. */
class UShortVec3 {
public:
    UShortVec3();

    /* 0x00 */ u16 a;
    /* 0x02 */ u16 b;
    /* 0x04 */ u16 c;
};

#endif
