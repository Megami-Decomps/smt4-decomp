/* NON_MATCHING: unit-slot address folding ([r0,#9] vs a register offset) and 64-bit mask load forms differ */
#include "common.h"
#include "gamedata/Table04Record.h"

/* A battle unit's script slot (0x1254 bytes); only the state byte is touched here. */
struct BtlUnitSlot {
    /* 0x00 */ u8 unk00[9];
    /* 0x09 */ u8 phase;
    /* 0x0a */ u8 unk0a[0x124a];
};

/* The battle action table: the unit slots and the button/menu masks the command menu tests. */
struct BtlActionTable {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ BtlUnitSlot *units;
    /* 0x008 */ u8 unk008[0x10];
    /* 0x018 */ u64 chooseMask;     /* inputs that confirm the current choice */
    /* 0x020 */ u8 unk020[8];
    /* 0x028 */ u64 confirmMask;
    /* 0x030 */ u8 unk030[0xb0];
    /* 0x0e0 */ u64 attackMask;     /* inputs that open the attack menu */
    /* 0x0e8 */ u8 unk0e8[8];
    /* 0x0f0 */ u64 skillMask;      /* inputs that open the skill menu */
    /* 0x0f8 */ u8 unk0f8[0x20];
    /* 0x118 */ u64 closeMask;      /* inputs that close the menu */
};

/* The acting battle: its mask of held inputs and the acting unit's index. */
struct BtlActingState {
    /* 0x0000 */ u8 unk0000[0xa4];
    /* 0x00a4 */ s32 unit;
    /* 0x00a8 */ u8 unk00a8[0x44f8];
    /* 0x45a0 */ u64 inputMask;
};

/* The command menu's result record. */
struct BtlMenuResult {
    /* 0x000 */ u8 unk000[0x1be];
    /* 0x1be */ u16 command;
    /* 0x1c0 */ u16 argument;
};

/* The menu state: flags, the choice mask and the result record. */
struct BtlMenuState {
    /* 0x00 */ u32 flags;      /* bit 7: confirm shown, bit 12: alternate shown */
    /* 0x04 */ u8 unk04[0x1c];
    /* 0x20 */ u64 *choiceMask;
    /* 0x24 */ u8 unk24[4];
    /* 0x28 */ BtlMenuResult *result;
    /* 0x2c */ u16 helpId;
    /* 0x2e */ u8 unk2e[0x57a];
    /* 0x5a8 */ s32 selectedArgument;
};

struct BtlActingTask {
    BtlActingState *battle;
};

struct Table8Row {
    /* 0x00 */ u8 unk00[0x32];
    /* 0x32 */ u16 linkedId;
};

extern "C" {
extern BtlActionTable g_btlAction;
extern u32 g_btlUiBlock;
extern u32 g_btlActionReflect;
Table8Row *dataTable8FindRecord(s32 id);
s32 FUN_003e7adc(BtlActingState *battle);
s32 chainCountIdUnflagged(u32 chain, u32 flag);
void FUN_004a96b8(u32 ui);
s32 btlUiIsMenuReady(u32 ui);
void FUN_004aa7c8(u32 ui);
void FUN_004a92d0(u32 ui, s32 id, s32 mode);
s32 btlUiPollWidgetResult(u32 ui);
void FUN_004a9c40(u32 ui, u16 *command, u16 *argument);
s32 FUN_004ffcd8(void);
void FUN_004eb838(BtlActingTask *task, BtlMenuState *menu);

/* Drives the battle command menu for the acting unit: shows the confirm/alternate prompts the
   input masks ask for, then turns the chosen command into the unit's next phase. Returns 1 once
   a choice was made. */
u32 FUN_004dc72c(BtlActingTask *task, BtlMenuState *menu)
{
    u32 result = 0;
    BtlActionTable *action = &g_btlAction;

    if ((task->battle->inputMask & action->closeMask) != 0) {
        if (chainCountIdUnflagged(g_btlActionReflect, 0) > 0) {
            return 0;
        }
        task->battle->inputMask &= ~action->closeMask;
        FUN_004a96b8(g_btlUiBlock);
    }
    if (btlUiIsMenuReady(g_btlUiBlock)) {
        u64 mask = task->battle->inputMask;
        if ((action->attackMask & mask) != 0) {
            if ((menu->flags & 0x80) == 0) {
                menu->flags |= 0x80;
                FUN_004aa7c8(g_btlUiBlock);
                FUN_004a92d0(g_btlUiBlock, menu->helpId, 1);
            }
        } else if ((action->skillMask & mask) != 0) {
            if ((menu->flags & 0x1000) == 0) {
                menu->flags |= 0x1000;
                FUN_004aa7c8(g_btlUiBlock);
                FUN_004a92d0(g_btlUiBlock, menu->helpId, 1);
            }
        }
    }
    if (!btlUiPollWidgetResult(g_btlUiBlock)) {
        return 0;
    }
    FUN_004a9c40(g_btlUiBlock, &menu->result->command, &menu->result->argument);
    if ((menu->flags & 0x80) != 0) {
        if ((*menu->choiceMask & action->chooseMask) != 0 && FUN_004ffcd8()) {
            menu->result->command = 6;
            menu->result->argument = 0;
        } else {
            menu->result->command = 1;
            menu->result->argument = 1;
        }
    } else if ((menu->flags & 0x1000) != 0) {
        if ((*menu->choiceMask & action->chooseMask) != 0 && FUN_004ffcd8()) {
            menu->result->command = 6;
            menu->result->argument = 0;
        } else {
            menu->result->command = 1;
            menu->result->argument = 1;
        }
    }

    switch ((s16)menu->result->command) {
    case 1:
    case 0xe:
        action->units[task->battle->unit].phase = 6;
        break;
    case 2:
    case 3:
        if (FUN_00333758(dataTable04FindById((s16)menu->result->argument))) {
            action->units[task->battle->unit].phase = 6;
        } else {
            action->units[task->battle->unit].phase = 8;
        }
        break;
    case 4:
    case 0xb:
        action->units[task->battle->unit].phase = 0xb;
        break;
    case 6:
    case 0xf:
        FUN_004eb838(task, menu);
        break;
    case 7:
        menu->selectedArgument = (s16)menu->result->argument;
        if (menu->selectedArgument == 4) {
            action->units[task->battle->unit].phase = 0xb;
        } else {
            action->units[task->battle->unit].phase = 6;
        }
        break;
    case 8: {
        Table8Row *row = dataTable8FindRecord((s16)menu->result->argument);
        if (row->linkedId != 0 && FUN_00333758(dataTable04FindById(row->linkedId))) {
            action->units[task->battle->unit].phase = 6;
        } else {
            action->units[task->battle->unit].phase = 8;
        }
        break;
    }
    case 9:
    case 10:
    case 0xd:
        if (((action->chooseMask | action->confirmMask) & *menu->choiceMask) != 0 &&
            FUN_003e7adc(task->battle) == 0) {
            action->units[task->battle->unit].phase = 0xb;
        } else {
            action->units[task->battle->unit].phase = 8;
        }
        break;
    }
    return 1;
}

} /* extern "C" */
