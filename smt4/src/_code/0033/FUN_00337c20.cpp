/* NON_MATCHING: same stores; retail tests the entry flag bits one at a time (tst #1, tst #0x40, tst #0x10/#0x20) with 0xcc kept in r8, where armcc here combines the tests and allocates differently. */
#include "common.h"

namespace {
struct BtlEntryStatus {
    /* 0x000 */ u8 unk000[0x14c];
    /* 0x14C */ s32 unk14c;
    /* 0x150 */ s32 unk150;
    /* 0x154 */ u8 unk154[8];
    /* 0x15C */ s32 modifiers[10];
    /* 0x184 */ s32 unk184;
};

struct BtlEntryView {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0xc8];
    /* 0x0CC */ BtlEntryStatus status;
    /* 0x254 */ u8 unk254[0x34];
};

struct BtlUnitView {
    /* 0x000 */ u8 unk000[0x60];
    /* 0x060 */ s16 entryIndex;
    /* 0x062 */ u8 unk062[0xb2];
};

struct BtlMainStateView {
    /* 0x0000 */ u8 unk0000[0x1e98];
    /* 0x1E98 */ BtlUnitView *units;
    /* 0x1E9C */ u8 unk1e9c[0x124];
    /* 0x1FC0 */ BtlEntryView *entries;
};
}

extern "C" {

/* Clear the status modifiers of every active unit's entry (mode 0: neither 0x10 nor 0x20 set, mode 1: 0x10 set, other modes: all). */
void FUN_00337c20(BtlMainStateView *state, s32 mode)
{
    for (s32 i = 0; i < 109; ++i) {
        s16 index = state->units[i].entryIndex;
        if (index < 0) {
            continue;
        }
        BtlEntryView *entry = &state->entries[index];
        if (!(entry->flags & 1) || (entry->flags & 0x40)) {
            continue;
        }
        BtlEntryStatus *status = &entry->status;
        if (status == NULL) {
            continue;
        }
        if (mode == 0) {
            if ((entry->flags & 0x10) || (entry->flags & 0x20)) {
                continue;
            }
        } else if (mode == 1) {
            if (!(entry->flags & 0x10)) {
                continue;
            }
        }
        status->unk184 = 0;
        status->unk14c = 0;
        status->unk150 = 0;
        for (s32 j = 0; j < 10; ++j) {
            status->modifiers[j] = 0;
        }
    }
}

} /* extern "C" */
