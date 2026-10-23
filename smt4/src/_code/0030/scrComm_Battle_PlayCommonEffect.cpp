/* NON_MATCHING: effect-name initialization registers and final owner-load scheduling differ. */
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "battle/btlEffect.h"
extern "C" {
extern u32 g_btlScriptUnit;
extern u32 g_btlEvent;
extern BtlEffectOwner *DAT_00435d18;
extern const char DAT_00400428[];
extern const char DAT_00400434[];
s32 scrGetArg(s32 index);
s32 FUN_0027e3b8(u32 event);
s32 FUN_0024550c(BtlEffectOwner *owner);
void ARM_common_memcpy4_9(char *destination, const char *source);
void FUN_002454c4(BtlEffectOwner *owner, const char *name, s32 count, s32 flags);
u32 btlUnitGet(u32 unit);
BtlMainState *btlGetMainState(void);
void FUN_00245420(s32 actor, u32 unit, BtlActionRecord *target, u32 value, s32 effect, s32 lookup, s32 extra);
void FUN_001b1a48(s32 effect, u32 unit, BtlEffectSlotBlock *slots, s32 flags, s32 firstMember, s32 secondMember);

// Play the common up/down effect for the script's current battle unit.
u32 scrComm_Battle_PlayCommonEffect(void)
{
    u32 value = scrGetArg(0);
    s32 effect = scrGetArg(1);
    if (FUN_0027e3b8(g_btlEvent) && !FUN_0024550c(DAT_00435d18))
        return 0;
    if (effect != 0) {
        {
            char name[32] = {0};
            ARM_common_memcpy4_9(name, effect < 0 ? DAT_00400428 : DAT_00400434);
            FUN_002454c4(DAT_00435d18, name, 1, 0);
        }
        u32 unit = btlUnitGet(g_btlScriptUnit);
        BtlActionRecord *target = btlGetMainState()->actions;
        FUN_00245420(0, unit, target, value, effect, 0, -1);
        s32 member = target->memberId;
        FUN_001b1a48(effect, unit, DAT_00435d18->slots, 0, member, member);
    }
    return 1;
}
}
