/* NON_MATCHING: retail's common-effect strings live in a shared pool; the build embeds them
 * in this unit. Argument setup for the reflect and notification calls still differs. */
#include "battle/BtlMainAccess.h"
#include "battle/btlAction.h"
#include "battle/btlMain.h"
#include "battle/btlEffect.h"
#include "battle/btlEvent.h"
#include <string.h>
#include "battle/BattleUnitSlot.h"

extern "C" {
extern BtlEvent *g_btlEvent;
extern BtlEffectOwner *g_btlAux;
extern u32 g_btlScriptUnit;
s32 scrGetArg(s32 index);
s32 isEntryUsable(BtlEvent *event); // declcheck: local (the shared declaration in code/Code0027.h does not compile here: argument of type "BtlEvent *" is incompatible with parameter of type "int *")
u32 FUN_0024550c(BtlEffectOwner *owner);
void FUN_002454c4(BtlEffectOwner *owner, const char *name, u32 flags, s32 mode);
u32 FUN_00245420(s32 actor, u32 unit, BtlActionRecord *target, u32 value, u32 parameter, s32 lookupId, s32 extraTarget);
void FUN_001b1a48(s32 amount, u32 unit, BtlEffectSlotBlock *slots, s32 mode, u32 first, s32 second);

/* Queues a positive or negative common effect and forwards its unit-specific notifications. */
u32 scrComm_Battle_PlayCommonEffectExt(void)
{
    s32 target = scrGetArg(0);
    u32 value = scrGetArg(1);
    s32 amount = scrGetArg(2);
    if (isEntryUsable(g_btlEvent) != 0 && FUN_0024550c(g_btlAux) == 0) {
        return 0;
    }
    if (amount != 0) {
        {
            char name[32] = {};
            if (amount < 0) {
                strcpy(name, "commonDw");
            } else {
                strcpy(name, "commonUp");
            }
            FUN_002454c4(g_btlAux, name, 0, 0);
        }
        u32 unit = (u32)btlUnitGet((BtlMainState *const *)g_btlScriptUnit);
        FUN_00245420(0, unit, &btlGetMainState()->actions[target], value, amount, 0, -1);
        FUN_001b1a48(amount, unit, g_btlAux->slots, 0, target, target);
    }
    return 1;
}
} /* extern "C" */
