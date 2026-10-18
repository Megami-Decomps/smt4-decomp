/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004230c0` (_code @ 0x4230c0, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int *DAT_005880d4; /* 0x5880d4 */
extern int DAT_005880d8; /* 0x5880d8 */
extern unsigned int DAT_005880e4; /* 0x5880e4 */
extern unsigned int DAT_005c0ad8; /* 0x5c0ad8 */
extern int DAT_00618518; /* 0x618518 */
extern unsigned int DAT_0061851c; /* 0x61851c */
extern int DAT_00618520; /* 0x618520 */

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_001afdc4. */
/* Supplied declaration required: FUN_001b4a58. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */


void FUN_004230c0(unsigned int param_1)

{
/* irregular: irregular input(s): in_lr; 4 native warning(s); review required */
  int temp_v0;
  unsigned int unaff_r4;
  int *piVar2;
  unsigned int in_lr;
  unsigned char temp_v1;
  
  if ((int)param_1 < 0) {
    return;
  }
  if (DAT_005880e4 <= param_1) {
    return;
  }
  nn_os_CriticalSection_Enter(&DAT_00618518);
  piVar2 = (int *)(DAT_005880d8 + param_1 * 0x70);
  if (*piVar2 != 0) {
    FUN_001afdc4();
    *piVar2 = 0;
  }
  if (piVar2[1] != 0) {
    (**(romwright_code **)(*DAT_005880d4 + 4))();
    piVar2[1] = 0;
  }
  DAT_00618520 = DAT_00618520 - 1;
  if (DAT_00618520 != 0) {
    return;
  }
  DAT_0061851c = 0;
  do {
    temp_v0 = -DAT_00618518;
    temp_v1 = (unsigned char)hasExclusiveAccess(0x618518);
  } while (!temp_v1);
  temp_v1 = DAT_00618518 != -1;
  DAT_00618518 = temp_v0;
  if (temp_v1 && 0 < temp_v0) {
    FUN_001b4a58(DAT_005c0ad8,&DAT_00618518,0,1,0,0,unaff_r4,in_lr);
  }
  return;
}
