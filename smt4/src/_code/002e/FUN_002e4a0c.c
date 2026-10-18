/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e4a0c` (_code @ 0x2e4a0c, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002ae238. */


int FUN_002e4a0c(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = (unsigned int)*param_1;
  FUN_002ae238();
  temp_v1 = (unsigned int)*param_2;
  FUN_002ae238();
  temp_v2 = (unsigned int)*(unsigned char *)(temp_v0 + 0x55) - (unsigned int)*(unsigned char *)(temp_v1 + 0x55);
  if (temp_v2 == 0) {
    temp_v0 = (unsigned int)*param_1;
    FUN_002ae238();
    temp_v1 = (unsigned int)*param_2;
    FUN_002ae238();
    temp_v2 = (unsigned int)*(unsigned char *)(temp_v0 + 0x54) - (unsigned int)*(unsigned char *)(temp_v1 + 0x54);
  }
  return temp_v2;
}
