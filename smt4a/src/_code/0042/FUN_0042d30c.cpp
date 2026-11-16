/* NON_MATCHING: retail moves the first argument through ip (mov ip, r0; ... mov r1, ip) where the build moves it directly. */
#include "common.h"

struct NnosAddressSpaceManager;

extern "C" {
extern NnosAddressSpaceManager g_nnosAddressSpaceManager;
void nn_os_AddressSpaceManager_Allocate(NnosAddressSpaceManager *manager, u32 address, u32 size, u32 alignment);

void FUN_0042d30c(u32 address, u32 size)
{
    nn_os_AddressSpaceManager_Allocate(&g_nnosAddressSpaceManager, address, size, 0);
}
}
