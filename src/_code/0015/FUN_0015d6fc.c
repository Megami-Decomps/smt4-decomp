/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015d6fc` (_code @ 0x15d6fc, 0x124 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int *DAT_004652a0; /* 0x4652a0 */


void FUN_0015d6fc(int param_1,unsigned int *param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v2 = *param_2;
  temp_v1 = param_2[1];
  temp_v4 = 0;
  if ((temp_v2 & 0x80000000) != 0) {
    temp_v4 = 0x8000;
  }
  if ((temp_v2 & 0x7fffffff) == 0) {
    temp_v3 = 0;
    temp_v4 = ((temp_v2 & 0x7fffff) >> 0xd) | temp_v4 | ((temp_v3 & 0x1f) << 10);
  }
  else {
    temp_v3 = ((temp_v2 & 0x7fffffff) >> 0x17) - 0x70;
    if (-1 < (int)temp_v3) {
      if ((int)temp_v3 >= 0x20) {
        temp_v4 = 0x7c00;
      }
      else {
        temp_v4 = ((temp_v2 & 0x7fffff) >> 0xd) | temp_v4 | ((temp_v3 & 0x1f) << 10);
      }
    }
  }
  temp_v2 = 0;
  if ((temp_v1 & 0x80000000) != 0) {
    temp_v2 = 0x8000;
  }
  if ((temp_v1 & 0x7fffffff) == 0) {
    temp_v3 = 0;
    temp_v2 = ((temp_v1 & 0x7fffff) >> 0xd) | temp_v2 | ((temp_v3 & 0x1f) << 10);
  }
  else {
    temp_v3 = ((temp_v1 & 0x7fffffff) >> 0x17) - 0x70;
    if (-1 < (int)temp_v3) {
      if ((int)temp_v3 >= 0x20) {
        temp_v2 = 0x7c00;
      }
      else {
        temp_v2 = ((temp_v1 & 0x7fffff) >> 0xd) | temp_v2 | ((temp_v3 & 0x1f) << 10);
      }
    }
  }
  temp_v3 = param_2[2];
  temp_v1 = 0;
  if ((temp_v3 & 0x80000000) != 0) {
    temp_v1 = 0x8000;
  }
  if ((temp_v3 & 0x7fffffff) == 0) {
    temp_v0 = 0;
    temp_v1 = ((temp_v3 & 0x7fffff) >> 0xd) | temp_v1 | ((temp_v0 & 0x1f) << 10);
  }
  else {
    temp_v0 = ((temp_v3 & 0x7fffffff) >> 0x17) - 0x70;
    if ((int)temp_v0 >= 0) {
      if ((int)temp_v0 >= 0x20) {
        temp_v1 = 0x7c00;
        DAT_004652a0[2] = temp_v1;
        DAT_004652a0[3] = 0;
        *DAT_004652a0 = temp_v4 | (temp_v2 << 0x10);
        DAT_004652a0[1] = param_1 * 0x10 + 0x801f0144;
        DAT_004652a0 = DAT_004652a0 + 4;
        return;
      }
      temp_v1 = ((temp_v3 & 0x7fffff) >> 0xd) | temp_v1 | ((temp_v0 & 0x1f) << 10);
    }
  }
  DAT_004652a0[2] = temp_v1;
  DAT_004652a0[3] = 0;
  *DAT_004652a0 = temp_v4 | (temp_v2 << 0x10);
  DAT_004652a0[1] = param_1 * 0x10 + 0x801f0144;
  DAT_004652a0 = DAT_004652a0 + 4;
  return;
}
