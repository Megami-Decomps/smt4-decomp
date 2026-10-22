#ifndef CLASSES_OBJ55AFF4_H
#define CLASSES_OBJ55AFF4_H

#include "common.h"

// Eight-byte address value with nontrivial assignment and destruction.
struct Obj55aff4 {
    Obj55aff4 &operator=(const Obj55aff4 &source);
    ~Obj55aff4();

    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
};

typedef char Obj55aff4SizeCheck[sizeof(Obj55aff4) == 8 ? 1 : -1];

#endif
