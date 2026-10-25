#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

#define BTL_ENTRY_COUNT 0x6d

typedef struct BtlEntry002fed58 {
    /* 0x000 */ u32 flags;           /* 1 = used, 0x10 = active, 0x40 = excluded */
    /* 0x004 */ u8 unk004[0x1ee];
    /* 0x1f2 */ u16 slots[1];        /* slot kind in bits 10 and up */
    /* 0x1f4 */ u8 unk1f4[0x94];
} BtlEntry002fed58;

typedef struct BtlMainState002fed58 {
    /* 0x0000 */ u8 unk0000[0x1fc0];
    /* 0x1fc0 */ BtlEntry002fed58 *entries;
} BtlMainState002fed58;

u32 scrGetArg(u32 index);
void scrSetResult(s32 value);

/* Script command: true when some active, used, non-excluded battle entry has slot kind 3 in the slot given by arg0. */
s32 scrCommBattleAnyEntrySlotKind3(void)
{
    u32 slot = scrGetArg(0);
    s32 i;

    for (i = 0; i < BTL_ENTRY_COUNT; i++) {
        BtlEntry002fed58 *entry = &reinterpret_cast<BtlMainState002fed58 *>(btlGetMainState())->entries[i];

        if ((entry->flags & 0x10) != 0 && (entry->flags & 1) != 0 && (entry->flags & 0x40) == 0 &&
            entry->slots[slot] >> 10 == 3) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
