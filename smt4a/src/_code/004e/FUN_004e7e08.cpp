/* NON_MATCHING: 59 lines. The flag-path last, the switch with one result, setScriptState (FUN_004eb838's helper) and the full-property flag now follow retail's blocks; what differs is how the two required-mask tests load the attacker's flags and the mask (retail: ldm/ldm in step 0, a pre-indexed ldr pair and ldrd in step 2), one instruction more here that shifts the pool. */
#include "common.h"
#include "battle/btlAction.h"
#include "battle/BtlGlobals.h"
#include "battle/BattleHelpers_VariantB.h"
#include "battle/BtlUiGlobal.h"

/* The reflect action being stepped (only the fields read here). */
struct ReflectAction {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 step;
    /* 0x0C */ u8 unk0C[0x14];
    /* 0x20 */ BtlCombatantEntryA *attacker;
    /* 0x24 */ u8 *target;             /* +0x6A: target entry id */
    /* 0x28 */ u8 *skill;              /* +2: skill id */
};

extern "C" {
extern s32 g_btlAux;
extern u32 g_btlActionReflect;

s32 btlFindEntryValue(s32 entry, u32 property);
s32 btlGetPropertyMaximum(u32 property);
s32 btlPollVersionedEffectTexture(s32 aux);
s32 chainCountIdUnflagged(u32 chain, ReflectAction *action);
void btlQueueMessageTableReflectAction(s32 a, ReflectAction *action, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
void btlUiOpenHelpWindow(BtlUiA *block, s32 a, s32 b, u32 effect, u32 skill, s32 c);
void btlReflectQueueValueAction(s32 a, ReflectAction *action, s32 b, BtlCombatantEntryA *attacker, s32 c);
void FUN_004fbeac(s32 a, ReflectAction *action, s32 b, s32 c, s32 d);
void effectRequestByName(s32 aux, const char *name);

/* Sets the command of the owner's action slot (FUN_004eb838's setScriptState). */
static __inline void setScriptState(BtlMainStateA **owner, u8 command)
{
    BtlActionSlotA &slot = g_btlAction.slots[(*owner)->unitRecord.currentSlot];
    slot.unit.command = command;
}

/* Whether every defence property (7-10) of the action's target is at its maximum. */
static __inline bool targetPropertiesAtMaximum(ReflectAction *action)
{
    bool full = true;
    if (btlFindEntryValue(*(s16 *)(action->target + 0x6A), 7) != btlGetPropertyMaximum(7))
        full = false;
    if (btlFindEntryValue(*(s16 *)(action->target + 0x6A), 8) != btlGetPropertyMaximum(8))
        full = false;
    if (btlFindEntryValue(*(s16 *)(action->target + 0x6A), 9) != btlGetPropertyMaximum(9))
        full = false;
    if (btlFindEntryValue(*(s16 *)(action->target + 0x6A), 10) != btlGetPropertyMaximum(10))
        full = false;
    return full;
}

/* Steps the reflect action: 0 starts the effect, 1 waits for it, 2 plays the reflect, 3 waits for the
 * chain to finish. Returns 1 when the action is over. */
u32 FUN_004e7e08(BtlMainStateA **owner, ReflectAction *action)
{
    u32 done = 0;
    if (btlScriptUnitHasFlags(*owner) == 0) {
        switch (action->step) {
        case 0:
            if (g_btlAction.interaction.requiredMask & action->attacker->flags)
                effectRequestByName(g_btlAux, "ef_e_rastcand_c");
            else
                effectRequestByName(g_btlAux, "ef_d_rastcand");
            action->step = 1;
            break;
        case 1:
            if (btlPollVersionedEffectTexture(g_btlAux) != 0)
                action->step = 2;
            break;
        case 2:
            if (g_btlAction.interaction.requiredMask & action->attacker->flags)
                btlQueueMessageTableReflectAction(0, action, *(s16 *)(action->target + 0x6A), *(s16 *)(action->target + 0x6A), 7, 0, 0, 0);
            else
                btlQueueMessageTableReflectAction(0, action, *(s16 *)(action->target + 0x6A), *(s16 *)(action->target + 0x6A), 7, 0, 2, 0);
            btlUiOpenHelpWindow(g_btlUiBlock, 2, 0x1CC, (u32)action->attacker->data.record, *(u16 *)(action->skill + 2), 0);
            if (targetPropertiesAtMaximum(action)) {
                btlReflectQueueValueAction(10, action, 0x40, action->attacker, 0);
            } else {
                channelRunMagnitudeQueries(*(s16 *)(action->target + 0x6A), 3, 1, 0);
                FUN_004fbeac(10, action, 0, 0x3F, 0);
            }
            action->step = 3;
            break;
        case 3:
            if (chainCountIdUnflagged(g_btlActionReflect, action) > 0)
                break;
            setScriptState(owner, 29);
            done = 1;
            break;
        }
    } else {
        if (!targetPropertiesAtMaximum(action))
            channelRunMagnitudeQueries(*(s16 *)(action->target + 0x6A), 3, 1, 0);
        setScriptState(owner, 29);
        done = 1;
    }
    return done;
}

} /* extern "C" */
