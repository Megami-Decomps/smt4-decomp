/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050d0ac` (_code @ 0x50d0ac, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

unsigned int FUN_0050d0ac(unsigned int *param_1,unsigned int param_2,int *param_3,unsigned int param_4)

{
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  int *piVar4;
  int *piVar5;
  unsigned int *puVar6;
  unsigned char temp_v2;
  
  *param_3 = 0;
  puVar6 = param_1 + 2;
  piVar1 = (int *)param_1[1];
  piVar5 = (int *)(param_1 + 2);
  while (piVar4 = piVar1, piVar4 != (int *)(param_1 + 2)) {
    if ((unsigned int)piVar4[4] < param_2) {
      piVar1 = (int *)piVar4[1];
    }
    else {
      piVar1 = (int *)*piVar4;
      piVar5 = piVar4;
    }
  }
  temp_v2 = puVar6 <= (unsigned int *)piVar5;
  if (piVar5 != (int *)puVar6) {
    piVar4 = (int *)piVar5[4];
    temp_v2 = param_2 <= (unsigned int)piVar4;
  }
  if (temp_v2 && (piVar5 != (int *)puVar6 && piVar4 != (int *)param_2)) {
    piVar5 = (int *)puVar6;
  }
  if (piVar5 == (int *)(param_1 + 2)) {
    temp_v0 = 0x51;
  }
  else {
    temp_v1 = (*(romwright_code *)piVar5[6])(*param_1,param_4);
    *param_3 = temp_v1;
    if (temp_v1 == 0) {
      temp_v0 = 0x44;
    }
    else {
      temp_v0 = 0;
    }
  }
  return temp_v0;
}
