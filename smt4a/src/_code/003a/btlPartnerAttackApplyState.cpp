#include "battle/BtlMainAccess.h"
#include "battle/btlPartnerAttack.h"

extern "C" {

void *jobGetWork(void *job);
extern BtlPartnerAttackA *g_btlPartnerAttack;
void btlPartnerDrawEntries(void *attack, void *state);

s32 btlPartnerAttackApplyState(void *job)
{
    jobGetWork(job);
    void *attack = g_btlPartnerAttack;
    if (attack == NULL) {
        return 0;
    }
    void *state = static_cast<void *>(btlGetMainState());
    s32 result = 0;
    if (state == NULL) {
        return result;
    }
    btlPartnerDrawEntries(attack, state);
    return result;
}

} /* extern "C" */
