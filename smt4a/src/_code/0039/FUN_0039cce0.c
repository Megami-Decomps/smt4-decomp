/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039cce0` (_code @ 0x39cce0, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0014aa78(void);
extern int FUN_00236038(void);


unsigned int FUN_0039cce0(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_0014aa78();
  *(int *)(temp_v1 + 0x1f0) = *(int *)(temp_v1 + 0x1f0) + temp_v0;
  return 1;
}
