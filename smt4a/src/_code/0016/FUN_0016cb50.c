/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016cb50` (_code @ 0x16cb50, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_005880d8; /* 0x5880d8 */
extern unsigned int DAT_005880e4; /* 0x5880e4 */
extern unsigned int DAT_00618518; /* 0x618518 */

/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */
/* Supplied declaration required: nn_snd_CTR_Voice_SetState. */


void FUN_0016cb50(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  if ((int)param_1 < 0) {
    return;
  }
  if (param_1 < DAT_005880e4) {
    nn_os_CriticalSection_Enter(&DAT_00618518);
    nn_snd_CTR_Voice_SetState(*(unsigned int *)(DAT_005880d8 + param_1 * 0x70),2);
    nn_os_CriticalSection_Leave(&DAT_00618518);
    return;
  }
  return;
}
