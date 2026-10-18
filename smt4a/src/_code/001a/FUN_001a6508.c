/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a6508` (_code @ 0x1a6508, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00570260; /* 0x570260 */

extern int FUN_001b2d88(unsigned int, int, unsigned int);
extern int FUN_001b3148(unsigned int);
extern int FUN_001b3214(unsigned int);


unsigned int FUN_001a6508(unsigned int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if ((param_4 == 0) || (temp_v0 = FUN_001b3148(DAT_00570260), temp_v1 = 0, temp_v0 != 0)) {
    temp_v0 = FUN_001b3214(param_2);
    if (temp_v0 == -1) {
      temp_v1 = 0;
    }
    else {
      temp_v0 = FUN_001b2d88(param_1,temp_v0,param_3);
      temp_v1 = 0;
      if (temp_v0 != 0) {
        temp_v1 = 1;
      }
    }
  }
  return temp_v1;
}
