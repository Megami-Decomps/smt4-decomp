#include "common.h"

extern "C" {

void modelSetResetSlots(void *object);
void modelManagerReleaseSlots(void *object);

extern void *g_btlAux;

void FUN_00339dc0(void)
{
    modelManagerReleaseSlots(g_btlAux);
    modelSetResetSlots(g_btlAux);
}

} /* extern "C" */
