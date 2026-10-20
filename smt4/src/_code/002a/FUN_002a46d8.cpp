/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a46d8` (_code @ 0x2a46d8, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(int);

/* Supplied declaration required: asdMemFree. */


unsigned int FUN_002a46d8(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (param_1 < 0x43) {
    temp_v0 = param_1 * 0x10;
    if (*(int *)(temp_v0 + 0x493830) == 0) {
      return 1;
    }
    if (*(char *)(temp_v0 + 0x493838) == '\0') {
      asdMemFree(*(int *)(temp_v0 + 0x493830));
      *(unsigned int *)(temp_v0 + 0x493830) = 0;
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
