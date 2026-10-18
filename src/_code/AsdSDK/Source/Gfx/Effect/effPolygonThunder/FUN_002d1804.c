/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d1804` (_code @ 0x2d1804, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_00269cb8(void);


void FUN_002d1804(int param_1)

{
  int temp_v0;
  
  (**(romwright_code **)(*(int *)(param_1 + 0x2c) * 0x18 + 0x4727b4))(param_1);
  temp_v0 = FUN_00269cb8();
  *(int *)(param_1 + 0x28) = temp_v0 + *(int *)(param_1 + 0x28);
  return;
}
