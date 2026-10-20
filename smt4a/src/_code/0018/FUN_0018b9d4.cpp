#include "common.h"

extern "C" {

void nn_os_LightEvent_TryWait(u32 *object);
extern u32 DAT_005b445c;

/* Calls nn_os_LightEvent_TryWait on the word at 0x5B445C. */
void FUN_0018b9d4(void)
{
    nn_os_LightEvent_TryWait(&DAT_005b445c);
}

} /* extern "C" */
