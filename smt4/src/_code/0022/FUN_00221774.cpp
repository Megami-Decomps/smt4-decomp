/* NON_MATCHING: retail keeps the second entry's address in a register (base + 0x70); armcc folds the offset into the accesses. */
#include "common.h"
#include "shard/W6_W6Match2_EffectEditor.h"

/* One of the two 0x70-byte entries starting at DAT_0044fd88. */
struct Entry00221774 {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ u32 value;
    /* 0x10 */ u32 flags;
    /* 0x14 */ u8 unk14[0x5c];
};

extern "C" {

extern Entry00221774 DAT_0044fd88[2];

/* Clears the effect editor's three words at 0x60 and resets both entries: value zero, flag 0x10 set. */
void FUN_00221774(void)
{
    Entry00221774 *first = &DAT_0044fd88[0];
    Entry00221774 *second = &DAT_0044fd88[1];

    g_effectEditor.unk60 = 0;
    g_effectEditor.unk64 = 0;
    g_effectEditor.unk68 = 0;
    first->flags |= 0x10;
    second->flags |= 0x10;
    first->value = 0;
    second->value = 0;
}

} /* extern "C" */
