/* NON_MATCHING: romwright 0.5.0 decompilation of `asdMemoryFreeLocked` (_code @ 0x25011c, 0x4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemoryFreeRegion(unsigned int);
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
extern unsigned int FUN_001246cc(unsigned int);
/* Supplied declaration required: FUN_002a8554. */
extern void nn_os_CriticalSection_Enter(unsigned int);


void asdMemoryFreeLocked(unsigned int param_1)

{
/* irregular: irregular input(s): in_lr; 3 native warning(s); review required */
  unsigned char temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  unsigned int unaff_r4;
  unsigned int in_lr;
  
  nn_os_CriticalSection_Enter((unsigned int)DAT_00465124);
  if (((param_1 < DAT_00465144) || (DAT_00465154 + DAT_00465144 < param_1)) &&
     ((param_1 < DAT_00465148 || (DAT_00465148 + DAT_00465158 < param_1)))) {
    param_1 = FUN_001246cc(param_1);
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
