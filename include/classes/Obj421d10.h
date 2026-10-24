#ifndef CLASSES_OBJ421D10_H
#define CLASSES_OBJ421D10_H

#include "common.h"

/* Event-signalling base (vtable 0x421d10): a light event at +0x0C, signalled when constructed. */
class Obj421d10 {
public:
    Obj421d10();
    virtual void vfunc08();
    /* 0x04 */ u8 unk04[0x18];
};

typedef char Obj421d10SizeCheck[sizeof(Obj421d10) == 0x1C ? 1 : -1];

#endif
