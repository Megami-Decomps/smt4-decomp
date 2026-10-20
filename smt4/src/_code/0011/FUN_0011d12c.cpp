/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011d12c` (_code @ 0x11d12c, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int software_interrupt(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern signed char g_nngxState; /* 0x471a70 */
extern unsigned int g_nngxGpu; /* 0x471a84 */
extern unsigned int DAT_00471a8c; /* 0x471a8c */
extern unsigned int g_nngxCriticalSection; /* 0x4e6c5c */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern void nn_gxlow_CTR_InterruptReceiver_Finalize(unsigned int);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_0011d12c(void)

{
/* irregular: 1 native warning(s); review required */
  nn_os_CriticalSection_Enter((unsigned int)&g_nngxCriticalSection);
  if (g_nngxState != '\0') {
    nn_gxlow_CTR_InterruptReceiver_Finalize(DAT_00471a8c);
    software_interrupt(0x23);
    g_nngxGpu = 0;
    g_nngxState = 0;
    nn_os_CriticalSection_Leave((unsigned int)&g_nngxCriticalSection);
    return;
  }
  nn_os_CriticalSection_Leave((unsigned int)&g_nngxCriticalSection);
  return;
}

} /* extern "C" */
