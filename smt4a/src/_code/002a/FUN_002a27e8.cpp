/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a27e8` (_code @ 0x2a27e8, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00227048(unsigned int, int);

/* Supplied declaration required: FUN_00227048. */


unsigned int FUN_002a27e8(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *param_1;
  if (*(char *)(temp_v0 + 0x10e) != '\0') {
    FUN_00227048(*(unsigned int *)(temp_v0 + 8),temp_v0 + 0x24);
  }
  return 0;
}

} /* extern "C" */
