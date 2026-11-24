/* NON_MATCHING: action-slot address scheduling and history-copy scratch register allocation differ. */
#include "battle/btlAction.h"
#include "battle/btlUnit.h"
#include "battle/BtlActionSlots.h"

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

static inline UnitCommandState *unitCommandState(BtlUnitA *source)
{
    return reinterpret_cast<UnitCommandState *>(source->data);
}

extern "C" {
void FUN_003e7ef0(BattleCommandState *battle);

u32 battleActionSnapshotCommand(BattleCommandOwner *owner, BtlUnitA *source)
{
    FUN_003e7ef0(owner->battle);
    enum { BTL_COMMAND_SNAPSHOT = 0x1F };
    btlActionGetSlot(owner->battle->actionIndex)->unit.command = BTL_COMMAND_SNAPSHOT;
    if (source->data == NULL) {
        owner->battle->pending.unit = 0;
        owner->battle->pending.command = 0;
        owner->battle->pending.argument = 0;
        owner->battle->pending.reserved = 0;
    } else {
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
    }
    return 1;
}
}
