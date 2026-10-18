/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ed510` (_code @ 0x2ed510, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b8d24. */


unsigned int FUN_002ed510(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 4);
  if (*(char *)(temp_v0 + 0x35) != '\0') {
    FUN_002b8d24(temp_v0,*(unsigned char *)(temp_v0 + 9));
    *(unsigned char *)(temp_v0 + 8) = 3;
    *(unsigned char *)(temp_v0 + 0x34) = 0;
    *(unsigned char *)(temp_v0 + 0x35) = 0;
  }
  else if (*(char *)(temp_v0 + 8) == '\0') {
    return 1;
  }
  return 0;
}
