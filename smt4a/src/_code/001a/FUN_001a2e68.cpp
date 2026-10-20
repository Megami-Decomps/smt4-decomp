#include "common.h"

extern "C" {

void nn_os_LightEvent_Wait(u32 *object);
extern u32 DAT_005b445c;

/* Calls nn_os_LightEvent_Wait on the word at 0x5B445C. */
void FUN_001a2e68(void)
{
    nn_os_LightEvent_Wait(&DAT_005b445c);
}

} /* extern "C" */
