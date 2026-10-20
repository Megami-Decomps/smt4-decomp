/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a08d0` (_code @ 0x1a08d0, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b4a58(...);
int FUN_001bd354(int *);
int hasExclusiveAccess(int *);

extern unsigned int DAT_005c0ad8; /* 0x5c0ad8 */

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_001b4a58. */
/* Supplied declaration required: FUN_001bd354. */


void FUN_001a08d0(int param_1)

{
/* irregular: irregular input(s): in_lr; 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  unsigned int unaff_r4;
  int *piVar5;
  unsigned int in_lr;
  
  piVar3 = (int *)(param_1 + 4);
  if (*piVar3 != -1) {
    if (*piVar3 == -2) {
      piVar5 = (int *)(param_1 + 8);
      FUN_001bd354(piVar5);
      do {
        temp_v0 = (unsigned char)hasExclusiveAccess(piVar3);
      } while (!temp_v0);
      *piVar3 = 1;
      FUN_001b4a58(DAT_005c0ad8,piVar3,0,0xffffffff,0,0);
      do {
        temp_v2 = *piVar5;
        temp_v1 = -temp_v2;
        temp_v0 = (unsigned char)hasExclusiveAccess(piVar5);
      } while (!temp_v0);
      *piVar5 = temp_v1;
      if (temp_v2 != -1 && 0 < temp_v1) {
        FUN_001b4a58(DAT_005c0ad8,piVar5,0,1,0,0,unaff_r4,in_lr);
      }
      return;
    }
  }
  else {
    do {
      temp_v0 = (unsigned char)hasExclusiveAccess(piVar3);
    } while (!temp_v0);
    *piVar3 = 0;
    FUN_001b4a58(DAT_005c0ad8,piVar3,0,1,0,0);
  }
  return;
}

} /* extern "C" */
