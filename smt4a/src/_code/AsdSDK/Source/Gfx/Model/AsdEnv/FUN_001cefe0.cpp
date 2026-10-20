/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001cefe0` (_code @ 0x1cefe0, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nnnstdMemCpy(int *, int);

extern int *DAT_005b40e0; /* 0x5b40e0 */
extern unsigned char DAT_00646598; /* 0x646598 */

/* Supplied declaration required: nnnstdMemCpy. */


void FUN_001cefe0(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int *piVar3;
  
  if (*(int *)(&DAT_00646598 + param_2 * 4) != param_1) {
    *(int *)(&DAT_00646598 + param_2 * 4) = param_1;
    temp_v1 = 0;
    piVar3 = DAT_005b40e0 + 2;
    if (param_2 == 0x17) {
      *DAT_005b40e0 = 0;
      DAT_005b40e0[1] = 0xf00e6;
    }
    else {
      *DAT_005b40e0 = (param_2 + (param_2 >= 7)) * 0x100;
      DAT_005b40e0[1] = 0xf01c5;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      temp_v1 = *(int *)(param_1 + 0x10) + param_1 + 0x10;
    }
    temp_v0 = *(unsigned int *)(param_1 + 0xc);
    DAT_005b40e0 = piVar3;
    nnnstdMemCpy(piVar3,temp_v1);
    DAT_005b40e0 = (int *)((int)DAT_005b40e0 + (temp_v0 & 0xfffffffc));
    return;
  }
  return;
}

} /* extern "C" */
