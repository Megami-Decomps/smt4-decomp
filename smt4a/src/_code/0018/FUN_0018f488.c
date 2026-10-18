/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018f488` (_code @ 0x18f488, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001a063c. */


void FUN_0018f488(unsigned int param_1,unsigned short *param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned short *puVar1;
  int temp_v0;
  int *piVar3;
  unsigned char temp_v1;
  
  if ((*param_2 & 1) == 0) {
    return;
  }
  temp_v0 = param_3 + *(int *)(param_3 + 0x48) * 0x20;
  piVar3 = (int *)(temp_v0 + 8);
  if (*(short *)(*piVar3 + (unsigned int)param_2[0x10] * 4 + 2) != 0) {
    puVar1 = (unsigned short *)(*piVar3 + (unsigned int)param_2[0x10] * 4);
    temp_v1 = *(char *)(param_3 + 0x4c) == '\0';
    if (temp_v1) {
      piVar3 = *(int **)(temp_v0 + 0x10);
    }
    if (!temp_v1) {
      piVar3 = (int *)piVar3[3];
    }
    FUN_001a063c(param_1,(unsigned int)*puVar1 + (int)piVar3,puVar1[1]);
  }
  return;
}
