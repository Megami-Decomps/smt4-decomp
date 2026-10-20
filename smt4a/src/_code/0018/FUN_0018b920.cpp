#include "common.h"

extern "C" {

void nn_os_LightEvent_ClearSignal(u32 *object);
extern u32 DAT_005b445c;

/* Calls nn_os_LightEvent_ClearSignal on the word at 0x5B445C. */
void FUN_0018b920(void)
{
    nn_os_LightEvent_ClearSignal(&DAT_005b445c);
}

} /* extern "C" */
