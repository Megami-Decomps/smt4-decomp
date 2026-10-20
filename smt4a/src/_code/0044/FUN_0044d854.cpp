/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0044d854` (_code @ 0x44d854, 0x164 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

unsigned int * FUN_0044d854(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  romwright_code *pcVar6;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int *puVar9;
  
  *param_1 = param_2;
  temp_v3 = param_1[0xc];
  temp_v0 = param_1[0xd];
  pcVar6 = (romwright_code *)(temp_v0 - param_1[0xc]);
  if (temp_v3 < (unsigned int)param_1[0xd]) {
    temp_v0 = (int)pcVar6 * 0x10000000;
  }
  if (temp_v3 < (unsigned int)param_1[0xd]) {
    temp_v0 = temp_v0 >> 0x1f;
  }
  else {
    temp_v0 = 0;
  }
  temp_v1 = temp_v0 + 1;
  if (temp_v1 < ((int)pcVar6 >> 3) + 1) {
    pcVar6 = (romwright_code *)(((int)pcVar6 >> 3) + 1);
    do {
      temp_v1 = temp_v1 + 2;
    } while (temp_v1 < (int)pcVar6);
  }
  param_1[0xd] = temp_v3;
  if ((int *)param_1[0xb] != (int *)0x0 && temp_v3 != 0) {
    pcVar6 = *(romwright_code **)(*(int *)param_1[0xb] + 0xc);
    (*pcVar6)();
  }
  temp_v3 = param_1[9];
  temp_v0 = param_1[8];
  if (temp_v0 < temp_v3) {
    pcVar6 = (romwright_code *)(temp_v3 - temp_v0);
  }
  if (temp_v0 < temp_v3) {
    temp_v6 = ((unsigned int)pcVar6 & 0xf) >> 3;
  }
  else {
    temp_v6 = 0;
  }
  temp_v2 = temp_v6 + 1;
  temp_v1 = (int)(temp_v3 - temp_v0) >> 3;
  if (temp_v2 < temp_v1 + 1) {
    do {
      temp_v2 = temp_v2 + 2;
    } while (temp_v2 < temp_v1 + 1);
  }
  param_1[9] = temp_v0;
  if ((int *)param_1[7] != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*(int *)param_1[7] + 0xc))();
    temp_v0 = temp_v4;
  }
  temp_v7 = param_1[5];
  temp_v2 = param_1[4];
  for (temp_v1 = temp_v2; temp_v1 != temp_v7; temp_v1 = temp_v1 + 0xc) {
    puVar9 = *(unsigned int **)(temp_v1 + 4);
    temp_v3 = temp_v1 + 4;
    if (puVar9 != (unsigned int *)0x0) {
      temp_v3 = (unsigned int)*(unsigned char *)(temp_v1 + 8);
    }
    if (puVar9 != (unsigned int *)0x0 && temp_v3 != 0) {
      (**(romwright_code **)*puVar9)(puVar9);
      (**(romwright_code **)(*(int *)puVar9[1] + 0xc))((int *)puVar9[1],puVar9);
      temp_v0 = temp_v5;
    }
  }
  param_1[5] = temp_v2;
  piVar4 = (int *)param_1[3];
  if (piVar4 != (int *)0x0) {
    temp_v0 = param_1[4];
  }
  if (piVar4 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*piVar4 + 0xc))();
  }
  return param_1;
}

} /* extern "C" */
