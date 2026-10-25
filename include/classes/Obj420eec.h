#ifndef CLASSES_OBJ420EEC_H
#define CLASSES_OBJ420EEC_H

#include "common.h"
#include "nn/fnd/ExpHeapBase.h"
#include <stddef.h>

/* An expanding heap (vtable at 0x420eec; named after it until its real name is known): the nn heap base
 * plus one word of its own. */
class Obj420eec : public nn::fnd::ExpHeapBase {
public:
    Obj420eec() : unk54(0) {}
    virtual ~Obj420eec();

    /* 0x54 */ u32 unk54;
};

typedef char Obj420eecLayoutCheck[
    sizeof(Obj420eec) == 0x58 && offsetof(Obj420eec, unk54) == 0x54 ? 1 : -1];

#endif
