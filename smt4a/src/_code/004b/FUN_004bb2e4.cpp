#include "common.h"

extern "C" {
u32 FUN_0042d694(u32 id);
void FUN_002bd934(u32 resource, u32 context);
extern u32 g_resourceDispatchContext;

/* Dispatches resource 0x19A2 with the active context. */
void FUN_004bb2e4()
{
    u32 resource = FUN_0042d694(0x19A2);
    FUN_002bd934(resource, g_resourceDispatchContext);
}
}
