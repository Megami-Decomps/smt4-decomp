/* NON_MATCHING: same phase logic and code layout as retail; the build schedules the 64-bit mask test, the sl/fp constants and the marker-layout loads differently (retail also folds the slot-pair offset into an ldrd with #8 and keeps the aux flag offset in a pool constant). */
#include "battle/BtlMainAccess.h"
#include "common.h"
#include "battle/BtlUiObjCQuery.h"

// A battle unit record (the fields this step touches).
struct UnitRecordView {
    u8 unk00[0x50];
    u32 status;      // 0x50 bit 0x10: player side
    u8 unk54[4];
    u32 flags58;     // 0x58 bit 8: cleared when selected
    u8 unk5c[4];
    u16 flags60;     // 0x60 bit 0x800: set when selected
    u8 unk62[0x16e];
};

// A pair of values per party slot at 0x2008 of the battle state.
struct SlotPair {
    u32 first;
    u32 second;
};

struct BattleStateView {
    u8 unk0000[0x1ed4];
    UnitRecordView *units;   // 0x1ed4
    u8 unk1ed8[0x128];
    SlotPair pairs[9];       // 0x2000, entry 0 unused
    u8 unk2048[0x2558];
    u64 flags;               // 0x45a0
};

// The debug selection step's work block.
struct UnitSelectStep {
    u8 unk00[2];
    u16 result;      // 0x02 1: still running, 0: finished
    u8 unk04[4];
    u32 id;          // 0x08
    u8 unk0c[0x14];
    u8 phase;        // 0x20
    u8 unk21[3];
    s16 mode;        // 0x24 0: start, 1: select
    s16 slot;        // 0x26
    u8 unk28[0x20];
    s16 unit;        // 0x48
    s16 secondUnit;  // 0x4a
};

// The block of battle-state masks at g_btlActionReflect: states in which the selection is refused.
struct BlockedStateMasks {
    u8 unk00[0x60];
    u64 blocked;      // 0x60 (low word first)
};

// Screen positions of the selection marker.
struct UiMarkerLayout {
    u8 unk00[4];
    s32 left;         // 0x04
    s32 top;          // 0x08
    u8 unk0c[0xc];
    s32 offset;       // 0x18
};

struct BattleAuxView {
    u8 unk0000[0x339c];
    u32 flags;       // 0x339c
};

extern "C" {
extern BlockedStateMasks g_btlActionReflect;
extern BattleAuxView *g_btlAux;
extern UiMarkerLayout DAT_0057a634;
extern u32 g_btlUiBlock;

void FUN_003e7ef0(BattleStateView *state);
void FUN_003ed238(BattleStateView *state, u32 flags);
s32 FUN_003f1534(BattleStateView *state, UnitRecordView *unit, u32 first, u32 second);
void FUN_003f24e0(BattleStateView *state, s32 unit);
s32 FUN_004c9b38(UnitRecordView *unit);
void btlPopulateSelectedSlot(s32 mode, s32 slot, s32 unit, s32 secondUnit);
void FUN_004cae0c(void *context, void *state, s32 pending, u32 target);
void nameEntriesRegisterVerNames(void *work);
void FUN_004fd204(s32 x, u32 id, UnitRecordView *unit, s32 alpha, s32 y, s32 flag);
void FUN_004fe764(s32 x, u32 id, UnitRecordView *unit, u32 style, s32 flag);

// One step of the debug unit selection: phase 0 prepares the slot, phase 1 selects the unit and starts its marker, phase 2
// waits for the UI. `result` tells the caller whether to call again.
void FUN_0040c64c(u32 unused, UnitSelectStep *step)
{
    BattleStateView *state = reinterpret_cast<BattleStateView *>(btlGetMainState());
    if (step->phase == 0) {
        FUN_003e7ef0(state);
        btlPopulateSelectedSlot(step->mode, step->slot, step->unit, step->secondUnit);
        if (step->mode != 0) {
            if (step->mode == 1) {
                if ((state->flags & g_btlActionReflect.blocked) == 0) {
                    step->result = 0;
                    return;
                }
                if ((g_btlAux->flags & 0x400) != 0) {
                    nameEntriesRegisterVerNames(g_btlAux);
                }
                step->phase = 1;
            }
        } else {
            FUN_003ed238(state, 0x200);
            if ((state->flags & g_btlActionReflect.blocked) != 0) {
                step->result = 0;
                return;
            }
            step->phase = 2;
        }
    }
    if (step->phase == 1) {
        UnitRecordView *unit = &state->units[step->unit];
        if (FUN_004c9b38(unit) != 0) {
            unit->flags58 &= ~8u;
            unit->flags60 |= 0x800;
            if (FUN_003f1534(state, unit, state->pairs[step->slot + 1].first,
                            state->pairs[step->slot + 1].second) == 0) {
                step->result = 0;
                return;
            }
            step->phase = 3;
            s16 a = DAT_0057a634.left;
            s16 b = DAT_0057a634.offset;
            s16 c = DAT_0057a634.top;
            FUN_004cae0c(state, unit, 0, 0);
            FUN_004fd204(b + a, step->id, unit, 0xff, c, 0);
            u32 style = 6;
            if ((unit->status & 0x10) != 0) {
                style = 7;
            }
            FUN_004fe764(b, step->id, unit, style, 0xd);
        }
    }
    if (step->phase == 2) {
        if (FUN_004aa750(g_btlUiBlock) != 0) {
            step->phase = 3;
            FUN_003f24e0(state, step->unit);
            step->result = 0;
            return;
        }
    }
    if (step->phase != 3) {
        step->result = 1;
        return;
    }
    FUN_003f24e0(state, step->unit);
    step->result = 0;
}
}
