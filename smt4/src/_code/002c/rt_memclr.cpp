/* NON_MATCHING: romwright 0.5.0 decompilation of `rt_memclr` (_code @ 0x2c3944, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int * rt_memclr(unsigned int *param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned char *puVar3;
  unsigned int *puVar4;
  int temp_v1;
  unsigned char temp_v2;
  
  if (param_2 < 4) {
    if ((unsigned char)((unsigned char)(param_2 >> 1) & 1)) {
      puVar3 = (unsigned char *)((int)param_1 + 1);
      *(unsigned char *)param_1 = 0;
      param_1 = (unsigned int *)((int)param_1 + 2);
      *puVar3 = 0;
    }
    puVar2 = param_1;
    if ((int)(param_2 << 0x1f) < 0) {
      puVar2 = (unsigned int *)((int)param_1 + 1);
      *(unsigned char *)param_1 = 0;
    }
    return puVar2;
  }
  if (((unsigned int)param_1 & 3) != 0) {
    temp_v1 = 4 - ((unsigned int)param_1 & 3);
    puVar2 = param_1;
    if (temp_v1 != 2) {
      puVar2 = (unsigned int *)((int)param_1 + 1);
      *(unsigned char *)param_1 = 0;
    }
    param_2 = param_2 - temp_v1;
    param_1 = puVar2;
    if (temp_v1 >= 2) {
      param_1 = (unsigned int *)((int)puVar2 + 2);
      *(unsigned short *)puVar2 = 0;
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
  puVar2 = param_1;
  if ((unsigned char)((unsigned char)((param_2 << 0x1c) >> 0x1e) & 1)) {
    puVar2 = param_1 + 1;
    *param_1 = 0;
  }
  if (temp_v0 == 0) {
    return puVar2;
  }
  puVar4 = puVar2;
  if ((int)temp_v0 < 0) {
    puVar4 = (unsigned int *)((int)puVar2 + 2);
    *(unsigned short *)puVar2 = 0;
  }
  puVar2 = puVar4;
  if ((temp_v0 & 0x40000000) != 0) {
    puVar2 = (unsigned int *)((int)puVar4 + 1);
    *(unsigned char *)puVar4 = 0;
  }
  return puVar2;
}

} /* extern "C" */
