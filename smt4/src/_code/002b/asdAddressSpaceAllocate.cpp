#include "common.h"

extern "C" {

extern void nn_os_AddressSpaceManager_Allocate(void);

/* Forwards to the function that follows it in the binary. */
void asdAddressSpaceAllocate(void)
{
    nn_os_AddressSpaceManager_Allocate();
}

} /* extern "C" */
