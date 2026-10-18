/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e4684` (_code @ 0x2e4684, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00249a44. */
extern int FUN_0024c740(unsigned short);


int FUN_002e4684(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = (unsigned int)*param_1;
  FUN_00249a44();
  temp_v1 = (unsigned int)*param_2;
  FUN_00249a44();
  temp_v2 = FUN_0024c740(*(unsigned short *)(temp_v0 + 0x26));
  temp_v3 = FUN_0024c740(*(unsigned short *)(temp_v1 + 0x26));
  temp_v2 = temp_v2 - temp_v3;
  if (temp_v2 == 0) {
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v0 + 0x26) - (unsigned int)*(unsigned short *)(temp_v1 + 0x26);
  }
  return temp_v2;
}
