/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a20a8` (_code @ 0x2a20a8, 0x88 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int *DAT_004652a0; /* 0x4652a0 */
extern unsigned char DAT_004e9dc8; /* 0x4e9dc8 */

/* Supplied declaration required: FUN_002acd38. */


void FUN_002a20a8(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int *piVar3;
  
  if (*(int *)(&DAT_004e9dc8 + param_2 * 4) != param_1) {
    *(int *)(&DAT_004e9dc8 + param_2 * 4) = param_1;
    temp_v1 = 0;
    piVar3 = DAT_004652a0 + 2;
    if (param_2 == 0x17) {
      *DAT_004652a0 = 0;
      DAT_004652a0[1] = 0xf00e6;
    }
    else {
      *DAT_004652a0 = (param_2 + (param_2 >= 7)) * 0x100;
      DAT_004652a0[1] = 0xf01c5;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      temp_v1 = *(int *)(param_1 + 0x10) + param_1 + 0x10;
    }
    temp_v0 = *(unsigned int *)(param_1 + 0xc);
    DAT_004652a0 = piVar3;
    FUN_002acd38(piVar3,temp_v1);
    DAT_004652a0 = (int *)((int)DAT_004652a0 + (temp_v0 & 0xfffffffc));
    return;
  }
  return;
}
