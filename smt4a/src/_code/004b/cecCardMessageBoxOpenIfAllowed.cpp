#include "common.h"
extern "C" {
extern u32 g_resourceDispatchContext;u32 cecMakeResourceId(u32 id);int asdCecCanOpenMessageBox(u32 resource,u32 context);void FUN_00340c2c(u32 resource);
/* Dispatches resource 0x19A2 and completes it when accepted. */
void cecCardMessageBoxOpenIfAllowed(){if(asdCecCanOpenMessageBox(cecMakeResourceId(0x19A2),g_resourceDispatchContext)!=0)FUN_00340c2c(cecMakeResourceId(0x19A2));}
}
