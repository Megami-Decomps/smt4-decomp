/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d0fcc` (_code @ 0x3d0fcc, 0xd4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int btlUnitGet(void);


void FUN_003d0fcc(int *param_1,int param_2,int param_3)

{
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = btlUnitGet();
  if (param_3 == 2) {
    temp_v2 = 0;
    temp_v1 = 0x6d;
    puVar3 = *(unsigned int **)(*param_1 + 0x1fc0);
    do {
      if (((*puVar3 & 1) != 0) && ((*puVar3 & 0x40) == 0)) {
        *(unsigned char *)(temp_v0 + temp_v2 + 0x38) = 1;
      }
      temp_v1 = temp_v1 - 1;
      puVar3 = puVar3 + 0xa2;
      temp_v2 = temp_v2 + 1;
    } while (temp_v1 != 0);
    return;
  }
  temp_v1 = *param_1;
  temp_v2 = 0;
  if (param_2 == 1) {
    param_1 = (int *)0x32;
  }
  puVar3 = *(unsigned int **)(temp_v1 + 0x1fc0);
  if (param_2 == 1) {
    puVar3 = puVar3 + 0x288;
    do {
      temp_v3 = *puVar3;
      puVar3 = puVar3 + 0xa2;
      if ((temp_v3 & 0x400) != 0) {
        *(unsigned char *)(temp_v0 + temp_v2 + 0x3c) = 1;
      }
      temp_v2 = temp_v2 + 1;
      param_1 = (int *)((int)param_1 - 1);
    } while (param_1 != (int *)0x0);
    return;
  }
  temp_v1 = 0x6d;
  do {
    if (((*puVar3 & 0x400) != 0) && ((*puVar3 & 0x20) == 0)) {
      *(unsigned char *)(temp_v0 + temp_v2 + 0x38) = 1;
    }
    temp_v1 = temp_v1 - 1;
    puVar3 = puVar3 + 0xa2;
    temp_v2 = temp_v2 + 1;
  } while (temp_v1 != 0);
  return;
}

} /* extern "C" */
