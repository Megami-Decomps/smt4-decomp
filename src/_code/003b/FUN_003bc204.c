/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bc204` (_code @ 0x3bc204, 0xd0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_003bc204(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int temp_v0;
  
  *param_1 = (unsigned int)(unsigned short)param_2[3];
  param_1[1] = (unsigned int)*(unsigned short *)((int)param_2 + 0xe);
  param_1[2] = (unsigned int)(unsigned short)param_2[4];
  param_1[3] = (unsigned int)*(unsigned short *)((int)param_2 + 0x12);
  param_1[4] = (unsigned int)(unsigned short)param_2[5];
  param_1[5] = (unsigned int)*(unsigned short *)((int)param_2 + 0x16);
  *(unsigned char *)(param_1 + 0xe) = 0;
  *(char *)((int)param_1 + 0x1f) = (char)param_2[1];
  *(unsigned char *)(param_1 + 8) = *(unsigned char *)((int)param_2 + 5);
  param_1[9] = param_2[2];
  temp_v0 = param_1[6];
  param_1[6] = temp_v0 | 0x40000000;
  *(unsigned char *)((int)param_1 + 0x1e) = (unsigned char)((*param_2 << 0x1b) >> 0x1d) - 1;
  if ((*param_2 & 1) != 0) {
    param_1[6] = temp_v0 | 0x40010000;
  }
  if ((*param_2 & 2) != 0) {
    param_1[6] = param_1[6] | 0x20000;
  }
  *(short *)(param_1 + 0x14) = (short)param_2[6];
  *(unsigned short *)((int)param_1 + 0x52) = *(unsigned short *)((int)param_2 + 0x1a);
  *(unsigned short *)(param_1 + 10) = 0;
  *(unsigned short *)((int)param_1 + 0x2a) = 0;
  param_1[7] = param_1[7] & 0xffffffc3;
  *(unsigned char *)(param_1 + 0xb) = 0;
  *(unsigned char *)((int)param_1 + 0x2d) = 0;
  *(unsigned char *)((int)param_1 + 0x2e) = 0;
  *(unsigned char *)((int)param_1 + 0x2f) = 0;
  return;
}
