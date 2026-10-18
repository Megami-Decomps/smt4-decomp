/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031324c` (_code @ 0x31324c, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002498ec. */
extern int FUN_0024c52c(unsigned short);


int FUN_0031324c(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = (unsigned int)*param_1;
  FUN_002498ec();
  temp_v1 = (unsigned int)*param_2;
  FUN_002498ec();
  temp_v2 = FUN_0024c52c(*(unsigned short *)(temp_v0 + 0x26));
  temp_v3 = FUN_0024c52c(*(unsigned short *)(temp_v1 + 0x26));
  temp_v3 = temp_v3 - temp_v2;
  if (temp_v3 == 0) {
    temp_v3 = (unsigned int)*(unsigned short *)(temp_v1 + 0x26) - (unsigned int)*(unsigned short *)(temp_v0 + 0x26);
  }
  return temp_v3;
}
