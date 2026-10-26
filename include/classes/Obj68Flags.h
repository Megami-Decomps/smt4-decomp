#ifndef CLASSES_OBJ68_FLAGS_H
#define CLASSES_OBJ68_FLAGS_H

#include "common.h"

/* Register block whose halfword at 0x1E holds small packed mode fields. */
struct Obj68Block {
    u8 unk00[0x1E];
    u16 modes;
};

struct Obj68 {
    u8 unk00[0x68];
    Obj68Block *block;
};

#endif
