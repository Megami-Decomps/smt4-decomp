/* NON_MATCHING: 64-bit mask loads are ldm here but ldrd in retail, the unit-slot address folding differs, and retail keeps 12 more bytes of locals between the extra-target word and the confirm flag (the extra-target query result is larger than the u64 used here) */
#include "common.h"

/* A battle unit's script slot (0x1254 bytes); only the state byte is touched here. */
struct BtlUnitSlot {
    /* 0x00 */ u8 unk00[9];
    /* 0x09 */ u8 phase;
    /* 0x0a */ u8 unk0a[0x124a];
};

/* The battle action table: the unit slots and the input masks the target menu tests. */
struct BtlActionTable {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ BtlUnitSlot *units;
    /* 0x008 */ u8 unk008[0x20];
    /* 0x028 */ u64 confirmMask;    /* inputs that confirm a skill target */
    /* 0x030 */ u8 unk030[0xb0];
    /* 0x0e0 */ u64 attackMask;     /* inputs that open the attack menu */
    /* 0x0e8 */ u8 unk0e8[8];
    /* 0x0f0 */ u64 skillMask;      /* inputs that open the skill menu */
};

/* The acting battle: the acting unit, the extra target words and the held inputs. */
struct BtlActingState {
    /* 0x0000 */ u8 unk0000[0xa4];
    /* 0x00a4 */ s32 unit;
    /* 0x00a8 */ u8 unk00a8[0x1f60];
    /* 0x2008 */ u64 extraTargets;
    /* 0x2010 */ u8 unk2010[0x2590];
    /* 0x45a0 */ u64 inputMask;
};

/* The command menu's result record. */
struct BtlMenuResult {
    /* 0x000 */ u8 unk000[0x1be];
    /* 0x1be */ s16 command;
    /* 0x1c0 */ s16 argument;
};

/* The menu state: flags, the choice mask, the result record and the per-target flags. */
struct BtlMenuState {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u8 unk04[0x1c];
    /* 0x20 */ u64 *choiceMask;
    /* 0x24 */ u8 unk24[4];
    /* 0x28 */ BtlMenuResult *result;
    /* 0x2c */ u8 unk2c[0xc];
    /* 0x38 */ u8 targetFlags[0x80];
};

struct BtlActingTask {
    BtlActingState *battle;
};

/* A skill row of data table 04. */
struct Table04Row {
    /* 0x00 */ u8 unk00[0x23];
    /* 0x23 */ u8 kind;
    /* 0x24 */ u8 unk24[0x14];
    /* 0x38 */ u8 flags;
};

struct Table8Row {
    /* 0x00 */ u8 unk00[0x32];
    /* 0x32 */ u16 linkedId;
};

/* The target query the unit/menu code fills in (only its two read words are used here). */
struct BtlTargetInfo {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 kind;
    /* 0x06 */ u8 unk06[0xd];
    /* 0x13 */ u8 subtype;
    /* 0x14 */ u8 unk14[6];
    /* 0x1a */ s16 record;
    /* 0x1c */ u8 unk1c[0x18];
};

extern "C" {
extern BtlActionTable g_btlAction;
extern u32 g_btlUiBlock;
Table04Row *dataTable04FindById(s32 id);
Table8Row *dataTable8FindRecord(s32 id);
s32 playerHasFlagBit(u32 bit);
s32 FUN_003f0e94(BtlActingState *battle, s32 index);
void FUN_003e8bb0(BtlTargetInfo *info, BtlActingState *battle, u64 *mask);
s32 FUN_004aba9c(u32 ui);
void FUN_004ab80c(u32 ui, u8 *confirmed, u64 *selected, u64 *extra);
void btlUIClearWorkTables(u32 ui);
void FUN_004e980c(BtlActingTask *task, BtlMenuState *menu);
void FUN_004eb838(BtlActingTask *task, BtlMenuState *menu);

/* Drives the target menu: raises the prompt flags for the attack/skill masks, then, once the
   target UI confirms, turns the chosen targets into per-target flags and finishes the menu.
   Returns 1 when the menu was finished or a prompt was raised. */
u32 FUN_004de37c(BtlActingTask *task, BtlMenuState *menu)
{
    BtlActionTable *action = &g_btlAction;
    u64 inputs = task->battle->inputMask;

    if ((action->attackMask & inputs) != 0) {
        if ((menu->flags & 0x80) == 0) {
            menu->flags |= 0x880;
            action->units[task->battle->unit].phase = 1;
            return 1;
        }
    } else if ((action->skillMask & inputs) != 0 && (menu->flags & 0x1000) == 0) {
        menu->flags |= 0x1800;
        action->units[task->battle->unit].phase = 1;
        return 1;
    }

    if (FUN_004aba9c(g_btlUiBlock) == 0) {
        return 0;
    }

    u64 selected = 0;
    u64 extra = 0;
    u8 confirmed = 0;
    s32 index;
    FUN_004ab80c(g_btlUiBlock, &confirmed, &selected, &extra);

    BtlMenuResult *result = menu->result;
    if (confirmed == 0) {
        if (result->command != 10) {
            menu->flags |= 0x800;
            action->units[task->battle->unit].phase = 1;
            return 1;
        }
        action->units[task->battle->unit].phase = 0x1d;
        return 1;
    }

    s32 isSkill = 0;
    s32 isSpecial = 0;
    s32 command = result->command;
    if (command == 9) {
        goto markSelected;
    }
    if (command == 10) {
        if (selected == 0) {
            action->units[task->battle->unit].phase = 0x1d;
            return 1;
        }
        goto markSelected;
    }
    if (command == 13) {
        goto markSelected;
    }
    if (command == 2 || command == 3) {
        Table04Row *row = dataTable04FindById(result->argument);
        if (row == NULL) {
            goto scanTargets;
        }
        if (row->kind == 7) {
            isSkill = 1;
        }
        if ((row->flags & 4) != 0) {
            isSpecial = 1;
        }
    } else if (command == 8) {
        Table8Row *linked = dataTable8FindRecord(result->argument);
        if (linked->linkedId == 0) {
            goto scanTargets;
        }
        Table04Row *row = dataTable04FindById(linked->linkedId);
        if (row == NULL) {
            goto scanTargets;
        }
        if (row->kind == 7) {
            isSkill = 1;
        }
        if ((row->flags & 4) != 0) {
            isSpecial = 1;
        }
    } else {
        goto scanTargets;
    }
    if (isSkill == 0) {
        goto scanTargets;
    }
    if (isSpecial != 0) {
        FUN_004e980c(task, menu);
        menu->flags |= 0x4000;
        if (((menu->choiceMask[0] & action->confirmMask) != 0)) {
            menu->flags |= 4;
        }
        goto finish;
    }

markSelected:
    for (index = 0; index < 64; index++) {
        if ((selected & ((u64)1 << index)) != 0) {
            menu->targetFlags[index] = 1;
        }
    }
    task->battle->extraTargets = extra;
    goto finish;

scanTargets:
    for (index = 0; index < 64; index++) {
        if ((selected & ((u64)1 << index)) == 0) {
            continue;
        }
        if (index != 0) {
            s32 slot = FUN_003f0e94(task->battle, index - 1);
            if (slot < 0) {
                slot = index + 0x6c;
            }
            menu->targetFlags[slot] = 1;
        } else {
            menu->targetFlags[0] = 1;
            if (playerHasFlagBit(1) != 0) {
                BtlTargetInfo info;
                FUN_003e8bb0(&info, task->battle, menu->choiceMask);
                if (info.kind == 3) {
                    if (info.subtype != 24 && info.subtype != 27 && info.subtype != 1) {
                        Table8Row *row = dataTable8FindRecord(info.record);
                        if (row != NULL && (((u32 *)row)[26] & 4) != 0) {
                            index = 1;
                            continue;
                        }
                    }
                    menu->targetFlags[0] = 0;
                }
            }
        }
    }

finish:
    btlUIClearWorkTables(g_btlUiBlock);
    FUN_004eb838(task, menu);
    return 1;
}
}
