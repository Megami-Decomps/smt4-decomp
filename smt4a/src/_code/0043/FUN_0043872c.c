/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043872c` (_code @ 0x43872c, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00102c58(unsigned int);


unsigned int FUN_0043872c(unsigned int param_1,unsigned int param_2,unsigned int *param_3)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = 0;
  while( 1 ) {
    temp_v0 = temp_v2 * 8;
    if (((*(int *)(temp_v0 + 0x54eb34) != 0) && (*(unsigned int *)(temp_v0 + 0x54eb38) <= param_2)) &&
       (temp_v1 = FUN_00102c58(param_1), temp_v1 == 0)) break;
    temp_v2 = temp_v2 + 1;
    if ((int)temp_v2 >= 0x84) {
      return 0x85;
    }
  }
  *param_3 = *(unsigned int *)(temp_v0 + 0x54eb38);
  return temp_v2 & 0xff;
}
