/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fe4f8` (_code @ 0x2fe4f8, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055b2d0; /* 0x55b2d0 */

extern int FUN_002fd5d4(unsigned int *, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002fe39c. */


int FUN_002fe4f8(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                unsigned int param_5)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055b2d0;
  temp_v0 = FUN_002fd5d4(param_1 + 1,param_2,param_3,param_4,param_4);
  *(unsigned int *)(temp_v0 + 0x70) = 0;
  *(unsigned int *)(temp_v0 + 0x6c) = 0;
  *(unsigned int *)(temp_v0 + 0x74) = 0xffffffff;
  *(unsigned int *)(temp_v0 + 0x80) = 0;
  *(unsigned int *)(temp_v0 + 0x7c) = 0;
  *(unsigned int *)(temp_v0 + 0x8c) = param_5;
  *(unsigned int *)(temp_v0 + 0x84) = param_4;
  *(unsigned int *)(temp_v0 + 0x88) = 0;
  FUN_002fe39c(temp_v0 - 4,param_3);
  return temp_v0 - 4;
}
