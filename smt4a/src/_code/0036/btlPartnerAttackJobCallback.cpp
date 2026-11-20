#include "battle/btlPartnerAttack.h"

extern "C" {

void *jobGetWork(void *job);
extern BtlPartnerAttackA *g_btlPartnerAttack;
void btlPartnerAttackJobStep(void *attack);

void btlPartnerAttackJobCallback(void *job)
{
    jobGetWork(job);
    if (g_btlPartnerAttack != NULL) {
        btlPartnerAttackJobStep(g_btlPartnerAttack);
    }
}

} /* extern "C" */
