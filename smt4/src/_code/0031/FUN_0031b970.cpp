/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031b970` (_code @ 0x31b970, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemoryFreeRegion(unsigned int *);
int FUN_002958f8(int, int);
int FUN_002a780c(unsigned int);
int FUN_002a8554(unsigned int, int *, int, int, int, int, unsigned int, unsigned int);
int hasExclusiveAccess(int *);

extern int *DAT_00465124; /* 0x465124 */
extern unsigned int DAT_00465144; /* 0x465144 */
extern unsigned int DAT_00465148; /* 0x465148 */
extern int DAT_00465154; /* 0x465154 */
extern int DAT_00465158; /* 0x465158 */
extern unsigned int DAT_00471b58; /* 0x471b58 */

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: asdMemoryFreeRegion. */
extern unsigned int *FUN_001246cc(unsigned int *);
/* Supplied declaration required: FUN_002958f8. */
/* Supplied declaration required: FUN_002a780c. */
/* Supplied declaration required: FUN_002a8554. */
extern void nn_os_CriticalSection_Enter(unsigned int);


void FUN_0031b970(unsigned int *param_1)

{
/* irregular: irregular input(s): in_lr; 5 native warning(s); review required */
  unsigned char temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int unaff_r4;
  int temp_v2;
  unsigned int in_lr;
  
  if (param_1 == (unsigned int *)0x0) {
    return;
  }
  temp_v2 = 0;
  do {
    FUN_002a780c(param_1[temp_v2 + 2]);
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 7);
  FUN_002a780c(param_1[1]);
  FUN_002a780c(*param_1);
  FUN_002a780c(param_1[0xd]);
  temp_v2 = 0;
  do {
    FUN_002a780c(param_1[temp_v2 + 0x12]);
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 8);
  FUN_002a780c(param_1[0xe]);
  FUN_002a780c(param_1[0x10]);
  FUN_002a780c(param_1[0x23]);
  FUN_002958f8((int)*(short *)(param_1 + 0x22),1);
  nn_os_CriticalSection_Enter((unsigned int)DAT_00465124);
  if ((((unsigned int)param_1 < DAT_00465144) || ((unsigned int *)(DAT_00465154 + (int)DAT_00465144) < param_1)) &&
     (((unsigned int)param_1 < DAT_00465148 || ((unsigned int *)((int)DAT_00465148 + DAT_00465158) < param_1)))) {
    param_1 = (unsigned int *)FUN_001246cc(param_1);
  }
  asdMemoryFreeRegion(param_1);
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

} /* extern "C" */
