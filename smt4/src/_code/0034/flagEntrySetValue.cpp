/* NON_MATCHING: flag-byte snapshot recovers retail clear registers; initial index/value save moves are still reversed. */
#include "common.h"

extern "C" {

typedef struct FlagEntry003490f0 {
    /* 0x00 */ u8 flags;        /* bit 6: changed to a non-zero value */
    /* 0x01 */ u8 value;
    /* 0x02 */ u8 unk02[2];
} FlagEntry003490f0;

typedef struct FlagBlock003490f0 {
    /* 0x000 */ u8 unk000[0x200];
    /* 0x200 */ FlagEntry003490f0 entries[1];
} FlagBlock003490f0;

FlagBlock003490f0 *gameGetFlagBlock(void);

/* Stores a value in flag entry `index`, marking the entry changed when it became non-zero; values below 2 reset it. */
void flagEntrySetValue(s32 index, u32 value)
{
    FlagEntry003490f0 *entry = &gameGetFlagBlock()->entries[index];

    if (entry->value != value && value != 0) {
        entry->flags |= 0x40;
    }
    entry->value = value;
    if ((value & 0xff) < 2) {
        u8 flags = entry->flags;
        entry->value = 0;
        entry->flags = flags & ~0x40;
    }
}

} /* extern "C" */
