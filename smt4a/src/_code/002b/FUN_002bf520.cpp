#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ u8 member40[1];
} Object;

typedef struct Global57f110 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Object *object;
} Global57f110;
extern Global57f110 g_campCec;

/* Returns the address of the member at 0x40 of the object at 0x57F110 + 4. */
u8 *FUN_002bf520(void)
{
    return g_campCec.object->member40;
}

} /* extern "C" */
