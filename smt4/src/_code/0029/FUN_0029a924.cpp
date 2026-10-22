/* NON_MATCHING: retail predicates the capacity load and the zeroed total on the owner check (ldrbne/movne); this build branches first. */
#include "common.h"

extern "C" {

typedef struct AppSlotOwner {
    /* 0x00 */ u8 unk00[0x22];
    /* 0x22 */ u8 capacity;
} AppSlotOwner;

typedef struct AppCostRecord {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ s32 cost;
} AppCostRecord;

AppSlotOwner *FUN_002ae164(u32 id);
AppCostRecord *FUN_002ae584(u32 id);
s32 flagBitIsSet(u32 bit);

/* Returns the capacity of `id` left after the costs of the installed apps 12-15 (at least 1), or 0
 * when `id` has no record. */
s32 FUN_0029a924(u32 id)
{
    AppSlotOwner *owner = FUN_002ae164(id);
    if (owner != NULL) {
        s32 capacity = owner->capacity;
        s32 used = 0;
        if (flagBitIsSet(12)) {
            used += FUN_002ae584(12)->cost;
        }
        if (flagBitIsSet(13)) {
            used += FUN_002ae584(13)->cost;
        }
        if (flagBitIsSet(14)) {
            used += FUN_002ae584(14)->cost;
        }
        if (flagBitIsSet(15)) {
            used += FUN_002ae584(15)->cost;
        }
        s32 remaining = capacity - used;
        if (remaining <= 0) {
            remaining = 1;
        }
        return remaining;
    }
    return 0;
}

} /* extern "C" */
