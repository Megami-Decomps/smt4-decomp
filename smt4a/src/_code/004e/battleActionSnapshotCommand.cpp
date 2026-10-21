/* NON_MATCHING: action-slot and history-index registers/scheduling differ; the no-unit path duplicates the return instead of branching to the shared epilogue. Ospace candidate. */
#include "battle/btlAction.h"
#include "battle/btlUnit.h"

struct UnitCommandRecord {
    u16 command, argument0, argument1, argument2;
};

struct UnitCommandState {
    /* 0x000 */ u8 unk000[0x1be];
    /* 0x1be */ UnitCommandRecord current;
    /* 0x1c6 */ UnitCommandRecord previous;
    /* 0x1ce */ u8 unk1ce[8];
    /* 0x1d6 */ UnitCommandRecord history[10];
    /* 0x226 */ u8 unk226[2];
    /* 0x228 */ s32 next;
};

struct BattleCommandSource {
    /* 0x00 */ BtlUnitA unit;
    /* 0x2c */ u16 id;
};

struct SavedBattleCommand {
    u16 unit, command, argument, reserved;
};

struct BattleCommandState {
    /* 0x0000 */ u8 unk0000[0xa4];
    /* 0x00a4 */ s32 actionIndex;
    /* 0x00a8 */ u8 unk00a8[0x2f78];
    /* 0x3020 */ SavedBattleCommand pending;
};

struct BattleCommandOwner {
    BattleCommandState *battle;
};

struct BattleActionSlot {
    u8 unk00[9];
    u8 phase;
    u8 unk0a[0x124a];
};

static inline UnitCommandState *unitCommandState(BattleCommandSource *source)
{
    return reinterpret_cast<UnitCommandState *>(source->unit.data);
}

extern "C" {
extern BtlActionGlobals g_btlAction;
void FUN_003e7ef0(BattleCommandState *battle);

u32 battleActionSnapshotCommand(BattleCommandOwner *owner, BattleCommandSource *source)
{
    FUN_003e7ef0(owner->battle);
    // The action block uses 0x495-word per-actor slots.
    BattleActionSlot *action = reinterpret_cast<BattleActionSlot *>(
        static_cast<u32 *>(g_btlAction.data) + owner->battle->actionIndex * 0x495);
    action->phase = 0x1f;
    if (source->unit.data == NULL) {
        owner->battle->pending.unit = 0;
        owner->battle->pending.command = 0;
        owner->battle->pending.argument = 0;
        owner->battle->pending.reserved = 0;
        return 1;
    }
    owner->battle->pending.unit = source->id;
    owner->battle->pending.command = unitCommandState(source)->current.command;
    owner->battle->pending.argument = unitCommandState(source)->current.argument0;
    owner->battle->pending.reserved = 0;
    unitCommandState(source)->previous.command = unitCommandState(source)->current.command;
    unitCommandState(source)->previous.argument0 = unitCommandState(source)->current.argument0;
    unitCommandState(source)->previous.argument1 = unitCommandState(source)->current.argument1;
    unitCommandState(source)->previous.argument2 = unitCommandState(source)->current.argument2;
    s32 index = unitCommandState(source)->next;
    if (index < 10) {
        unitCommandState(source)->history[index].command = unitCommandState(source)->current.command;
        unitCommandState(source)->history[index].argument0 = unitCommandState(source)->current.argument0;
        unitCommandState(source)->history[index].argument1 = unitCommandState(source)->current.argument1;
        unitCommandState(source)->history[index].argument2 = unitCommandState(source)->current.argument2;
    }
    if (++unitCommandState(source)->next > 9) {
        unitCommandState(source)->next = 0;
    }
    return 1;
}
}
