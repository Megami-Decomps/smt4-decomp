/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00102ca4` (_code @ 0x102ca4, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001032b4(unsigned int);
/* Supplied declaration required: FUN_002e31ba. */


unsigned int FUN_00102ca4(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  FUN_002e31ba();
  temp_v0 = FUN_001032b4(param_2);
  if (temp_v0 != 0) {
    return 0xffffffff;
  }
  return param_1;
}
