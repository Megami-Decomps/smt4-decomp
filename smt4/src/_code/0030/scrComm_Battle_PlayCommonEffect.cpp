/* NON_MATCHING: effect-name initialization registers and final owner-load scheduling differ. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "battle/btlEffect.h"
#include "battle/BattleUnitSlot.h"
#include "code/Code0024.h"
extern "C" {
extern u32 g_btlScriptUnit;
extern u32 g_btlEvent;
extern BtlEffectOwner *g_btlAux;
extern const char DAT_00400428[];
extern const char DAT_00400434[];
s32 scrGetArg(s32 index);
s32 isEntryUsable(u32 event); // declcheck: local (the shared declaration in code/Code0027.h does not compile here: argument of type "u32" is incompatible with parameter of type "int *")
s32 FUN_0024550c(BtlEffectOwner *owner);
void __ARM_common_memcpy4_9(char *destination, const char *source);
void FUN_00245420(s32 actor, u32 unit, BtlActionRecord *target, u32 value, s32 effect, s32 lookup, s32 extra);
void FUN_001b1a48(s32 effect, u32 unit, BtlEffectSlotBlock *slots, s32 flags, s32 firstMember, s32 secondMember);

// Play the common up/down effect for the script's current battle unit.
u32 scrComm_Battle_PlayCommonEffect(void)
{
    u32 value = scrGetArg(0);
    s32 effect = scrGetArg(1);
    if (isEntryUsable(g_btlEvent) && !FUN_0024550c(g_btlAux))
        return 0;
    if (effect != 0) {
        {
            char name[32] = {0};
            __ARM_common_memcpy4_9(name, effect < 0 ? DAT_00400428 : DAT_00400434);
            FUN_002454c4(g_btlAux, reinterpret_cast<u32>(name), 1, 0);
        }
        u32 unit = reinterpret_cast<u32>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)));
        BtlActionRecord *target = btlGetMainState()->actions;
        FUN_00245420(0, unit, target, value, effect, 0, -1);
        s32 member = target->memberId;
        FUN_001b1a48(effect, unit, g_btlAux->slots, 0, member, member);
    }
    return 1;
}
}
