/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023b49c` (_code @ 0x23b49c, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023e3ec(int, unsigned int);
int FUN_002a5ed0(int, unsigned int);
int FUN_002a6100(int, unsigned int);

/* Supplied declaration required: FUN_0023e3ec. */
/* Supplied declaration required: FUN_002a5ed0. */
/* Supplied declaration required: FUN_002a6100. */


void FUN_0023b49c(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  if ((param_2 & 8) != 0) {
    temp_v0 = 0x16;
    FUN_0023e3ec(0x16,param_3);
  }
  else {
    if ((param_2 & 0x40) == 0) {
      if ((param_2 & 1) == 0) {
        return;
      }
      temp_v0 = 0x16;
      FUN_002a5ed0(0x16,param_3);
      *(unsigned int *)(param_1 + 8) = temp_v0;
      return;
    }
    temp_v0 = 0x16;
    FUN_002a6100(0x16,param_3);
  }
  *(unsigned int *)(param_1 + 8) = temp_v0;
  return;
}

} /* extern "C" */
