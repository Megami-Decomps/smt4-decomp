/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015a270` (_code @ 0x15a270, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001701c0(unsigned int);
int software_interrupt(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern signed char g_nngxState; /* 0x5c0aa0 */
extern unsigned int g_nngxGpu; /* 0x5c0ab4 */
extern unsigned int DAT_005c0abc; /* 0x5c0abc */
extern unsigned int g_nngxCriticalSection; /* 0x643080 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001701c0. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_0015a270(void)

{
/* irregular: 2 native warning(s); review required */
  nn_os_CriticalSection_Enter((unsigned int)&g_nngxCriticalSection);
  if (g_nngxState != '\0') {
    FUN_001701c0(DAT_005c0abc);
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
