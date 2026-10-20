/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038d238` (_code @ 0x38d238, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0014aa78(void);


unsigned int FUN_0038d238(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_0014aa78();
  temp_v1 = *(int *)(temp_v0 + 0x4e58);
  temp_v2 = *(int *)(temp_v0 + 0x4e5c);
  if (temp_v1 != temp_v2) {
    temp_v2 = temp_v2 - ((temp_v2 - temp_v1) & 0xfffffffeU);
    *(int *)(temp_v0 + 0x4e5c) = temp_v2;
  }
  temp_v1 = *(int *)(temp_v0 + 0x4e58);
  if (temp_v1 != temp_v2) {
    *(unsigned int *)(temp_v0 + 0x4e5c) = temp_v2 - ((temp_v2 - temp_v1) & 0xfffffffeU);
  }
  return 1;
}

} /* extern "C" */
