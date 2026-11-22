/* NON_MATCHING: 148 lines (96 by shape). The prologue, the window steps and the selection override are retail's. Retail cross-jumps the switch's action-kind stores differently (case 1 as its own stub into a shared tail, case 2/3 and 8 into case 7's kind-5 store) and compares case 7's item slot from the value it stored, where the build reloads it. */
#include "common.h"
#include "battle/btlHelp.h"
#include "gamedata/SkillDataLookup.h"
#include "battle/BattleCommandController.h"
#include "gamedata/ConsumableRecord.h"
#include "battle/BtlUiGlobal.h"
#include "battle/btlMain.h"
#include "battle/BtlGlobals.h"
#include "battle/BtlUnitWork.h"

extern "C" {
extern u32 g_btlActionReflect;
s32 nodeListCountActiveById(u32 id, u32 arg);
void FUN_003adc20(BtlUi *block);
s32 battleUiIsFadeAndFieldReady(BtlUi *block);
void btlUiAdvanceFadeInTransition(BtlUi *block);
s32 btlUiAcceptSelection(BtlUi *block);
void btlUiGetAcceptedSelection(BtlUi *block, s16 *kind, s16 *value);
s32 FUN_0023dcb8(void);
s32 FUN_002cf124(void *record);
void battleSetActionKind(BtlMainState **block);
void FUN_00229b10(BtlMainState **block, CommandState *state);

/* Sets the acting unit's action kind. */
static __inline void setActorAction(BtlMainState **block, s32 kind)
{
    BtlActionSlot *slot = &g_btlAction.slots[(*block)->actionState.index];
    slot->unit.command = kind;
}

/* Steps the command menu: opens the windows as the fade allows, takes the player's choice and sets the actor's
   action kind from it. Returns 1 once a choice has been handled, 0 while waiting. */
u32 btlCommandMenuStep(BtlMainState **block, CommandState *state)
{
    u32 result = 0;
    if ((*block)->battleMask & 0x8000) {
        if (nodeListCountActiveById(g_btlActionReflect, 0) > 0) {
            return 0;
        }
        (*block)->battleMask &= ~(u64)0x8000;
        FUN_003adc20(g_btlUiBlock);
    }
    if (battleUiIsFadeAndFieldReady(g_btlUiBlock) != 0) {
        if (((*block)->battleMask & 0x40) != 0) {
            if ((state->flags & 0x80) == 0) {
                state->flags = state->flags | 0x80;
                btlUiAdvanceFadeInTransition(g_btlUiBlock);
                FUN_00229c5c(g_btlUiBlock, state->windowId, 1);
            }
        } else if (((*block)->battleMask & 0x100) != 0 && (state->flags & 0x1000) == 0) {
            state->flags = state->flags | 0x1000;
            btlUiAdvanceFadeInTransition(g_btlUiBlock);
            FUN_00229c5c(g_btlUiBlock, state->windowId, 1);
        }
    }
    if (btlUiAcceptSelection(g_btlUiBlock) != 0) {
        CommandSelection *selection = state->selection;
        btlUiGetAcceptedSelection(g_btlUiBlock, &selection->kind, &selection->value);
        if ((state->flags & 0x80) != 0) {
            if ((state->entry->flags & 2) != 0) {
                if (FUN_0023dcb8() != 0) {
                    state->selection->kind = 6;
                    state->selection->value = 0;
                } else {
                    state->selection->kind = 1;
                    state->selection->value = 1;
                }
            } else {
                state->selection->kind = 1;
                state->selection->value = 1;
            }
        } else if ((state->flags & 0x1000) != 0) {
            if ((state->entry->flags & 2) != 0) {
                if (FUN_0023dcb8() != 0) {
                    state->selection->kind = 6;
                    state->selection->value = 0;
                } else {
                    state->selection->kind = 1;
                    state->selection->value = 1;
                }
            } else {
                state->selection->kind = 1;
                state->selection->value = 1;
            }
        }
        switch (state->selection->kind) {
        case 1:
            setActorAction(block, 5);
            break;
        case 6:
        case 0xf:
            FUN_00229b10(block, state);
            break;
        case 2:
        case 3:
            if (FUN_002cf124(skillDataFindById(state->selection->value)) == 0) {
                setActorAction(block, 7);
            } else {
                setActorAction(block, 5);
            }
            break;
        case 8: {
            ConsumableRecord *record = itemTableGetItemRecord(state->selection->value);
            if (record->skillId != 0) {
                if (FUN_002cf124(skillDataFindById(record->skillId)) != 0) {
                    setActorAction(block, 5);
                    break;
                }
            }
            setActorAction(block, 7);
            break;
        }
        case 4:
        case 0xb:
            battleSetActionKind(block);
            break;
        case 7:
            state->itemSlot = state->selection->value;
            if (state->selection->value == 7) {
                setActorAction(block, 0xb);
            } else {
                setActorAction(block, 5);
            }
            break;
        case 9:
        case 10:
        case 0xd:
            setActorAction(block, 7);
            break;
        case 0xe:
            setActorAction(block, 5);
            break;
        default:
            break;
        }
        result = 1;
    }
    return result;
}

} /* extern "C" */
