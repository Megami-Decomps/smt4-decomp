/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00515a9c` (_code @ 0x515a9c, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

unsigned int FUN_00515a9c(int *param_1,unsigned int *param_2)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v0;
  unsigned int *puVar5;
  unsigned int temp_v1;
  unsigned int *puVar7;
  int temp_v2;
  
  temp_v1 = param_1[3];
  temp_v0 = temp_v1 & 0x3fffffff;
  if ((int)temp_v0 <= (param_1[2] - param_1[1]) >> 2) {
    if (temp_v0 != 0) {
      temp_v0 = temp_v0 << 1;
    }
    else {
      temp_v0 = 1;
    }
    if ((temp_v1 & 0x3fffffff) < temp_v0) {
      piVar1 = (int *)*param_1;
      temp_v2 = 0;
      if (((piVar1 == (int *)0x0) || ((temp_v1 & 0xc0000000) != 0x40000000)) ||
         (puVar2 = (unsigned int *)(**(romwright_code **)(*piVar1 + 8))(piVar1,temp_v0 << 2,0x20),
         puVar2 == (unsigned int *)0x0)) {
        return 0;
      }
      puVar3 = (unsigned int *)param_1[1];
      puVar7 = (unsigned int *)param_1[2];
      puVar5 = puVar2;
      if (puVar3 != puVar7) {
        do {
          if (puVar5 != (unsigned int *)0x0) {
            *puVar5 = *puVar3;
          }
          puVar3 = puVar3 + 1;
          puVar5 = puVar5 + 1;
        } while (puVar3 != puVar7);
        temp_v2 = (param_1[2] - param_1[1]) >> 2;
      }
      if (param_1[1] != 0) {
        param_1[2] = param_1[1];
        (**(romwright_code **)(*(int *)*param_1 + 0xc))();
      }
      param_1[2] = (int)(puVar2 + temp_v2);
      param_1[1] = (int)puVar2;
      param_1[3] = (param_1[3] & 0xc0000000U) | temp_v0;
    }
  }
  if ((unsigned int *)param_1[2] != (unsigned int *)0x0) {
    *(unsigned int *)param_1[2] = *param_2;
  }
  param_1[2] = param_1[2] + 4;
  return 1;
}

} /* extern "C" */
