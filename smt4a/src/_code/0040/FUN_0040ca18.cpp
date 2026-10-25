/* NON_MATCHING: readable rewrite from retail disassembly compiles (211 vs 208 rows); retail keeps a constant-false flag and the mask table base in registers/stack slots that the source-level structure does not reproduce */
#include "common.h"
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

// Battle masks kept in the action-reflect block (64-bit side masks).
struct BtlActionMasks {
    u8 unk00[8];
    u64 playerMask;             // 0x08
    u8 unk10[0x38 - 0x10];
    u64 skipMask;               // 0x38
    u8 unk40[0x68 - 0x40];
    u64 blockMaskA;             // 0x68
    u64 blockMaskB;             // 0x70 (unused here)
    u64 blockMaskC;             // 0x78
};

// Battle unit: its side record at +0x20.
struct BtlUnit {
    u8 unk00[0x20];
    BtlCombatantEntryA* side;              // 0x20
};

// Target info record returned by the action lookup (several message/id slots).
struct ActionTarget {
    u8 unk00[2];
    u16 idDefault;              // 0x02
    u16 argDefault;             // 0x04
    u16 idThree;                // 0x06
    u16 argThree;               // 0x08
    u16 idTwo;                  // 0x0a
    u32 flags;                  // 0x0c
};

// Per-step state of the action cursor.
struct ActionStep {
    u8 unk00[2];
    u16 done;                   // 0x02
    u8 unk04[0x14];
    BtlCombatantEntryA* actor;             // 0x18
    u8 unk1c[8];
    s16 phase;                  // 0x24
    u8 unk26[2];
    void* request;              // 0x28
};

extern "C" {

extern BtlActionMasks g_btlActionReflect;
extern s32 g_btlScriptUnit;

s32 btlAiBestTargetScore(s32 unit);
BtlUnit* btlUnitGet(s32 unit);
ActionTarget* FUN_002c7bf4(void* request);
s32 FUN_004ea5e8(s32 unit);
void FUN_004e699c(s32 unit, s32 side, s32 score);
s32 FUN_004c86ec(void* request);
s32 FUN_004c600c(s32 side);
void FUN_004c9160(s32 id, void* target, s32 arg, s32 flag);
void FUN_004c8d8c(s32 id, void* target, s32 arg);
void FUN_004c8e30(s32 id, s32 arg, s32 flag);
s32 infoWinIsActive(void);

// One step of the battle action sequencer for the scripted unit: evaluates the action's
// target record and sends the matching event, then advances the step or marks it done.
void FUN_0040ca18(u32 unused, ActionStep* step)
{
    BtlMainStateA* main = btlGetMainState();
    u64 blocked = ((g_btlActionReflect.blockMaskC | g_btlActionReflect.blockMaskA) & main->stateFlags64.bits);
    if (blocked != 0) {
        step->done = 0;
        return;
    }
    if (step->phase != 0) {
        if (step->phase == 1 && infoWinIsActive() == 0) {
            step->done = 0;
            return;
        }
        step->done = 1;
        return;
    }

    u32 id = 0;
    s32 arg = 0;
    bool pending = false;
    bool direct = true;
    void* target = NULL;
    s32 score = btlAiBestTargetScore(g_btlScriptUnit);
    BtlUnit* unit = btlUnitGet(g_btlScriptUnit);
    if (score != 5) {
        ActionTarget* record = FUN_002c7bf4(step->request);
        if (record == NULL) return;
        u32 flags = record->flags;
        if ((flags & 0x20) != 0 && (unit->side->statusFlags & 0x10) == 0) return;
        if (score == 1) return;
        if (score == 2) {
            if (record->idTwo != 0) {
                id = record->idTwo;
            } else if (record->idDefault != 0) {
                arg = record->argDefault;
                id = record->idDefault;
            }
        } else if (score == 3) {
            if (record->idThree != 0) {
                arg = record->argThree;
                id = record->idThree;
            } else if (record->idDefault != 0) {
                arg = record->argDefault;
                id = record->idDefault;
            }
        } else if (record->idDefault != 0) {
            arg = record->argDefault;
            id = record->idDefault;
        }
        if ((flags & 1) != 0) target = step->actor;
        if ((flags & 0x10) != 0) target = step->actor;
        if ((flags & 8) != 0) {
            s32 g;
            for (g = 0; g < 4; g++) {
                BtlCombatantEntryA* other = &main->entries[g];
                if (step->actor->indexView.selectionIndex != other->indexView.selectionIndex) {
                    if ((other->flags & g_btlActionReflect.playerMask) == 0) break;
                    if ((other->flags & g_btlActionReflect.skipMask) != 0) break;
                    if ((other->statusFlags & 0x10) == 0) break;
                }
            }
            if (g == 4) {
                id = 0x21;
                direct = false;
            }
        }
        bool toSide = false;
        if ((flags & 0x40) != 0) {
            s32 ready = FUN_004c86ec(step->request);
            s32 index = FUN_004c600c(step->actor->indexView.selectionIndex);
            if (ready != 0 && index >= 0) {
                id = 0x3e;
                target = &main->entries[index];
                toSide = true;
            }
        }
        if (toSide) FUN_004c9160(id, target, arg, 1);
        else if (direct) FUN_004c8d8c(id, target, arg);
        else FUN_004c8e30(id, arg, 1);
    } else {
        id = 0x25;
        if (FUN_004ea5e8(g_btlScriptUnit) <= 1) pending = true;
        FUN_004e699c(g_btlScriptUnit, unit->side->indexView.selectionIndex, 5);
        FUN_004c8e30(id, arg, 1);
    }
    if (pending) return;
    step->phase = step->phase + 1;
    step->done = 1;
}

} /* extern "C" */
