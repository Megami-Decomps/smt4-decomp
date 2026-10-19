/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041bd84` (_code @ 0x41bd84, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00557d98; /* 0x557d98 */


void FUN_0041bd84(unsigned int *param_1,unsigned int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  float temp_v3;
  
  *param_1 = (unsigned int)&DAT_00557d98;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  temp_v0 = *(int *)(param_1[1] + 4);
  temp_v1 = *(unsigned int *)(temp_v0 + 0x1b4);
  temp_v2 = *(unsigned int *)(temp_v0 + 0x1b8);
  param_1[8] = *(unsigned int *)(temp_v0 + 0x1bc);
  param_1[6] = temp_v1;
  param_1[7] = temp_v2;
  temp_v1 = *(unsigned int *)(temp_v0 + 0x1f0);
  temp_v3 = *(float *)(temp_v0 + 500);
  temp_v2 = *(unsigned int *)(temp_v0 + 0x1f8);
  param_1[0xe] = temp_v2;
  param_1[0xc] = temp_v1;
  *(float *)&param_1[0xd] = temp_v3;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(float *)&param_1[4] = temp_v3 * 0.5f;
  param_1[0x24] = param_1[6];
  param_1[0x25] = param_1[7];
  param_1[0x26] = param_1[8];
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = temp_v2;
  param_1[0x2a] = param_1[0xc];
  *(float *)&param_1[0x2b] = temp_v3;
  *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) & 0xfffffffc;
  return;
}
