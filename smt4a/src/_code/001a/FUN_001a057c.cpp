/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a057c` (_code @ 0x1a057c, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_4_stack;


unsigned int * FUN_001a057c(unsigned int *param_1,unsigned int param_2,unsigned int *param_3,int param_4)

{
  unsigned int *puVar1;
  int temp_v0;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  
  *param_1 = param_2 | 0x80000000;
  param_1[1] = 0xf02c0;
  param_1[2] = param_3[3];
  param_1[3] = (param_4 * 0x400000 - 0x100000U) | 0xf02c1;
  param_1[4] = param_3[2];
  param_1[5] = param_3[1];
  puVar1 = param_1 + 7;
  param_1[6] = *param_3;
  temp_v0 = param_4 - 1;
  if (0 < temp_v0) {
    puVar4 = param_3 + 7;
    puVar5 = param_3 + 6;
    puVar3 = param_3 + 5;
    puVar6 = puVar1;
    do {
      param_3 = param_3 + 4;
      temp_v0 = temp_v0 - 1;
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 4;
      puVar6[1] = *puVar5;
      puVar5 = puVar5 + 4;
      puVar6[2] = *puVar3;
      puVar3 = puVar3 + 4;
      puVar6[3] = *param_3;
      puVar6 = puVar6 + 4;
    } while (temp_v0 != 0);
    puVar1 = puVar1 + (param_4 * 4 - 4);
  }
  *puVar1 = 0;
  return puVar1 + 1;
}

} /* extern "C" */
