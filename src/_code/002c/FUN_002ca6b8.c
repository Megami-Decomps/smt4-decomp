/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ca6b8` (_code @ 0x2ca6b8, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_001f5e18. */


unsigned int FUN_002ca6b8(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = *param_1;
  (**(romwright_code **)(temp_v1 + *(int *)(temp_v1 + 0x14c) * 4 + 300))();
  temp_v0 = 0;
  if (*(char *)(temp_v1 + 0x154) != '\0') {
    if (*(char *)(temp_v1 + 4) == '\0') {
      FUN_001f5e18();
    }
    temp_v0 = 0xffffffff;
  }
  return temp_v0;
}
