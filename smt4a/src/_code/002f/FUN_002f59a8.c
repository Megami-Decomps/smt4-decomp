/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f59a8` (_code @ 0x2f59a8, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int DAT_005c0ad8; /* 0x5c0ad8 */

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_001b4a58. */
extern void nn_os_CriticalSection_Enter(unsigned int);


void FUN_002f59a8(int param_1)

{
/* irregular: irregular input(s): in_lr; 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int unaff_r4;
  int *piVar4;
  unsigned int in_lr;
  
  piVar4 = (int *)(param_1 + 0x1c4);
  nn_os_CriticalSection_Enter((unsigned int)piVar4);
  *(unsigned int *)(param_1 + 0x1b8) = 0;
  *(unsigned int *)(param_1 + 0x1bc) = 0;
  *(unsigned int *)(param_1 + 0x1c0) = 0;
  temp_v1 = *(int *)(param_1 + 0x1cc) - 1;
  *(int *)(param_1 + 0x1cc) = temp_v1;
  if (temp_v1 != 0) {
    return;
  }
  *(unsigned int *)(param_1 + 0x1c8) = 0;
  do {
    temp_v2 = *piVar4;
    temp_v1 = -temp_v2;
    temp_v0 = (unsigned char)hasExclusiveAccess(piVar4);
  } while (!temp_v0);
  *piVar4 = temp_v1;
  if (temp_v2 != -1 && 0 < temp_v1) {
    FUN_001b4a58(DAT_005c0ad8,piVar4,0,1,0,0,unaff_r4,in_lr);
  }
  return;
}
