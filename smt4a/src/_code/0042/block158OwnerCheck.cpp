#include "shard/Shard0042.h"

extern "C" {

extern s32 FUN_0042337c(u8 *block);

u8 block158OwnerCheck(Block158Owner *obj)
{
    s32 result = FUN_0042337c(obj->block158);

    if (result == 0) {
        obj->unk0C = 7;
    }
    return result != 0;
}

} /* extern "C" */
