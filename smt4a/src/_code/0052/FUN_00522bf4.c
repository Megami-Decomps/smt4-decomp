/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00522bf4` (_code @ 0x522bf4, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_002e6dac(int);
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_002e9520. */
/* Supplied declaration required: FUN_002e9598. */


int * FUN_00522bf4(int *param_1,int *param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  
  if (param_2 == param_1) {
    return param_1;
  }
  temp_v3 = *param_2;
  temp_v4 = param_2[1];
  puVar5 = (unsigned int *)*param_1;
  temp_v0 = (temp_v4 - temp_v3) >> 3;
  temp_v1 = (param_1[1] - (int)puVar5) >> 3;
  if ((unsigned int)((param_1[2] - (int)puVar5) >> 3) < temp_v0) {
    temp_v6 = temp_v1 + (temp_v1 >> 1) + (temp_v1 >> 3);
    if (temp_v6 < temp_v1 + 0x20) {
      temp_v6 = temp_v1 + 0x20;
    }
    if (temp_v6 <= temp_v0) {
      temp_v6 = temp_v0;
    }
    temp_v2 = FUN_002e6dac(temp_v6 << 3);
    temp_v5 = param_2[1];
    temp_v4 = temp_v2;
    for (temp_v3 = *param_2; temp_v3 != temp_v5; temp_v3 = temp_v3 + 8) {
      if (temp_v4 != 0) {
        FUN_002e9520(temp_v4,temp_v3);
      }
      temp_v4 = temp_v4 + 8;
    }
    puVar6 = (unsigned int *)param_1[1];
    for (puVar5 = (unsigned int *)*param_1; puVar5 != puVar6; puVar5 = puVar5 + 2) {
      (**(romwright_code **)*puVar5)(puVar5);
    }
    FUN_002e6e14(*param_1);
    *param_1 = temp_v2;
    param_1[1] = temp_v2 + ((param_2[1] - *param_2) >> 3) * 8;
    param_1[2] = temp_v2 + temp_v6 * 8;
  }
  else if (temp_v1 >= temp_v0) {
    for (; temp_v3 != temp_v4; temp_v3 = temp_v3 + 8) {
      FUN_002e9598(puVar5,temp_v3);
      puVar5 = puVar5 + 2;
    }
    puVar6 = (unsigned int *)param_1[1];
    for (; puVar5 != puVar6; puVar5 = puVar5 + 2) {
      (**(romwright_code **)*puVar5)(puVar5);
    }
    temp_v3 = *param_1 + ((param_2[1] - *param_2) >> 3) * 8;
    param_1[1] = temp_v3;
    param_1[2] = temp_v3;
  }
  else {
    temp_v4 = temp_v3 + temp_v1 * 8;
    for (; temp_v3 != temp_v4; temp_v3 = temp_v3 + 8) {
      FUN_002e9598(puVar5,temp_v3);
      puVar5 = puVar5 + 2;
    }
    param_1[1] = *param_1 + ((param_2[1] - *param_2) >> 3) * 8;
    temp_v2 = param_2[1];
    temp_v3 = *param_1 + temp_v1 * 8;
    for (temp_v4 = *param_2 + temp_v1 * 8; temp_v4 != temp_v2; temp_v4 = temp_v4 + 8) {
      if (temp_v3 != 0) {
        FUN_002e9520(temp_v3,temp_v4);
      }
      temp_v3 = temp_v3 + 8;
    }
  }
  return param_1;
}
