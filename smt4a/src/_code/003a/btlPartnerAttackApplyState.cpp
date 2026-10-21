/* NON_MATCHING: retail uses `push {r4, r5, r6, lr}` where armcc emits `push {r4, lr}`. */
#include "common.h"

extern "C" {

void *jobGetWork(void *job);
extern void *g_btlPartnerAttack;
void *btlGetMainState(void);
void FUN_00411458(void *attack, void *state);

s32 btlPartnerAttackApplyState(void *job)
{
    jobGetWork(job);
    void *attack = g_btlPartnerAttack;
    if (attack == NULL) {
        return 0;
    }
    void *state = btlGetMainState();
    if (state == NULL) {
        return 0;
    }
    FUN_00411458(attack, state);
    return 0;
}

} /* extern "C" */
