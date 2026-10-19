/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001246cc` (_code @ 0x1246cc, 0x100 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int *DAT_00465128; /* 0x465128 */

/* Supplied declaration required: FUN_002b30fc. */


int * FUN_001246cc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int *piVar3;
  int *piVar4;
  
  piVar3 = DAT_00465128;
  piVar4 = *(int **)(param_1 - 4);
  DAT_00465128[6] = DAT_00465128[6] - 1;
  piVar3[7] = piVar3[7] - *piVar4;
  if ((*(unsigned short *)(piVar4 + 2) & 0xff) < 8) {
    piVar3 = piVar4;
    FUN_002b30fc();
    DAT_00465128[(int)piVar3 + 0xf] = DAT_00465128[(int)piVar3 + 0xf] - *piVar4;
    piVar3 = piVar4;
    FUN_002b30fc();
    DAT_00465128[(int)piVar3 + 0x17] =
         (DAT_00465128[(int)piVar3 + 0x17] - (*piVar4 - (unsigned int)*(unsigned short *)(piVar4 + 1))) + 0x3c;
  }
  piVar3 = DAT_00465128;
  temp_v0 = piVar4[3];
  piVar1 = piVar4 + 3;
  if (temp_v0 != 0) {
    if (piVar4[4] == 0) {
      DAT_00465128[1] = temp_v0;
      *(unsigned int *)(*piVar1 + 4) = 0;
    }
    else {
      *(int *)(temp_v0 + 4) = piVar4[4];
      *(int *)piVar4[4] = *piVar1;
    }
  }
  else {
    if (piVar4[4] != 0) {
      *DAT_00465128 = piVar4[4];
      piVar3 = (int *)piVar4[4];
    }
    else {
      DAT_00465128[1] = 0;
    }
    *piVar3 = 0;
  }
  if ((int *)DAT_00465128[2] == piVar1) {
    DAT_00465128[2] = 0;
  }
  *(unsigned short *)(piVar4 + 2) = 0;
  return piVar4;
}
