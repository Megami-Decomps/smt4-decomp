/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e1708` (_code @ 0x1e1708, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern short FUN_0029abc0(unsigned short);
/* Supplied declaration required: FUN_002ae3f0. */


int FUN_001e1708(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v2 = (unsigned int)*param_1;
  if (temp_v2 == 0) {
    return 0;
  }
  if (*param_2 != 0) {
    FUN_002ae3f0();
    temp_v3 = (unsigned int)*param_2;
    FUN_002ae3f0();
    if (temp_v2 != 0) {
      if (temp_v3 == 0) {
        return 0;
      }
      temp_v0 = FUN_0029abc0(*param_1);
      temp_v1 = FUN_0029abc0(*param_2);
      return (int)temp_v0 - (int)temp_v1;
    }
  }
  return 0;
}
