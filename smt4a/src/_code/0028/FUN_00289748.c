/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00289748` (_code @ 0x289748, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned int *FUN_00164a9c(void);


unsigned int FUN_00289748(void)

{
  unsigned int *puVar1;
  int temp_v0;
  float temp_v1;
  
  puVar1 = (unsigned int *)FUN_00164a9c();
  (**(romwright_code **)(*(int *)*puVar1 + 8))();
  temp_v0 = (**(romwright_code **)(*(int *)*puVar1 + 0x18))();
  if ((temp_v0 != 0) &&
     (temp_v1 = (float)puVar1[1], puVar1[1] = temp_v1 + 1.0f, (float)puVar1[2] <= temp_v1 + 1.0f)) {
    return 0xffffffff;
  }
  return 0;
}
