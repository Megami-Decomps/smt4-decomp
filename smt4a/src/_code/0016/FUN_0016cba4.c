/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016cba4` (_code @ 0x16cba4, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_005880d8; /* 0x5880d8 */
extern unsigned int DAT_005880e4; /* 0x5880e4 */
extern unsigned int DAT_00618518; /* 0x618518 */

extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
extern void nn_snd_CTR_Voice_SetState(unsigned int, int);


void FUN_0016cba4(unsigned int param_1)

{
  if ((int)param_1 < 0) {
    return;
  }
  if (param_1 < DAT_005880e4) {
    nn_os_CriticalSection_Enter((unsigned int)&DAT_00618518);
    nn_snd_CTR_Voice_SetState(*(unsigned int *)(DAT_005880d8 + param_1 * 0x70),0);
    nn_os_CriticalSection_Leave((unsigned int)&DAT_00618518);
    return;
  }
  return;
}
