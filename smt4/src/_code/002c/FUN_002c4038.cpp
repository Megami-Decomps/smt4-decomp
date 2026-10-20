/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c4038` (_code @ 0x2c4038, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a8554(...);
int hasExclusiveAccess(int *);

extern unsigned int DAT_00471b58; /* 0x471b58 */

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_002a8554. */
extern void nn_os_SimpleLock_Lock(unsigned int);


void FUN_002c4038(int param_1)

{
/* irregular: irregular input(s): in_lr; 2 native warning(s); review required */
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
      nn_os_SimpleLock_Lock((unsigned int)piVar5);
      do {
        temp_v0 = (unsigned char)hasExclusiveAccess(piVar3);
      } while (!temp_v0);
      *piVar3 = 1;
      FUN_002a8554(DAT_00471b58,piVar3,0,0xffffffff,0,0);
      do {
        temp_v2 = *piVar5;
        temp_v1 = -temp_v2;
        temp_v0 = (unsigned char)hasExclusiveAccess(piVar5);
      } while (!temp_v0);
      *piVar5 = temp_v1;
      if (temp_v2 != -1 && 0 < temp_v1) {
        FUN_002a8554(DAT_00471b58,piVar5,0,1,0,0,unaff_r4,in_lr);
      }
      return;
    }
  }
  else {
    do {
      temp_v0 = (unsigned char)hasExclusiveAccess(piVar3);
    } while (!temp_v0);
    *piVar3 = 0;
    FUN_002a8554(DAT_00471b58,piVar3,0,1,0,0);
  }
  return;
}

} /* extern "C" */
