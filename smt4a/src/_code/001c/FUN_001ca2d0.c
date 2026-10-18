/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ca2d0` (_code @ 0x1ca2d0, 0x1a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_6_stack;


void FUN_001ca2d0(int *param_1,int param_2,unsigned int param_3,int param_4,int param_5,int param_6)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  
  temp_v0 = param_1[1];
  param_1[1] = 0x20;
  temp_v3 = param_1[2];
  if (temp_v3 < 0x20) {
    temp_v3 = 0x20;
  }
  param_1[2] = temp_v3;
  param_1[1] = temp_v0;
  *param_1 = param_5 * 4 + ((*param_1 + 0x1fU) & 0xffffffe0);
  if (temp_v0 <= (unsigned int)param_1[2]) {
    temp_v0 = param_1[2];
  }
  param_1[2] = temp_v0;
  temp_v1 = param_1[1];
  if (param_4 != 0) {
    temp_v2 = (((*param_1 + temp_v1) - 1U) & ~(temp_v1 - 1U)) + 0x14;
    *param_1 = temp_v2;
    temp_v1 = (((temp_v2 + param_1[1]) - 1U) & ~(temp_v1 - 1U)) + param_4 * 4;
  }
  else {
    temp_v1 = (((*param_1 + temp_v1) - 1U) & ~(temp_v1 - 1U)) + 0x14;
  }
  *param_1 = temp_v1;
  temp_v1 = (int)(((param_3 & 0xff) | ((((int)(param_3 << 0x10) >> 0x18) & 0xffU) << 8)) << 0x10) >>
          0x18;
  temp_v4 = temp_v1 != 0;
  if (temp_v4 && param_2 != 0) {
    temp_v1 = *(int *)(param_2 + 0x28);
  }
  if ((temp_v4 && param_2 != 0) && temp_v1 != 0) {
    temp_v2 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x2c;
    *param_1 = temp_v2;
    temp_v2 = (((temp_v2 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + temp_v1 * 4;
    *param_1 = temp_v2;
    *param_1 = (((temp_v2 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + temp_v1 * param_6 * 4;
  }
  temp_v1 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x14;
  if (param_4 != 0) {
    *param_1 = temp_v1;
    temp_v1 = (((temp_v1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + param_4 * 4;
  }
  *param_1 = temp_v1;
  return;
}
