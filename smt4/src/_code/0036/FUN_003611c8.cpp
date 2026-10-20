#include "common.h"

extern "C" {

int nn_applet_CTR_detail_IsRegistered(int appletId);

/* Queries whether applet 0x407 is registered. */
void FUN_003611c8(void)
{
    nn_applet_CTR_detail_IsRegistered(0x407);
}

} /* extern "C" */
