/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034afd4` (_code @ 0x34afd4, 0x104 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00420900; /* 0x420900 */

/* Supplied declaration required: FUN_001ff8c4. */
/* Supplied declaration required: FUN_002b2ae8. */


unsigned int * FUN_0034afd4(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  param_1[2] = 0;
  temp_v0 = 0;
  param_1[1] = param_2;
  *param_1 = (unsigned int)&DAT_00420900;
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
  FUN_001ff8c4(*(unsigned int *)(param_1[1] + 8),0,param_1 + 0xc);
  FUN_002b2ae8(*(unsigned int *)(param_1[1] + 8),0,param_1 + 6);
  param_1[9] = temp_v0;
  param_1[10] = temp_v0;
  param_1[0xb] = temp_v0;
  param_1[3] = temp_v0;
  *(float *)&param_1[4] = (float)param_1[0xd] * 0.5f;
  param_1[5] = temp_v0;
  param_1[0x24] = param_1[6];
  param_1[0x25] = param_1[7];
  param_1[0x26] = param_1[8];
  param_1[0x27] = temp_v0;
  param_1[0x28] = temp_v0;
  param_1[0x29] = temp_v0;
  param_1[0x2a] = param_1[0xc];
  param_1[0x2b] = param_1[0xd];
  param_1[0x2c] = param_1[0xe];
  puVar1 = (unsigned int *)param_1[1];
  *puVar1 = *puVar1 & 0xfffffffd;
  *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 1;
  return param_1;
}
