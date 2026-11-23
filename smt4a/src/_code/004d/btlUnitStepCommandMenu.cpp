/* NON_MATCHING: control flow, calls and the switch's case blocks are retail's (250 rows, 180 by shape). The
 * 64-bit mask tests load their halves into other registers (retail: ldrd pairs for the confirm tests, single
 * words for the close test), and the copies of the command store take other scratch registers, so armcc merges
 * fewer of them than retail does (retail keeps one 6, one 8 and two 11 stores besides case 1's). */
#include "common.h"
#include "battle/BtlGlobals.h"
#include "battle/BtlEntryA.h"
#include "battle/BtlUiGlobal.h"
#include "gamedata/SkillDataRecord.h"
#include "gamedata/ConsumableRecordA.h"
#include "code/Code004a_Smt4a.h"

enum {
    UNIT_MENU_CONFIRM_SHOWN = 0x80,     /* BtlUnitA.flags: the confirm prompt is up */
    UNIT_MENU_ALTERNATE_SHOWN = 0x1000  /* BtlUnitA.flags: the alternate prompt is up */
};

extern "C" {
extern u32 g_btlActionReflect;
s32 FUN_003e7adc(BtlMainStateA *state);
s32 chainCountIdUnflagged(u32 chain, u32 flag);
void FUN_004a96b8(BtlUiA *ui);
s32 btlUiIsMenuReady(BtlUiA *ui);
void FUN_004aa7c8(BtlUiA *ui);
s32 btlUiPollWidgetResult(BtlUiA *ui);
void FUN_004a9c40(BtlUiA *ui, u16 *command, u16 *argument);
s32 FUN_004ffcd8(void);
void FUN_004eb838(BtlMainStateA **owner, BtlUnitA *unit);

/* Sets the command the acting unit's slot runs next. */
static __inline void setScriptState(BtlMainStateA **owner, s32 command)
{
    BtlActionSlotA *slot = &g_btlAction.slots[(*owner)->unitRecord.currentSlot];
    slot->unit.command = command;
}

/* Drives the battle command menu for the acting unit: shows the confirm/alternate prompts the
 * battle state asks for, then turns the chosen action into the unit's next command. Returns 1 once
 * a choice was made. */
u32 btlUnitStepCommandMenu(BtlMainStateA **owner, BtlUnitA *unit)
{
    u32 result = 0;

    if ((*owner)->stateFlags64.bits & g_btlAction.menuCloseMask) {
        if (chainCountIdUnflagged(g_btlActionReflect, 0) > 0) {
            return 0;
        }
        (*owner)->stateFlags64.bits &= ~g_btlAction.menuCloseMask;
        FUN_004a96b8(g_btlUiBlock);
    }
    if (btlUiIsMenuReady(g_btlUiBlock)) {
        if (g_btlAction.cameraExcludedMask & (*owner)->stateFlags64.bits) {
            if ((unit->flags & UNIT_MENU_CONFIRM_SHOWN) == 0) {
                unit->flags |= UNIT_MENU_CONFIRM_SHOWN;
                FUN_004aa7c8(g_btlUiBlock);
                FUN_004a92d0(g_btlUiBlock, unit->id, 1);
            }
        } else if (g_btlAction.cameraExcludedMaskB & (*owner)->stateFlags64.bits) {
            if ((unit->flags & UNIT_MENU_ALTERNATE_SHOWN) == 0) {
                unit->flags |= UNIT_MENU_ALTERNATE_SHOWN;
                FUN_004aa7c8(g_btlUiBlock);
                FUN_004a92d0(g_btlUiBlock, unit->id, 1);
            }
        }
    }
    if (btlUiPollWidgetResult(g_btlUiBlock)) {
        FUN_004a9c40(g_btlUiBlock, (u16 *)&unit->data->actionKind, (u16 *)&unit->data->actionArg);
        if (unit->flags & UNIT_MENU_CONFIRM_SHOWN) {
            if ((unit->entry->flags & g_btlAction.buttons.confirm) && FUN_004ffcd8()) {
                unit->data->actionKind = 6;
                unit->data->actionArg = 0;
            } else {
                unit->data->actionKind = 1;
                unit->data->actionArg = 1;
            }
        } else if (unit->flags & UNIT_MENU_ALTERNATE_SHOWN) {
            if ((unit->entry->flags & g_btlAction.buttons.confirm) && FUN_004ffcd8()) {
                unit->data->actionKind = 6;
                unit->data->actionArg = 0;
            } else {
                unit->data->actionKind = 1;
                unit->data->actionArg = 1;
            }
        }

        switch (unit->data->actionKind) {
        case 1:
        case 14:
            setScriptState(owner, 6);
            break;
        case 6:
        case 15:
            FUN_004eb838(owner, unit);
            break;
        case 2:
        case 3:
            if (FUN_00333758(skillDataFindById(unit->data->actionArg))) {
                setScriptState(owner, 6);
            } else {
                setScriptState(owner, 8);
            }
            break;
        case 8: {
            ConsumableRecordA *item = itemTableGetItemRecord(unit->data->actionArg);
            if (item->skillId != 0 && FUN_00333758(skillDataFindById(item->skillId))) {
                setScriptState(owner, 6);
            } else {
                setScriptState(owner, 8);
            }
            break;
        }
        case 7:
            unit->menuArgument = unit->data->actionArg;
            if (unit->menuArgument == 4) {
                setScriptState(owner, 11);
            } else {
                setScriptState(owner, 6);
            }
            break;
        case 4:
        case 11:
            setScriptState(owner, 11);
            break;
        case 9:
        case 10:
        case 13:
            if (((g_btlAction.buttons.confirm | g_btlAction.buttons.confirmAlt) & unit->entry->flags) &&
                FUN_003e7adc(*owner) == 0) {
                setScriptState(owner, 11);
            } else {
                setScriptState(owner, 8);
            }
            break;
        }
        result = 1;
    }
    return result;
}

} /* extern "C" */
