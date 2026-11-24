/* NON_MATCHING: the effect-set names are pooled pc-relative here; retail addresses them through pool words as
 * objects (DAT_00400428/34) it shares with scrComm_Battle_PlayPositionedEffect (one file's pooled literals; a
 * translation unit cannot be carved while the literals have no symbol), so the copy's registers and the final
 * owner-load scheduling differ. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "battle/btlEffect.h"
#include "battle/BattleUnitSlot.h"
#include "code/Code0024.h"
#include <string.h>
extern "C" {
extern u32 g_btlScriptUnit;
extern u32 g_btlEvent;
extern BtlEffectOwner *g_btlAux;
s32 scrGetArg(s32 index);
s32 isEntryUsable(u32 event); // declcheck: local (the shared declaration in code/Code0027.h does not compile here: argument of type "u32" is incompatible with parameter of type "int *")
s32 FUN_0024550c(BtlEffectOwner *owner);
void btlReflectQueueParameterTargetWithFollowup(s32 actor, u32 unit, BtlActionRecord *target, u32 value, s32 effect, s32 lookup, s32 extra);
void FUN_001b1a48(s32 effect, u32 unit, BtlEffectSlotBlock *slots, s32 flags, s32 firstMember, s32 secondMember);


/* Loads the common up (or down, for a negative effect) effect set (scrComm_Battle_PlayPositionedEffect opens with
 * the same block). Retail addresses the two names as objects shared with that command: one file's pooled literals. */
static __inline void loadCommonEffectSet(s32 effect)
{
    char name[32] = {0};
    if (effect < 0)
        strcpy(name, "commonDw");
    else
        strcpy(name, "commonUp");
    FUN_002454c4(g_btlAux, reinterpret_cast<u32>(name), 1, 0);
}

// Play the common up/down effect for the script's current battle unit.
u32 scrComm_Battle_PlayCommonEffect(void)
{
    u32 value = scrGetArg(0);
    s32 effect = scrGetArg(1);
    if (isEntryUsable(g_btlEvent) && !FUN_0024550c(g_btlAux))
        return 0;
    if (effect != 0) {
        loadCommonEffectSet(effect);
        u32 unit = reinterpret_cast<u32>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)));
        BtlActionRecord *target = btlGetMainState()->actions;
        btlReflectQueueParameterTargetWithFollowup(0, unit, target, value, effect, 0, -1);
        s32 member = target->memberId;
        FUN_001b1a48(effect, unit, g_btlAux->slots, 0, member, member);
    }
    return 1;
}
}
