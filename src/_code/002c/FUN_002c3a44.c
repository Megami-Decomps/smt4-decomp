/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c3a44` (_code @ 0x2c3a44, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004e3cf4; /* 0x4e3cf4 */

/* Supplied declaration required: FUN_00146ce0. */
/* Supplied declaration required: FUN_00146cf0. */


unsigned int *
FUN_002c3a44(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5
            )

{
/* irregular: irregular input(s): in_r12; 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int in_r12;
  unsigned int temp_v4;
  unsigned char temp_v5;
  
  FUN_00146ce0(param_1 + 0x18,param_4);
  temp_v4 = 0x2c3a74;
  FUN_00146cf0(param_1 + 0x18,param_5);
  temp_v1 = DAT_004e3cf4;
  puVar3 = (unsigned int *)((int)temp_v2 >> 0x20);
  temp_v5 = (((int)temp_v2 >> 0x1f) & 1U) != 0;
  temp_v3 = temp_v2;
  while( 1 ) {
    if (temp_v5) {
      *puVar3 = (unsigned int)&DAT_004e3cf4;
      puVar3[1] = temp_v1;
      puVar3[2] = in_r12;
      puVar3[3] = temp_v4;
      puVar3 = puVar3 + 4;
      temp_v5 = temp_v3 >= 0x20;
      temp_v3 = temp_v3 - 0x20;
    }
    if (!temp_v5) break;
    *puVar3 = (unsigned int)&DAT_004e3cf4;
    puVar3[1] = temp_v1;
    puVar3[2] = in_r12;
    puVar3[3] = temp_v4;
    puVar3 = puVar3 + 4;
  }
  if ((unsigned char)((unsigned char)(temp_v3 >> 4) & 1)) {
    *puVar3 = (unsigned int)&DAT_004e3cf4;
    puVar3[1] = temp_v1;
    puVar3[2] = in_r12;
    puVar3[3] = temp_v4;
    puVar3 = puVar3 + 4;
  }
  if ((int)(temp_v3 << 0x1c) < 0) {
    *puVar3 = (unsigned int)&DAT_004e3cf4;
    puVar3[1] = temp_v1;
    puVar3 = puVar3 + 2;
  }
  temp_v0 = temp_v3 << 0x1e;
  puVar4 = puVar3;
  if ((unsigned char)((unsigned char)((temp_v3 << 0x1c) >> 0x1e) & 1)) {
    puVar4 = puVar3 + 1;
    *puVar3 = (unsigned int)&DAT_004e3cf4;
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
