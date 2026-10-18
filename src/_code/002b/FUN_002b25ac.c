/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b25ac` (_code @ 0x2b25ac, 0xe0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int *DAT_00465128; /* 0x465128 */

/* Supplied declaration required: FUN_002b32e0. */


void FUN_002b25ac(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  
  piVar1 = DAT_00465128;
  DAT_00465128[6] = DAT_00465128[6] + 1;
  piVar1[7] = piVar1[7] + *param_1;
  if ((*(unsigned short *)(piVar1 + 0xe) & 0xff) < 8) {
    piVar1 = param_1;
    FUN_002b32e0();
    DAT_00465128[(int)piVar1 + 0xf] = *param_1 + DAT_00465128[(int)piVar1 + 0xf];
    piVar1 = param_1;
    FUN_002b32e0();
    DAT_00465128[(int)piVar1 + 0x17] =
         ((*param_1 - (unsigned int)*(unsigned short *)(param_1 + 1)) - 0x3c) + DAT_00465128[(int)piVar1 + 0x17];
  }
  piVar1 = DAT_00465128;
  piVar2 = param_1 + 3;
  if (*DAT_00465128 != 0) {
    *piVar2 = DAT_00465128[1];
    DAT_00465128[1] = (int)piVar2;
    *(int **)(*piVar2 + 4) = piVar2;
    param_1[4] = 0;
  }
  else {
    DAT_00465128[1] = (int)piVar2;
    *piVar1 = (int)piVar2;
    param_1[4] = 0;
    *piVar2 = 0;
  }
  *(short *)(param_1 + 2) = (short)DAT_00465128[0xe];
  return;
}
