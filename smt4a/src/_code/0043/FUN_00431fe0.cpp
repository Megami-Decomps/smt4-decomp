#include "common.h"
#include "nn/svc.h"
extern "C" {
/* Closes an owned kernel handle and clears it. */
u32 *FUN_00431fe0(u32 *handle) { if (*handle!=0) { svcCloseHandle(*handle); *handle=0; } return handle; }
}
