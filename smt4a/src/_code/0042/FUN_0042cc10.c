/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042cc10` (_code @ 0x42cc10, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int DAT_005c0ad8; /* 0x5c0ad8 */

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_001b4a58. */
/* Supplied declaration required: FUN_001bd354. */


void FUN_0042cc10(int *param_1)

{
/* irregular: irregular input(s): in_lr; 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int unaff_r4;
  int *piVar4;
  unsigned int in_lr;
  
  temp_v1 = *param_1;
  if (temp_v1 != -2) {
    if (temp_v1 == -1) {
      FUN_001b4a58(DAT_005c0ad8,param_1,0,1,0,0);
      return;
    }
    if (temp_v1 == 0) {
      do {
        temp_v0 = (unsigned char)hasExclusiveAccess(param_1);
      } while (!temp_v0);
      *param_1 = -1;
      return;
    }
    if (temp_v1 == 1) {
      piVar4 = param_1 + 1;
      FUN_001bd354(piVar4);
      do {
        temp_v0 = (unsigned char)hasExclusiveAccess(param_1);
      } while (!temp_v0);
      *param_1 = -2;
      FUN_001b4a58(DAT_005c0ad8,param_1,0,0xffffffff,0,0);
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
  }
  else {
    FUN_001b4a58(DAT_005c0ad8,param_1,0,0xffffffff,0,0);
  }
  return;
}
