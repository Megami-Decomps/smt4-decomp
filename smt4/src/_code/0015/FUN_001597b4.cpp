/* NON_MATCHING: retail moves the first argument through ip (mov ip, r0; ... mov r1, ip) where the build moves it directly.
 * Only a named local holding the manager's address (`manager = &g_nnosAddressSpaceManagerHeap;` passed once) gives
 * retail's moves; an inline member forwarder, a reference or a by-value return does not. That local is a single-use
 * temporary, so it is not used. */
#include "common.h"

struct NnosAddressSpaceManager;

extern "C" {
extern NnosAddressSpaceManager g_nnosAddressSpaceManagerHeap;
void nn_os_AddressSpaceManager_Allocate(NnosAddressSpaceManager *manager, u32 address, u32 size, u32 alignment);

void FUN_001597b4(u32 address, u32 size)
{
    nn_os_AddressSpaceManager_Allocate(&g_nnosAddressSpaceManagerHeap, address, size, 0x1000);
}
}
