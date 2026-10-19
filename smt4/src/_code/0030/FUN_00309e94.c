/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00309e94` (_code @ 0x309e94, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int *DAT_00465124; /* 0x465124 */
extern unsigned int DAT_00465144; /* 0x465144 */
extern unsigned int DAT_00465148; /* 0x465148 */
extern int DAT_00465154; /* 0x465154 */
extern int DAT_00465158; /* 0x465158 */
extern unsigned int DAT_00471b58; /* 0x471b58 */

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_001245c4. */
extern unsigned int *FUN_001246cc(unsigned int *);
/* Supplied declaration required: FUN_002a780c. */
/* Supplied declaration required: FUN_002a8554. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */


void FUN_00309e94(unsigned int *param_1)

{
/* irregular: irregular input(s): in_lr; 5 native warning(s); review required */
  unsigned char temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  unsigned int unaff_r4;
  unsigned int in_lr;
  
  if (param_1 == (unsigned int *)0x0) {
    return;
  }
  FUN_002a780c(*param_1);
  FUN_002a780c(param_1[1]);
  FUN_002a780c(param_1[2]);
  nn_os_CriticalSection_Enter(DAT_00465124);
  if (((param_1 < DAT_00465144) || ((unsigned int *)(DAT_00465154 + (int)DAT_00465144) < param_1)) &&
     ((param_1 < DAT_00465148 || ((unsigned int *)((int)DAT_00465148 + DAT_00465158) < param_1)))) {
    param_1 = (unsigned int *)FUN_001246cc(param_1);
  }
  FUN_001245c4(param_1);
  piVar2 = DAT_00465124;
  temp_v2 = DAT_00465124[2];
  DAT_00465124[2] = temp_v2 - 1;
  if (temp_v2 - 1 != 0) {
    return;
  }
  piVar2[1] = 0;
  do {
    temp_v1 = *piVar2;
    temp_v2 = -temp_v1;
    temp_v0 = (unsigned char)hasExclusiveAccess(piVar2);
  } while (!temp_v0);
  *piVar2 = temp_v2;
  if (temp_v1 != -1 && 0 < temp_v2) {
    FUN_002a8554(DAT_00471b58,piVar2,0,1,0,0,unaff_r4,in_lr);
  }
  return;
}
