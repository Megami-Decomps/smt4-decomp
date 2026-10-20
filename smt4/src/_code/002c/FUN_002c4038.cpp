/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void nn_os_LightEvent_Signal(void *p);

void FUN_002c4038(u8 *p)
{
    nn_os_LightEvent_Signal(p + 4);
}

}
