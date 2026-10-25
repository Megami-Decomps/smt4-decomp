#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {

typedef struct MaskEntry {
    /* 0x0 */ s32 disabled;
    /* 0x4 */ u32 mask;
} MaskEntry;

typedef struct InputState {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ u32 flags;
} InputState;

extern MaskEntry DAT_00409ab0[31];
extern InputState DAT_004650a0;
extern u32 DAT_004e3c28;
extern u32 DAT_004e3c48;

/* Returns whether the entry's mask intersects the current input word (never for out-of-range or disabled entries). */
u8 FUN_002c15fc(u32 index)
{
    MaskEntry *entry;
    u32 *source;
    u32 bits;

    if (index < 31) {
        entry = &DAT_00409ab0[index];
        if (entry->disabled == 0) {
            if ((DAT_004650a0.flags & 1) != 0) {
                source = &DAT_004e3c48;
            } else {
                source = &DAT_004e3c28;
            }
            bits = source != NULL ? *source : 0;
            return (bits & entry->mask) != 0;
        }
    }
    return 0;
}

} /* extern "C" */
