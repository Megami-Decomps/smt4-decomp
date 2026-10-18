/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047cb0c` (_code @ 0x47cb0c, 0x14c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0014e3bc. */


unsigned int FUN_0047cb0c(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int *puVar4;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar9;
  
  temp_v5 = *param_1;
  temp_v2 = 0;
  temp_v0 = *(int *)(temp_v5 + 0x14);
  temp_v4 = *(int *)(temp_v5 + 0x2c);
  temp_v3 = *(int *)(temp_v5 + 0x1c) + temp_v5;
  piVar9 = (int *)(*(int *)(temp_v5 + 0x24) + temp_v5);
  temp_v1 = temp_v3;
  if (0 < *(int *)(temp_v5 + 0x20)) {
    do {
      if (*(int *)(temp_v1 + 0xc) == -1) {
        *(unsigned int *)(temp_v1 + 0xc) = 0;
      }
      else {
        *(int *)(temp_v1 + 0xc) = temp_v0 + temp_v5 + *(int *)(temp_v1 + 0xc) * 0x50;
      }
      temp_v2 = temp_v2 + 1;
      temp_v1 = temp_v1 + 0x14;
    } while (temp_v2 < *(int *)(temp_v5 + 0x20));
  }
  temp_v1 = 0;
  piVar3 = piVar9;
  if (0 < *(int *)(temp_v5 + 0x28)) {
    do {
      temp_v1 = temp_v1 + 1;
      *piVar3 = temp_v3 + *piVar3 * 0x14;
      piVar3[2] = piVar3[2] + temp_v4 + temp_v5;
      piVar3 = piVar3 + 4;
    } while (temp_v1 < *(int *)(temp_v5 + 0x28));
  }
  piVar3 = (int *)0x2c;
  FUN_0014e3bc(0x2c,0);
  if (*(int *)(temp_v5 + 0x28) < 1) {
    *piVar3 = 0;
  }
  else {
    temp_v1 = *(int *)(temp_v5 + 0x28) << 5;
    FUN_0014e3bc(temp_v1,0);
    *piVar3 = temp_v1;
  }
  puVar4 = (unsigned int *)*piVar3;
  temp_v1 = 0;
  if (temp_v1 < *(int *)(temp_v5 + 0x28)) {
    do {
      *puVar4 = (unsigned int)piVar3;
      puVar4[1] = (unsigned int)piVar9;
      temp_v1 = temp_v1 + 1;
      puVar4 = puVar4 + 8;
      piVar9 = piVar9 + 4;
    } while (temp_v1 < *(int *)(temp_v5 + 0x28));
  }
  piVar3[1] = temp_v5;
  piVar3[2] = temp_v5;
  *(int **)param_1[1] = piVar3;
  return 1;
}
