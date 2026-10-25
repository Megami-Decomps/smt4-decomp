/* NON_MATCHING: candidate member addressing and mask loads differ; retail retains an inlined subobject null guard; -O2 candidate. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

struct RandomTargetFields {
    u8 unk000[0x6e];
    u16 identifier;
    u8 unk070[0x2c2];
    u16 actionParameters[4]; // 0x332
    u8 unk33a[0x56];
    u16 targetMarker; // 0x390
};
struct RandomTargetState {
    u8 unk0000[0x2004];
    u16 selected;
    u8 unk2006[0x1000];
    s16 candidates[12]; // 0x3006
    s16 index; // 0x301e
};
struct RandomTargetMasks {
    u8 unk00[0x58];
    u64 active;
    u8 unk60[0x20];
    u64 excluded;
};
extern "C" {
extern RandomTargetMasks g_btlMain;
s32 lcgRandomRange(u32);
void FUN_003f2aec(BtlMainStateA *, u32);

void btlSelectSingleRandomTarget(BtlMainStateA *battle)
{
    RandomTargetState *state = (RandomTargetState *)battle;
    s32 count = 0;
    for (s32 slot = 0; slot < 109; ++slot) {
        BtlCombatantEntryA *unit = &battle->entries[slot];
        RandomTargetFields *fields = (RandomTargetFields *)unit;
        if ((unit->flags & g_btlMain.active) && !(unit->flags & g_btlMain.excluded) &&
            fields->actionParameters[1] && !hasAnyOf3DC2(unit->statusFlags)) {
            state->candidates[count++] = ((RandomTargetFields *)&battle->entries[slot])->identifier;
            ((RandomTargetFields *)&battle->entries[slot])->targetMarker = 0;
        }
    }
    if (count < 1) {
        state->index = -1;
        state->selected = 0xffff;
        return;
    }
    state->index = 0;
    s32 selectedIndex = lcgRandomRange((count - 1) & 0xffff);
    s16 selected = state->candidates[selectedIndex];
    for (s32 i = 0; i < 12; ++i)
        state->candidates[i] = -1;
    state->candidates[0] = selected;
    u64 active = g_btlMain.active;
    u64 excluded = g_btlMain.excluded;
    for (s32 slot = 0; slot < 109; ++slot) {
        BtlCombatantEntryA *unit = &battle->entries[slot];
        RandomTargetFields *fields = (RandomTargetFields *)unit;
        if ((unit->flags & active) && !(unit->flags & excluded) &&
            fields->actionParameters[1] && (s16)fields->identifier != selected) {
            fields->actionParameters[0] = 0;
            fields->actionParameters[1] = 0;
            fields->actionParameters[2] = 0;
            fields->actionParameters[3] = 0;
        }
    }
    FUN_003f2aec(battle, 0);
    state->selected = state->candidates[state->index];
}
}
