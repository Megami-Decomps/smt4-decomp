#include "shard/Shard0042.h"

extern "C" {

extern s32 FUN_0042349c(u8 *block);
extern s32 counterPairRemaining(u8 *block);
extern u32 FUN_0042343c(u8 *block);

u32 block158OwnerReady(Block158Owner *obj)
{
    u32 remaining;
    u32 limit;

    if (FUN_0042349c(obj->block158) == 0) {
        obj->unk0C = 7;
        return 0;
    }
    if (counterPairRemaining(obj->block158) != 0) {
        remaining = counterPairRemaining(obj->block158);
        limit = FUN_0042343c(obj->block158);
        if (remaining <= limit) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
