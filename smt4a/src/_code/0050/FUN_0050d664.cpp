#include "common.h"

struct Interface0050d664;

struct Vtable0050d664 {
    /* 0x00 */ void *unk00[5];
    /* 0x14 */ s32 (*method)(Interface0050d664 *object);
};

struct Interface0050d664 {
    /* 0x00 */ const Vtable0050d664 *vtbl;
};

extern "C" {

/* Adjusts this by -0x50 to the primary base and calls its virtual method at 0x14. */
s32 FUN_0050d664(u8 *object)
{
    Interface0050d664 *primary = (Interface0050d664 *)(object - 0x50);
    return primary->vtbl->method(primary);
}

} /* extern "C" */
