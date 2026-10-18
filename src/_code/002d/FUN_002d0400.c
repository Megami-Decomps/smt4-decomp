/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d0400` (_code @ 0x2d0400, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0029909c(unsigned short);
/* Supplied declaration required: FUN_002b6700. */


unsigned int FUN_002d0400(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  temp_v0 = FUN_0029909c(*param_1);
  temp_v1 = FUN_0029909c(*param_2);
  temp_v2 = (unsigned int)((temp_v0 & ~temp_v1) != 0);
  temp_v3 = (temp_v1 & ~temp_v0) != 0;
  if (temp_v3) {
    temp_v2 = 0xffffffff;
  }
  if (!temp_v3 && temp_v2 == 0) {
    temp_v0 = (unsigned int)*param_1;
    FUN_002b6700();
    temp_v1 = (unsigned int)*param_2;
    FUN_002b6700();
    temp_v2 = 0;
    if (temp_v0 != 0 && temp_v1 != 0) {
      temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 4) - (unsigned int)*(unsigned short *)(temp_v0 + 4);
    }
  }
  return temp_v2;
}
