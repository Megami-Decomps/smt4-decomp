/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c37f0` (_code @ 0x2c37f0, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int DAT_00471b58; /* 0x471b58 */

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_002a8554. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */


void FUN_002c37f0(int param_1)

{
/* irregular: irregular input(s): in_lr; 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int unaff_r4;
  int *piVar4;
  unsigned int in_lr;
  
  piVar4 = (int *)(param_1 + 0x1c4);
  nn_os_CriticalSection_Enter(piVar4);
  *(unsigned int *)(param_1 + 0x1b8) = 0;
  *(unsigned int *)(param_1 + 0x1bc) = 0;
  *(unsigned int *)(param_1 + 0x1c0) = 0;
  temp_v2 = *(int *)(param_1 + 0x1cc) - 1;
  *(int *)(param_1 + 0x1cc) = temp_v2;
  if (temp_v2 != 0) {
    return;
  }
  *(unsigned int *)(param_1 + 0x1c8) = 0;
  do {
    temp_v1 = *piVar4;
    temp_v2 = -temp_v1;
    temp_v0 = (unsigned char)hasExclusiveAccess(piVar4);
  } while (!temp_v0);
  *piVar4 = temp_v2;
  if (temp_v1 != -1 && 0 < temp_v2) {
    FUN_002a8554(DAT_00471b58,piVar4,0,1,0,0,unaff_r4,in_lr);
  }
  return;
}
