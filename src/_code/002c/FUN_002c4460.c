/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c4460` (_code @ 0x2c4460, 0x140 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004e3cf4; /* 0x4e3cf4 */


unsigned int * FUN_002c4460(unsigned int *param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_lr, in_r12; 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int in_r12;
  unsigned int in_lr;
  unsigned char temp_v2;
  
  temp_v1 = DAT_004e3cf4;
  temp_v2 = (((int)param_1 >> 0x1f) & 1U) != 0;
  while( 1 ) {
    if (temp_v2) {
      *param_1 = (unsigned int)&DAT_004e3cf4;
      param_1[1] = temp_v1;
      param_1[2] = in_r12;
      param_1[3] = in_lr;
      param_1 = param_1 + 4;
      temp_v2 = param_2 >= 0x20;
      param_2 = param_2 - 0x20;
    }
    if (!temp_v2) break;
    *param_1 = (unsigned int)&DAT_004e3cf4;
    param_1[1] = temp_v1;
    param_1[2] = in_r12;
    param_1[3] = in_lr;
    param_1 = param_1 + 4;
  }
  if ((unsigned char)((unsigned char)(param_2 >> 4) & 1)) {
    *param_1 = (unsigned int)&DAT_004e3cf4;
    param_1[1] = temp_v1;
    param_1[2] = in_r12;
    param_1[3] = in_lr;
    param_1 = param_1 + 4;
  }
  if ((int)(param_2 << 0x1c) < 0) {
    *param_1 = (unsigned int)&DAT_004e3cf4;
    param_1[1] = temp_v1;
    param_1 = param_1 + 2;
  }
  temp_v0 = param_2 << 0x1e;
  puVar4 = param_1;
  if ((unsigned char)((unsigned char)((param_2 << 0x1c) >> 0x1e) & 1)) {
    puVar4 = param_1 + 1;
    *param_1 = (unsigned int)&DAT_004e3cf4;
  }
  if (temp_v0 == 0) {
    return puVar4;
  }
  puVar3 = puVar4;
  if ((int)temp_v0 < 0) {
    puVar3 = (unsigned int *)((int)puVar4 + 2);
    *(unsigned short *)puVar4 = 0x3cf4;
  }
  puVar4 = puVar3;
  if ((temp_v0 & 0x40000000) != 0) {
    puVar4 = (unsigned int *)((int)puVar3 + 1);
    *(unsigned char *)puVar3 = 0xf4;
  }
  return puVar4;
}
