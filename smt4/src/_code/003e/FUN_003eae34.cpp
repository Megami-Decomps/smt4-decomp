#include "common.h"

struct Obj50d5b8Vtbl {
    u8 unk00[0x14];
    void (*slot14)(void *self);
};

struct Obj50d5b8Primary {
    Obj50d5b8Vtbl *vtbl;
};

/* Virtual thunk: steps back 0x44 bytes to the primary base and calls its slot 5. */
extern "C" void FUN_003eae34(u8 *self)
{
    Obj50d5b8Primary *primary = (Obj50d5b8Primary *)(self - 0x44);
    primary->vtbl->slot14(primary);
}
