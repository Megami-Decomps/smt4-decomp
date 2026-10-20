/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00313648` (_code @ 0x313648, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int *DAT_00581288; /* 0x581288 */
extern unsigned char DAT_005f17ac; /* 0x5f17ac */

extern int FUN_00162e8c(void);


void FUN_00313648(int param_1)

{
  int *piVar1;
  int temp_v0;
  
  temp_v0 = FUN_00162e8c();
  piVar1 = DAT_00581288;
  if (*DAT_00581288 != param_1) {
    DAT_00581288[1] = 0;
    *piVar1 = param_1;
    piVar1[2] = 0;
    piVar1[0x9d] = 0;
    piVar1[0x9e] = 0;
    *(unsigned int *)(temp_v0 + 0x1518) = 0;
    *(unsigned int *)(temp_v0 + 0x151c) = 0;
    if (*piVar1 == 1) {
      piVar1[0x16] = 0x40a00000;
    }
    else if ((*piVar1 == 3) || (DAT_005f17ac = 0, *piVar1 == 3)) {
      *(unsigned short *)(piVar1 + 0x67) = 0;
    }
  }
  return;
}

} /* extern "C" */
