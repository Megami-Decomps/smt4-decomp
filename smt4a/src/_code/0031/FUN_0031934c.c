/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031934c` (_code @ 0x31934c, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_0019de98. */
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_002277d8. */
extern unsigned int FUN_0036d18c(unsigned int);


unsigned int FUN_0031934c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = FUN_00224880(*(unsigned int *)(param_1 + 0xf4));
  if (temp_v0 == 2) {
    *(unsigned int *)(param_1 + 0x144) = 1;
    temp_v1 = FUN_0036d18c(0x34);
    FUN_0019de98(temp_v1,0xf4f4f4ff);
    FUN_001681cc(0x10d);
    FUN_002277d8();
    temp_v1 = 3;
  }
  return temp_v1;
}
