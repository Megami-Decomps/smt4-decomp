/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00281814` (_code @ 0x281814, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001681cc. */
extern int FUN_002c083c(void);
extern int FUN_002e2630(void);
/* Supplied declaration required: FUN_0031d890. */
/* Supplied declaration required: FUN_003447a0. */
/* Supplied declaration required: FUN_0037c618. */


unsigned int FUN_00281814(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = FUN_002c083c();
  if (temp_v0 != 0) {
    temp_v0 = FUN_002e2630();
    if (temp_v0 != 0) {
      FUN_0037c618();
      FUN_001681cc(0x10d);
      *(unsigned int *)(param_1 + 0x144) = 1;
      *(unsigned int *)(param_1 + 0x14c) = 0;
      FUN_0031d890();
      temp_v1 = 3;
    }
  }
  else {
    FUN_003447a0();
  }
  return temp_v1;
}
