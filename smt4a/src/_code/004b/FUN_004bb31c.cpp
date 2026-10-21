#include "common.h"
extern "C" {
extern u32 g_resourceDispatchContext;u32 FUN_0042d694(u32 id);int FUN_002bd934(u32 resource,u32 context);void FUN_00340c2c(u32 resource);
/* Dispatches resource 0x19A2 and completes it when accepted. */
void FUN_004bb31c(){if(FUN_002bd934(FUN_0042d694(0x19A2),g_resourceDispatchContext)!=0)FUN_00340c2c(FUN_0042d694(0x19A2));}
}
