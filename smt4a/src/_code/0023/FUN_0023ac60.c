/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023ac60` (_code @ 0x23ac60, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f69c; /* 0x57f69c */

/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_0023ac60(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0057f69c + param_1 * 0x50;
  rt_memcpy_w(temp_v0 + 0x5f0c,param_2,0x50);
  *(unsigned char *)(temp_v0 + 0x5f22) = *(unsigned char *)(temp_v0 + 0x5f22) | 1;
  return 1;
}
