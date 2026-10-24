/* NON_MATCHING: retail evaluates the save-copy pointers straight into the call registers and rebuilds the per-unit masks with ldm pairs through shared bases; ours reloads pointers through scratch registers and walks the units separately (250 rows against 210). Copy layout, constants and logic follow retail. */
#include "common.h"

#define BTL_SLOT_COUNT 4

/* One unit of the battle state and its extra record. */
struct BtlUnitData {
    u8 unit[0x408];
};

struct BtlUnitExtra {
    u8 extra[0x1D0];
};

/* A unit and its extra record kept together in the snapshot. */
struct BtlSnapshotSlot {
    BtlUnitData unit;
    BtlUnitExtra extra;
};

/* The battle snapshot: the state to restore, then the state saved from the live units. */
struct BtlSnapshot {
    BtlSnapshotSlot restore[BTL_SLOT_COUNT];
    BtlSnapshotSlot saved[BTL_SLOT_COUNT];
};

/* A unit's flag words and the field the restore clears (observed fields). */
struct BtlUnitFlags {
    /* 0x000 */ u64 flags;
    /* 0x008 */ u8 unk008[0x15C];
    /* 0x164 */ u8 skillBase[0x1CE];
    /* 0x332 */ u16 cleared[4];
};

/* Where the save data is copied to and from around the battle (observed fields). */
struct BtlSaveCopies {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ void *slotTableOut;
    /* 0x10 */ void *flagStorageOut;
    /* 0x14 */ u8 unk14[4];
    /* 0x18 */ void *slotTableIn;
    /* 0x1C */ void *flagStorageIn;
    /* 0x20 */ u8 unk20[0x38];
    /* 0x58 */ u64 activeKind;
    /* 0x60 */ u8 unk60[0x20];
    /* 0x80 */ u64 inactiveKind;
    /* 0x88 */ u8 unk88[0x140];
    /* 0x1C8 */ u64 clearKind;
    /* 0x1D0 */ u8 unk1D0[8];
    /* 0x1D8 */ u64 resetKind;
};

/* The battle state (observed fields). */
struct BtlRestoreState {
    /* 0x0000 */ u8 unk0000[0x1ED4];
    /* 0x1ED4 */ BtlUnitExtra *extras;
    /* 0x1ED8 */ u8 unk1ED8[0x120];
    /* 0x1FF8 */ u8 unk1FF8[4];
    /* 0x1FFC */ BtlUnitData *units;
    /* 0x2000 */ s16 activeCount;
    /* 0x2002 */ u8 unk2002[0x259E];
    /* 0x45A0 */ u64 flags;
    /* 0x45A8 */ u8 unk45A8[0x728];
    /* 0x4CD0 */ u8 restored;
    /* 0x4CD1 */ u8 unk4CD1[0x177];
    /* 0x4E48 */ BtlSnapshot *snapshot;
};

extern "C" {

extern BtlSaveCopies g_btlSaveCopies;

void *gameGetSlotTable(void);
void *flagValueGetStorage(void);
void rt_memcpy(void *destination, const void *source, u32 bytes);
void rt_memcpy_w(void *destination, const void *source, u32 bytes);

/* Restores the battle state from its snapshot: the save data copies go back and forth, the units and
 * extras are copied between the live arrays and the snapshot, and the per-unit counts are rebuilt. */
void FUN_003eee9c(BtlRestoreState *state)
{
    s32 i;

    if (g_btlSaveCopies.slotTableOut != NULL) {
        rt_memcpy_w(g_btlSaveCopies.slotTableOut, gameGetSlotTable(), 0x2D30);
    }
    if (g_btlSaveCopies.flagStorageOut != NULL) {
        rt_memcpy(g_btlSaveCopies.flagStorageOut, flagValueGetStorage(), 0x10B8);
    }
    if (state->snapshot != NULL) {
        rt_memcpy_w(&state->snapshot->saved[0].unit, &state->units[0], sizeof(BtlUnitData));
        rt_memcpy_w(&state->snapshot->saved[0].extra, &state->extras[0], sizeof(BtlUnitExtra));
        rt_memcpy_w(&state->snapshot->saved[1].unit, &state->units[1], sizeof(BtlUnitData));
        rt_memcpy_w(&state->snapshot->saved[1].extra, &state->extras[1], sizeof(BtlUnitExtra));
        rt_memcpy_w(&state->snapshot->saved[2].unit, &state->units[2], sizeof(BtlUnitData));
        rt_memcpy_w(&state->snapshot->saved[2].extra, &state->extras[2], sizeof(BtlUnitExtra));
        rt_memcpy_w(&state->snapshot->saved[3].unit, &state->units[3], sizeof(BtlUnitData));
        rt_memcpy_w(&state->snapshot->saved[3].extra, &state->extras[3], sizeof(BtlUnitExtra));
    }
    if (g_btlSaveCopies.slotTableIn != NULL) {
        rt_memcpy_w(gameGetSlotTable(), g_btlSaveCopies.slotTableIn, 0x2D30);
    }
    if (g_btlSaveCopies.flagStorageIn != NULL) {
        rt_memcpy(flagValueGetStorage(), g_btlSaveCopies.flagStorageIn, 0x10B8);
    }
    if (state->snapshot != NULL) {
        for (i = 0; i < BTL_SLOT_COUNT; i++) {
            BtlUnitFlags *unit;

            rt_memcpy_w(&state->units[i], &state->snapshot->restore[i].unit, sizeof(BtlUnitData));
            rt_memcpy_w(&state->extras[i], &state->snapshot->restore[i].extra, sizeof(BtlUnitExtra));
            unit = (BtlUnitFlags *)&state->units[i];
            if ((state->flags & g_btlSaveCopies.resetKind) != 0) {
                unit->cleared[0] = 0;
                unit->cleared[1] = 0;
                unit->cleared[2] = 0;
                unit->cleared[3] = 0;
            }
        }
        if ((((BtlUnitFlags *)((u8 *)state->units + 0xD9B0))->flags & g_btlSaveCopies.activeKind) != 0 &&
            (((BtlUnitFlags *)((u8 *)state->units + 0xD9B0))->flags & g_btlSaveCopies.inactiveKind) == 0) {
            state->restored = 1;
        }
    }
    state->activeCount = 0;
    for (i = 0; i < BTL_SLOT_COUNT; i++) {
        u64 flags = ((BtlUnitFlags *)&state->units[i])->flags;

        if ((flags & g_btlSaveCopies.activeKind) != 0 && (flags & g_btlSaveCopies.inactiveKind) == 0) {
            state->activeCount++;
        }
    }
    state->flags &= ~g_btlSaveCopies.clearKind;
}

} /* extern "C" */
