#include "battle/BtlMainAccess.h"
#include "battle/btlPartnerAttack.h"

extern "C" {

void *jobGetWork(void *job);
extern BtlPartnerAttackA *g_btlPartnerAttack;
void FUN_00411458(void *attack, void *state);

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
    FUN_00411458(attack, state);
    return result;
}

} /* extern "C" */
