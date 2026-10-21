#include "common.h"

extern "C" {

void *jobGetWork(void *job);
extern void *g_btlPartnerAttack;
void FUN_0041210c(void *attack);

void btlPartnerAttackJobCallback(void *job)
{
    jobGetWork(job);
    if (g_btlPartnerAttack != NULL) {
        FUN_0041210c(g_btlPartnerAttack);
    }
}

} /* extern "C" */
