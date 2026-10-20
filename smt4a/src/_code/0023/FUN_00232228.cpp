/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00232228` (_code @ 0x232228, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int FUN_001acf08(void);


void FUN_00232228(int param_1)

{
  int temp_v0;
  
  (**(romwright_code **)(*(int *)(param_1 + 0x18) * 0x18 + 0x5c1080))(param_1);
  temp_v0 = FUN_001acf08();
  *(int *)(param_1 + 0x1c) = temp_v0 + *(int *)(param_1 + 0x1c);
  return;
}

} /* extern "C" */
