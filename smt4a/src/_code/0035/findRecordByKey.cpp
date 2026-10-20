#include "shard/Shard0035.h"

extern "C" {

extern s32 DAT_005702f8;
extern Rec148 DAT_005c6000[];
extern s32 FUN_0030ea58(u8 *key, u32 id);

/* Index of the first record whose key matches `id`, or 0xFF. */
u32 findRecordByKey(u32 id)
{
    u32 i;

    for (i = 0; (s32)i < DAT_005702f8; i++) {
        if (FUN_0030ea58(DAT_005c6000[i & 0xFF].key, id) == 0) {
            return i & 0xFF;
        }
    }
    return 0xFF;
}

} /* extern "C" */
