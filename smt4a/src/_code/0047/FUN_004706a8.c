/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004706a8` (_code @ 0x4706a8, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00570260; /* 0x570260 */

extern int FUN_001b2d88(unsigned int, unsigned int, unsigned int);
extern int FUN_001b3148(unsigned int);


unsigned int FUN_004706a8(unsigned int param_1,unsigned int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_001b3148(DAT_00570260);
  temp_v1 = 0;
  if ((temp_v0 != 0) && (temp_v0 = FUN_001b2d88(param_1,0x38,param_2), temp_v1 = 0, temp_v0 != 0)) {
    temp_v1 = 1;
  }
  return temp_v1;
}
