/* NON_MATCHING: retail inlines WaitSynchronization1 SVC 0x24 and a nonstandard result-register comparison. */
#include "common.h"
extern "C" {
extern u32 DAT_00588118;
s32 nn_svc_WaitSynchronization1(u32 handle,s64 timeout);void FUN_002e3140(s32 result);
/* Polls the network synchronization handle. */
bool FUN_00432ad0(){s32 result=nn_svc_WaitSynchronization1(DAT_00588118,0);if(result<0)FUN_002e3140(result);return ((u32)result<<22)==0xFF800000;}
}
