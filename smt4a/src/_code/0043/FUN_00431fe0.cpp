/* NON_MATCHING: retail inlines CloseHandle SVC 0x23, which is forbidden by the matching rules. */
#include "common.h"
extern "C" {
s32 nn_svc_CloseHandle(u32 handle);
/* Closes an owned kernel handle and clears it. */
u32 *FUN_00431fe0(u32 *handle) { if (*handle!=0) { nn_svc_CloseHandle(*handle); *handle=0; } return handle; }
}
