/* NON_MATCHING: compiler inlines the nine-byte name copy and retains separate name/argument stack storage; retail calls the copy helper and reuses slots. */
#include "battle/btlAction.h"
#include "battle/btlMain.h"
#include "battle/btlEffect.h"
#include "battle/btlEvent.h"
#include <string.h>

extern "C" {
extern BtlEvent *g_btlEvent;
extern BtlEffectOwner *DAT_00435d18;
extern u32 g_btlScriptUnit;
extern const char DAT_00400428[];
extern const char DAT_00400434[];
s32 scrGetArg(s32 index);
s32 FUN_0027e3b8(BtlEvent *event);
u32 FUN_0024550c(BtlEffectOwner *owner);
void FUN_002454c4(BtlEffectOwner *owner, const char *name, u32 flags, s32 mode);
u32 btlUnitGet(u32 unit);
BtlMainState *btlGetMainState(void);
u32 FUN_00245420(s32 actor, u32 unit, BtlActionRecord *target, u32 value, u32 parameter, s32 lookupId, s32 extraTarget);
void FUN_001b1a48(s32 amount, u32 unit, BtlEffectSlotBlock *slots, s32 mode, u32 first, s32 second);

// Queue a positive or negative common effect and forward its unit-specific notifications.
u32 scrComm_Battle_PlayCommonEffectExt(void)
{
    s32 target = scrGetArg(0);
    u32 value = scrGetArg(1);
    s32 amount = scrGetArg(2);
    if (FUN_0027e3b8(g_btlEvent) != 0 && FUN_0024550c(DAT_00435d18) == 0) {
        return 0;
    }
    if (amount != 0) {
        char name[32] = {};
        const char *effectName = amount < 0 ? DAT_00400428 : DAT_00400434;
        memcpy(name, effectName, 9);
        FUN_002454c4(DAT_00435d18, name, 0, 0);
        u32 unit = btlUnitGet(g_btlScriptUnit);
        FUN_00245420(0, unit, &btlGetMainState()->actions[target], value, amount, 0, -1);
        FUN_001b1a48(amount, unit, DAT_00435d18->slots, 0, target, target);
    }
    return 1;
}
}
