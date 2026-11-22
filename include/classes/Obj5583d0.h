#ifndef CLASSES_OBJ5583D0_H
#define CLASSES_OBJ5583D0_H

#include "common.h"
#include "nn/fnd/ExpHeapBase.h"
#include <stddef.h>

/* An expanding heap (vtable at 0x5583d0; Apocalypse's twin of IV's Obj420eec, named after its vtable until its real
 * name is known): the nn heap base plus one word of its own. */
class Obj5583d0 : public nn::fnd::ExpHeapBase {
public:
    Obj5583d0() : unk54(0) {}
    virtual ~Obj5583d0();

    /* 0x54 */ u32 unk54;
};

typedef char Obj5583d0LayoutCheck[
    sizeof(Obj5583d0) == 0x58 && offsetof(Obj5583d0, unk54) == 0x54 ? 1 : -1];

#endif
