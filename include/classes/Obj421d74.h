#ifndef CLASSES_OBJ421D74_H
#define CLASSES_OBJ421D74_H

#include "common.h"

/* Sound-parameter holder with three vtables (primary at 0x421d74, secondaries at +0x44 and +0x50); 0xA0 bytes. */
class Obj421d74 {
public:
    Obj421d74();
    virtual void vfunc08();
    /* 0x04 */ u8 unk04[0x9C];
};

typedef char Obj421d74SizeCheck[sizeof(Obj421d74) == 0xA0 ? 1 : -1];

#endif
