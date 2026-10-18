/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bfd2c` (_code @ 0x2bfd2c, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001681cc. */
extern int FUN_002c0468(void);
extern int FUN_002e23e8(void);
/* Supplied declaration required: FUN_0031d890. */
/* Supplied declaration required: FUN_00344348. */
/* Supplied declaration required: FUN_0037bd00. */


unsigned int FUN_002bfd2c(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = FUN_002c0468();
  if (temp_v0 != 0) {
    temp_v0 = FUN_002e23e8();
    if (temp_v0 != 0) {
      FUN_0037bd00();
      FUN_001681cc(0x10d);
      *(unsigned int *)(param_1 + 0x144) = 1;
      *(unsigned int *)(param_1 + 0x14c) = 0;
      FUN_0031d890();
      temp_v1 = 3;
    }
  }
  else {
    FUN_00344348(1);
  }
  return temp_v1;
}
