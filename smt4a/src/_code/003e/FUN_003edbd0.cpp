/* NON_MATCHING: register allocation: retail keeps state in r6, &units in r8 and the info pointer in r0 through the slot loop; ours uses r8/r6 and copies info to r3 (one more saved register). */
#include "common.h"

extern "C" {

#define BTL_UNIT_FLAG_ACTIVE 0x01
#define BTL_UNIT_FLAG_TRACKED 0x80

/* A tracking slot (0x18 bytes); free while owner and unitId are -1, kind 0 and value -1. */
typedef struct BtlTrackSlot {
    /* 0x00 */ s16 owner;
    /* 0x02 */ s16 unitId;
    /* 0x04 */ u16 kind;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ s32 value;
    /* 0x0C */ u8 unk0C[0xC];
} BtlTrackSlot;

/* A battle unit (0x1D0 bytes): only the fields this unit reads are named. */
typedef struct BtlTrackUnit {
    /* 0x000 */ u8 unk000[0x50];
    /* 0x050 */ u32 flags;
    /* 0x054 */ u8 unk054[0x16];
    /* 0x06A */ s16 id;
    /* 0x06C */ u8 unk06C[0x164];
} BtlTrackUnit;

typedef struct BtlTrackSource {
    /* 0x00 */ u16 unk00;
    /* 0x02 */ u16 kind;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ s32 value;
} BtlTrackSource;

/* What FUN_003f0e20 returns for a unit id. */
typedef struct BtlTrackInfo {
    /* 0x000 */ u8 unk000[0x6E];
    /* 0x06E */ s16 owner;
    /* 0x070 */ u8 unk070[0xF4];
    /* 0x164 */ BtlTrackSource source;
} BtlTrackInfo;

typedef struct BtlTrackState {
    /* 0x0000 */ u8 unk0000[0x1ED4];
    /* 0x1ED4 */ BtlTrackUnit *units;
    /* 0x1ED8 */ u8 unk1ED8[0x120];
    /* 0x1FF8 */ BtlTrackSlot *slots;
} BtlTrackState;

BtlTrackInfo *FUN_003f0e20(BtlTrackState *state, s32 unitId);

/* Gives every active tracked unit (4..53) a free tracking slot filled from its info. */
void FUN_003edbd0(BtlTrackState *state)
{
    s32 i;
    s32 j;

    if (state->slots == NULL) {
        return;
    }
    for (i = 4; i < 54; i++) {
        BtlTrackUnit *unit = &state->units[i];

        if ((unit->flags & BTL_UNIT_FLAG_ACTIVE) && (unit->flags & BTL_UNIT_FLAG_TRACKED)) {
            BtlTrackInfo *info = FUN_003f0e20(state, unit->id);
            BtlTrackSource *source = &info->source;

            for (j = 0; j < 50; j++) {
                BtlTrackSlot *slot = &state->slots[j];

                if (slot->owner == -1 && slot->unitId == -1 && slot->kind == 0 && slot->value == -1) {
                    slot->owner = info->owner;
                    slot->unitId = unit->id;
                    slot->kind = source->kind;
                    slot->value = source->value;
                    break;
                }
            }
        }
    }
}

} /* extern "C" */
