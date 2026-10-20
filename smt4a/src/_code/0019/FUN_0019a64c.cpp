/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019a64c` (_code @ 0x19a64c, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019c40c(void);

extern int *DAT_005b4030; /* 0x5b4030 */

/* Supplied declaration required: FUN_0019c40c. */


void FUN_0019a64c(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  
  piVar1 = DAT_005b4030;
  DAT_005b4030[6] = DAT_005b4030[6] + 1;
  piVar1[7] = piVar1[7] + *param_1;
  if ((*(unsigned short *)(piVar1 + 0xe) & 0xff) < 8) {
    piVar1 = param_1;
    FUN_0019c40c();
    DAT_005b4030[(int)piVar1 + 0xf] = *param_1 + DAT_005b4030[(int)piVar1 + 0xf];
    piVar1 = param_1;
    FUN_0019c40c();
    DAT_005b4030[(int)piVar1 + 0x17] =
         ((*param_1 - (unsigned int)*(unsigned short *)(param_1 + 1)) - 0x40) + DAT_005b4030[(int)piVar1 + 0x17];
  }
  piVar1 = DAT_005b4030;
  piVar2 = param_1 + 5;
  if (*DAT_005b4030 != 0) {
    *piVar2 = DAT_005b4030[1];
    DAT_005b4030[1] = (int)piVar2;
    *(int **)(*piVar2 + 4) = piVar2;
    param_1[6] = 0;
  }
  else {
    DAT_005b4030[1] = (int)piVar2;
    *piVar1 = (int)piVar2;
    param_1[6] = 0;
    *piVar2 = 0;
  }
  *(short *)(param_1 + 2) = (short)DAT_005b4030[0xe];
  return;
}

} /* extern "C" */
