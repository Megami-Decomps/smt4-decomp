/* NON_MATCHING: only the frame differs: retail reserves the 8-byte time local by pushing r2/r3 with the saved registers (push {r2-r6,lr}); the build uses sub sp,#8 */
#include "common.h"

extern "C" {


typedef struct OnlineTime002eefc4 {
    u32 low;
    u32 high;
} OnlineTime002eefc4;

typedef struct OnlineEntrySet002eefc4 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 owner;
    /* 0x08 */ u8 unk08[0x94];
    /* 0x9c */ u8 entries[0x3c];   /* indexed through arrayElementAddress_002eee88 */
    /* 0xd8 */ OnlineTime002eefc4 timestamp;
} OnlineEntrySet002eefc4;

typedef struct OnlineOwner002eefc4 {
    /* 0x00 */ u8 unk00[0x70];
    /* 0x70 */ u8 hasLocalTime;
} OnlineOwner002eefc4;

s32 FUN_0010ae04(s32 value);
void onlineTimeGetNow(OnlineTime002eefc4 *now);
s32 *arrayElementAddress_002eee88(u8 *array, s32 index);
void FUN_002ef8f8(OnlineEntrySet002eefc4 *set, s32 id);
OnlineOwner002eefc4 *FUN_002ef01c(u32 owner);

/* Handles the entry at index: stamps the set with the current time unless the owner keeps its own, then applies it. */
void onlineEntryApply(OnlineEntrySet002eefc4 *set, s32 index)
{
    OnlineTime002eefc4 time;
    s32 id;

    arrayElementAddress_002eee88(set->entries, index);
    id = FUN_0010ae04(*arrayElementAddress_002eee88(set->entries, index));

    if (id != 0) {
        if (FUN_002ef01c(set->owner)->hasLocalTime == 0) {
            OnlineTime002eefc4 *stamp = &set->timestamp;

            onlineTimeGetNow(&time);
            *stamp = time;
        }
        FUN_002ef8f8(set, id);
    }
}

} /* extern "C" */
