/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00126eb0` (_code @ 0x126eb0, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_0044d100; /* 0x44d100 */
extern unsigned int DAT_0044d10c; /* 0x44d10c */
extern unsigned int DAT_004c40f8; /* 0x4c40f8 */

extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
extern void nn_snd_CTR_Voice_SetState(unsigned int, int);


void FUN_00126eb0(unsigned int param_1)

{
  if ((int)param_1 < 0) {
    return;
  }
  if (param_1 < DAT_0044d10c) {
    nn_os_CriticalSection_Enter((unsigned int)&DAT_004c40f8);
    nn_snd_CTR_Voice_SetState(*(unsigned int *)(DAT_0044d100 + param_1 * 0x70),0);
    nn_os_CriticalSection_Leave((unsigned int)&DAT_004c40f8);
    return;
  }
  return;
}
