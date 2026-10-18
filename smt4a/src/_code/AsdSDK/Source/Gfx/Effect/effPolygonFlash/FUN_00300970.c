/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00300970` (_code @ 0x300970, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_001acf08(void);


void FUN_00300970(int param_1)

{
  int temp_v0;
  
  (**(romwright_code **)(*(int *)(param_1 + 0x38) * 0x1c + 0x5c11b8))(param_1);
  temp_v0 = FUN_001acf08();
  *(int *)(param_1 + 0x34) = temp_v0 + *(int *)(param_1 + 0x34);
  return;
}
