/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c4cfc` (_code @ 0x3c4cfc, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_004ffba8(unsigned int);


unsigned int FUN_003c4cfc(int *param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if ((*(char *)(*param_1 + 0x9b4) == '\0') ||
     (temp_v0 = FUN_004ffba8(*(unsigned int *)(*(int *)(*param_1 + 0x9c8) + 4)), temp_v0 == 0)) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}
