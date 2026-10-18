/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00263910` (_code @ 0x263910, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0025a274(unsigned int);
extern int FUN_002d569c(unsigned int);
extern int FUN_002d56fc(unsigned int);


unsigned int FUN_00263910(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0025a274(*(unsigned int *)(param_1 + 8));
  temp_v1 = 0;
  if (((temp_v0 != 0) && (temp_v0 = FUN_002d569c(*(unsigned int *)(param_1 + 8)), temp_v1 = 0, temp_v0 != 0))
     && (temp_v0 = FUN_002d56fc(*(unsigned int *)(param_1 + 8)), temp_v1 = 0, temp_v0 != 0)) {
    temp_v1 = 1;
  }
  return temp_v1;
}
