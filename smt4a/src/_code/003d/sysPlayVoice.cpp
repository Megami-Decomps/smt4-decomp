#include "common.h"

extern "C" {

int soundPlayAtPosition(int param_1, unsigned int param_2);

/* Forwards to soundPlayAtPosition with its second argument fixed at 0. */
void sysPlayVoice(unsigned int param_1)
{
    soundPlayAtPosition(param_1, 0);
}

} /* extern "C" */
