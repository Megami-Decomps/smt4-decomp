/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bb9c0` (_code @ 0x4bb9c0, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;


void FUN_004bb9c0(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int temp_v0;
  
  *param_1 = (unsigned int)(unsigned short)param_2[5];
  param_1[1] = (unsigned int)*(unsigned short *)((int)param_2 + 0x16);
  param_1[2] = (unsigned int)(unsigned short)param_2[6];
  param_1[3] = (unsigned int)*(unsigned short *)((int)param_2 + 0x1a);
  param_1[4] = (unsigned int)(unsigned short)param_2[7];
  param_1[5] = (unsigned int)*(unsigned short *)((int)param_2 + 0x1e);
  *(unsigned char *)(param_1 + 0xf) = 0;
  *(char *)(param_1 + 8) = (char)param_2[1];
  *(unsigned char *)((int)param_1 + 0x21) = *(unsigned char *)((int)param_2 + 5);
  param_1[9] = param_2[2];
  temp_v0 = param_1[6];
  param_1[6] = temp_v0 | 0x40000000;
  *(unsigned char *)((int)param_1 + 0x1f) = (unsigned char)((*param_2 << 0x1b) >> 0x1d) - 1;
  if ((*param_2 & 1) != 0) {
    param_1[6] = temp_v0 | 0x40010000;
  }
  if ((*param_2 & 2) != 0) {
    param_1[6] = param_1[6] | 0x20000;
  }
  *(short *)(param_1 + 0x15) = (short)param_2[8];
  *(unsigned short *)((int)param_1 + 0x56) = *(unsigned short *)((int)param_2 + 0x22);
  *(short *)(param_1 + 0x16) = (short)param_2[9];
  *(unsigned short *)((int)param_1 + 0x5a) = *(unsigned short *)((int)param_2 + 0x26);
  temp_v0 = param_1[7];
  *(unsigned short *)(param_1 + 10) = 0;
  *(unsigned short *)((int)param_1 + 0x2a) = 0;
  param_1[7] = temp_v0 & 0xffffff81;
  *(unsigned char *)(param_1 + 0xb) = 0;
  *(unsigned char *)((int)param_1 + 0x2d) = 0;
  *(unsigned char *)((int)param_1 + 0x2e) = 0;
  *(unsigned char *)((int)param_1 + 0x2f) = 0;
  *(unsigned short *)((int)param_1 + 0x5e) = (unsigned short)(unsigned char)((*param_2 << 0xd) >> 0x18);
  param_1[0x18] = 0;
  param_1[7] = ((*param_2 >> 0xc) & 0x80) | (temp_v0 & 0xffffff01);
  param_1[6] = param_1[6] & 0x7fffffff;
  return;
}

} /* extern "C" */
