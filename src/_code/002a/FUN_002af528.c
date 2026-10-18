/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002af528` (_code @ 0x2af528, 0xdc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

unsigned int FUN_002af528(int *param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int temp_v1;
  
  if ((int)(param_1[3] & 0x3fffffffU) >= (int)param_2) {
    temp_v0 = 1;
  }
  else {
    piVar2 = (int *)*param_1;
    if ((piVar2 != (int *)0x0) && ((param_1[3] & 0xc0000000U) == 0x40000000)) {
      puVar3 = (unsigned int *)(**(romwright_code **)(*piVar2 + 8))(piVar2,param_2 << 2,0x20);
      puVar4 = (unsigned int *)param_1[1];
      puVar6 = (unsigned int *)param_1[2];
      temp_v1 = 0;
      puVar5 = puVar3;
      if (puVar4 != puVar6) {
        do {
          if (puVar5 != (unsigned int *)0x0) {
            *puVar5 = *puVar4;
          }
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        } while (puVar4 != puVar6);
        temp_v1 = (param_1[2] - param_1[1]) >> 2;
      }
      if (param_1[1] != 0) {
        (**(romwright_code **)(*(int *)*param_1 + 0xc))();
      }
      param_1[2] = (int)(puVar3 + temp_v1);
      param_1[1] = (int)puVar3;
      param_1[3] = (param_1[3] & 0xc0000000U) | param_2;
      return 1;
    }
    temp_v0 = 0;
  }
  return temp_v0;
}
