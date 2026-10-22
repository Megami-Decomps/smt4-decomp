#include "shard/Shard0037.h"

extern "C" {

extern Obj25CRef g_callbackOwnerSlots;
extern u32 FUN_003e4d68(u32 index);
extern s32 FUN_004801ac(u32 data, u32 value, s32 flag);

/* Stores `value` and marks the slots whose id FUN_004801ac does not accept for it. */
void obj25CRefreshFlags(u32 value)
{
    Obj25C *obj = g_callbackOwnerSlots.instance;
    s32 i;
    u32 id;

    if (obj != NULL) {
        obj->unk334 = value;
        for (i = 0; i < 0xC; i++) {
            id = obj->ids[i];
            obj->flags[i] = 0;
            if ((s32)id >= 0 && FUN_004801ac(FUN_003e4d68(id & 0xFFFF), obj->unk334, 1) != 1) {
                obj->flags[i] = 1;
            }
        }
    }
}

} /* extern "C" */
