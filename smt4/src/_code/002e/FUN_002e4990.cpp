/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e4990` (_code @ 0x2e4990, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ae238(void);

extern int FUN_0028fb40(unsigned short);
/* Supplied declaration required: FUN_002ae238. */


int FUN_002e4990(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_0028fb40(*param_1);
  temp_v1 = FUN_0028fb40(*param_2);
  temp_v1 = temp_v1 - temp_v0;
  if (temp_v1 == 0) {
    temp_v2 = (unsigned int)*param_1;
    FUN_002ae238();
    temp_v3 = (unsigned int)*param_2;
    FUN_002ae238();
    temp_v1 = (unsigned int)*(unsigned char *)(temp_v2 + 0x54) - (unsigned int)*(unsigned char *)(temp_v3 + 0x54);
  }
  return temp_v1;
}

} /* extern "C" */
