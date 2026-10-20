/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e6dd4` (_code @ 0x2e6dd4, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int * FUN_002e6dd4(unsigned int *param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned char *puVar4;
  int temp_v1;
  unsigned char temp_v2;
  
  if (param_2 < 4) {
    if ((unsigned char)((unsigned char)(param_2 >> 1) & 1)) {
      puVar4 = (unsigned char *)((int)param_1 + 1);
      *(unsigned char *)param_1 = 0;
      param_1 = (unsigned int *)((int)param_1 + 2);
      *puVar4 = 0;
    }
    puVar3 = param_1;
    if ((int)(param_2 << 0x1f) < 0) {
      puVar3 = (unsigned int *)((int)param_1 + 1);
      *(unsigned char *)param_1 = 0;
    }
    return puVar3;
  }
  if (((unsigned int)param_1 & 3) != 0) {
    temp_v1 = 4 - ((unsigned int)param_1 & 3);
    puVar3 = param_1;
    if (temp_v1 != 2) {
      puVar3 = (unsigned int *)((int)param_1 + 1);
      *(unsigned char *)param_1 = 0;
    }
    param_2 = param_2 - temp_v1;
    param_1 = puVar3;
    if (temp_v1 >= 2) {
      param_1 = (unsigned int *)((int)puVar3 + 2);
      *(unsigned short *)puVar3 = 0;
    }
  }
  temp_v2 = param_2 >= 0x20;
  param_2 = param_2 - 0x20;
  do {
    if (temp_v2) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1 = param_1 + 8;
      temp_v2 = param_2 >= 0x20;
      param_2 = param_2 - 0x20;
    }
  } while (temp_v2);
  if ((unsigned char)((unsigned char)(param_2 >> 4) & 1)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1 = param_1 + 4;
  }
  if ((int)(param_2 << 0x1c) < 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  temp_v0 = param_2 << 0x1e;
  puVar3 = param_1;
  if ((unsigned char)((unsigned char)((param_2 << 0x1c) >> 0x1e) & 1)) {
    puVar3 = param_1 + 1;
    *param_1 = 0;
  }
  if (temp_v0 == 0) {
    return puVar3;
  }
  puVar2 = puVar3;
  if ((int)temp_v0 < 0) {
    puVar2 = (unsigned int *)((int)puVar3 + 2);
    *(unsigned short *)puVar3 = 0;
  }
  puVar3 = puVar2;
  if ((temp_v0 & 0x40000000) != 0) {
    puVar3 = (unsigned int *)((int)puVar2 + 1);
    *(unsigned char *)puVar2 = 0;
  }
  return puVar3;
}

} /* extern "C" */
