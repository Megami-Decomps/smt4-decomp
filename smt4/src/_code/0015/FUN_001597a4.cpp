#include "common.h"

extern "C" {

extern void nn_os_AddressSpaceManager_Free(u8 *manager, u32 address);

extern u8 DAT_004eac5c;

void FUN_001597a4(u32 address)
{
    nn_os_AddressSpaceManager_Free(&DAT_004eac5c, address);
}

} /* extern "C" */
