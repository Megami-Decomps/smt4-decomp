/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043c434` (_code @ 0x43c434, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016f988(unsigned int *, unsigned int, unsigned int, int);
int nn_applet_CTR_detail_InquireNotification(unsigned int *, int);
int software_interrupt(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern signed char g_nngxState; /* 0x5c0aa0 */
extern unsigned int g_nngxCommandState1; /* 0x5c0ab0 */
extern unsigned int g_nngxGpu; /* 0x5c0ab4 */
extern unsigned int g_nngxCriticalSection; /* 0x643080 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0016f988. */
/* Supplied declaration required: nn_applet_CTR_detail_InquireNotification. */
extern unsigned int libc_strlen(void);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_0043c434(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if (g_nngxState != '\0') {
    nn_applet_CTR_detail_InquireNotification(&g_nngxGpu,1);
    return;
  }
  nn_os_CriticalSection_Enter((unsigned int)&g_nngxCriticalSection);
  temp_v0 = (*(unsigned int *)((unsigned char *)&g_nngxGpu - 0x10));
  temp_v1 = libc_strlen();
  FUN_0016f988(&g_nngxCommandState1,temp_v0,temp_v1,0);
  g_nngxGpu = g_nngxCommandState1;
  nn_applet_CTR_detail_InquireNotification(&g_nngxGpu,1);
  software_interrupt(0x23);
  g_nngxGpu = 0;
  nn_os_CriticalSection_Leave((unsigned int)&g_nngxCriticalSection);
  return;
}

} /* extern "C" */
