#include "common.h"

struct NnosAddressSpaceManager;

extern "C" {
extern NnosAddressSpaceManager g_nnosAddressSpaceManager;
s32 FUN_0042cea0(NnosAddressSpaceManager *manager, u32 address, u32 size);

void FUN_0042d32c(u32 address, u32 size)
{
    FUN_0042cea0(&g_nnosAddressSpaceManager, address, size);
}
}
