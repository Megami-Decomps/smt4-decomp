/* Adds `amount` to the saturating halfword counter (+0x1a) of the object gameDataBlocksGetStats returns, capped at 0xffff. */
#include "common.h"
#include "shard/FUN_0040a378.h"

extern "C" {

struct Obj0040a378 {
    /* 0x00 */ u8 unk00[0x1a];
    /* 0x1a */ u16 counter;
};

Obj0040a378 *gameDataBlocksGetStats(void);

void FUN_0040a378(s32 amount)
{
    Obj0040a378 *obj = gameDataBlocksGetStats();
    s32 value = obj->counter + amount;

    obj->counter = value >= 0x10000 ? 0xffff : value;
}

}
