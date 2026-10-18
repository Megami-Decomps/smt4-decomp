/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00206f7c` (_code @ 0x206f7c, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b4854. */


int FUN_00206f7c(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = (unsigned int)*param_1;
  FUN_002b4854();
  temp_v1 = (unsigned int)*param_2;
  FUN_002b4854();
  temp_v2 = (*(unsigned int *)(temp_v0 + 0x70) & 0xff) - (*(unsigned int *)(temp_v1 + 0x70) & 0xff);
  if (temp_v2 == 0) {
    temp_v0 = (unsigned int)*param_1;
    FUN_002b4854();
    temp_v1 = (unsigned int)*param_2;
    FUN_002b4854();
    temp_v2 = (unsigned int)*(unsigned char *)(temp_v0 + 0x6f) - (unsigned int)*(unsigned char *)(temp_v1 + 0x6f);
  }
  return temp_v2;
}
