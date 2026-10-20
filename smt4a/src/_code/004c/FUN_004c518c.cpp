/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c518c` (_code @ 0x4c518c, 0x158 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern int FUN_001633a0(unsigned int);


int FUN_004c518c(int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned short *puVar3;
  unsigned short temp_v2;
  unsigned char temp_v3;
  int temp_v4 [11];
  
  temp_v3 = *(unsigned short *)(param_1 + 0x2b6) >> 10 != 2;
  if (temp_v3) {
    temp_v4[0] = 0;
  }
  temp_v0 = (unsigned int)temp_v3;
  if (*(unsigned short *)(param_1 + 0x2b8) >> 10 != 2) {
    temp_v4[temp_v0] = 1;
    temp_v0 = temp_v0 + 1;
  }
  temp_v3 = *(unsigned short *)(param_1 + 0x2ba) >> 10 != 2;
  if (temp_v3) {
    temp_v4[temp_v0] = 2;
  }
  if (temp_v3) {
    temp_v0 = temp_v0 + 1;
  }
  if (*(unsigned short *)(param_1 + 700) >> 10 != 2) {
    temp_v4[temp_v0] = 3;
    temp_v0 = temp_v0 + 1;
  }
  if (*(unsigned short *)(param_1 + 0x2be) >> 10 != 2) {
    temp_v4[temp_v0] = 4;
    temp_v0 = temp_v0 + 1;
  }
  if (*(unsigned short *)(param_1 + 0x2c0) >> 10 != 2) {
    temp_v4[temp_v0] = 5;
    temp_v0 = temp_v0 + 1;
  }
  if (*(unsigned short *)(param_1 + 0x2c2) >> 10 != 2) {
    temp_v4[temp_v0] = 6;
    temp_v0 = temp_v0 + 1;
  }
  if (*(unsigned short *)(param_1 + 0x2c4) >> 10 != 2) {
    temp_v4[temp_v0] = 7;
    temp_v0 = temp_v0 + 1;
  }
  if (temp_v0 == 0) {
    return -1;
  }
  temp_v1 = FUN_001633a0((temp_v0 - 1) & 0xffff);
  temp_v1 = temp_v4[temp_v1];
  puVar3 = (unsigned short *)(param_1 + temp_v1 * 2 + 0x2b6);
  temp_v2 = *puVar3;
  switch(temp_v2 >> 10) {
  case 0:
    temp_v2 = 0x87d;
    break;
  case 1:
    temp_v2 = 0x1432;
    break;
  default:
    return temp_v1;
  case 3:
  case 4:
    temp_v2 = (temp_v2 & 0x3ff) | 0x400;
    break;
  case 5:
    temp_v2 = 100;
  }
  *puVar3 = temp_v2;
  return temp_v1;
}

} /* extern "C" */
