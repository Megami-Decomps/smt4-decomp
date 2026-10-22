#include "common.h"

extern "C" {

int FUN_00201e38(int param_1, unsigned int param_2);

/* Forwards to FUN_00201e38 with its second argument fixed at 0. */
void sysPlayVoice(unsigned int param_1)
{
    FUN_00201e38(param_1, 0);
}

} /* extern "C" */
