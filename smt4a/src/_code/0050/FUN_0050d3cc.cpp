#include "common.h"

struct Obj50d3cc {
    u8 unk00[0x30];
    u8 block[1];
};

/* Returns the address of the block at 0x30. */
extern "C" u8 *FUN_0050d3cc(Obj50d3cc *obj)
{
    return obj->block;
}
