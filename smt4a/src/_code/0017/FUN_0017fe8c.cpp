/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017fe8c` (_code @ 0x17fe8c, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019c40c(void);

typedef int romwright_code(...);
extern int *DAT_005b4030; /* 0x5b4030 */

/* Supplied declaration required: FUN_0019c40c. */


int * FUN_0017fe8c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int *piVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 - 4);
  if ((romwright_code *)piVar4[3] != (romwright_code *)0x0) {
    (*(romwright_code *)piVar4[3])(param_1,piVar4[4]);
  }
  piVar3 = DAT_005b4030;
  DAT_005b4030[6] = DAT_005b4030[6] - 1;
  piVar3[7] = piVar3[7] - *piVar4;
  if ((*(unsigned short *)(piVar4 + 2) & 0xff) < 8) {
    piVar3 = piVar4;
    FUN_0019c40c();
    DAT_005b4030[(int)piVar3 + 0xf] = DAT_005b4030[(int)piVar3 + 0xf] - *piVar4;
    piVar3 = piVar4;
    FUN_0019c40c();
    DAT_005b4030[(int)piVar3 + 0x17] =
         (DAT_005b4030[(int)piVar3 + 0x17] - (*piVar4 - (unsigned int)*(unsigned short *)(piVar4 + 1))) + 0x40;
  }
  piVar3 = DAT_005b4030;
  temp_v0 = piVar4[5];
  piVar1 = piVar4 + 5;
  if (temp_v0 != 0) {
    if (piVar4[6] == 0) {
      DAT_005b4030[1] = temp_v0;
      *(unsigned int *)(*piVar1 + 4) = 0;
    }
    else {
      *(int *)(temp_v0 + 4) = piVar4[6];
      *(int *)piVar4[6] = *piVar1;
    }
  }
  else {
    if (piVar4[6] != 0) {
      *DAT_005b4030 = piVar4[6];
      piVar3 = (int *)piVar4[6];
    }
    else {
      DAT_005b4030[1] = 0;
    }
    *piVar3 = 0;
  }
  if ((int *)DAT_005b4030[2] == piVar1) {
    DAT_005b4030[2] = 0;
  }
  *(unsigned short *)(piVar4 + 2) = 0;
  piVar4[3] = 0;
  piVar4[4] = 0;
  return piVar4;
}

} /* extern "C" */
