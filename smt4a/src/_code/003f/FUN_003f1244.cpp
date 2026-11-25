/* NON_MATCHING: the AND operands are exchanged in the actor-category and party-target mask tests. */
#include "battle/BtlMainAccess.h"
#include "battle/BtlGlobals.h"

/* The party action gate inlined here, with its out-of-line copy in FUN_003ec7b0. */
static __inline u32 btlPartyActionsAllowed(const BtlMainStateExtA *battle)
{
    if (battle->count > 0) {
        if ((g_btlMain.partyTarget.mask & battle->stateFlags64.bits) == 0 &&
            (g_btlMain.transition.mask & battle->stateFlags64.bits) == 0) {
            return 1;
        }
    }
    return 0;
}

/* Checks that the actor category and current battle state permit the party action. */
extern "C" u32 FUN_003f1244(const BtlMainStateExtA *battle, const u64 *actorMask)
{
    enum { PARTY_ACTION_CATEGORY = 3 };
    return actorMask != NULL && (g_btlMain.actorCategories[PARTY_ACTION_CATEGORY] & *actorMask) != 0
        ? btlPartyActionsAllowed(battle) : 0;
}
