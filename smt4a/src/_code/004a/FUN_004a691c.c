/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a691c` (_code @ 0x4a691c, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0039a598(unsigned short);
extern int FUN_003a6868(unsigned short);
/* Supplied declaration required: FUN_00480ba0. */


int FUN_004a691c(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = (unsigned int)*param_1;
  FUN_00480ba0();
  temp_v1 = (unsigned int)*param_2;
  FUN_00480ba0();
  temp_v2 = FUN_0039a598(*(unsigned short *)(temp_v0 + 0x26));
  temp_v3 = FUN_0039a598(*(unsigned short *)(temp_v1 + 0x26));
  temp_v2 = temp_v2 - temp_v3;
  if (temp_v2 == 0) {
    temp_v2 = FUN_003a6868(*(unsigned short *)(temp_v0 + 0x26));
    temp_v3 = FUN_003a6868(*(unsigned short *)(temp_v1 + 0x26));
    temp_v2 = temp_v2 - temp_v3;
    if (temp_v2 == 0) {
      temp_v2 = (unsigned int)*param_1 - (unsigned int)*param_2;
    }
  }
  return temp_v2;
}
