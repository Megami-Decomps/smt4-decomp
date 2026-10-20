/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00373d0c` (_code @ 0x373d0c, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0014aa78(void);
extern int FUN_00236038(void);


unsigned int FUN_00373d0c(void)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_0014aa78();
  if (temp_v0 == 0) {
    temp_v2 = 0;
  }
  else {
    temp_v2 = 0xffffffff;
  }
  *(unsigned int *)(temp_v1 + 0x4ce0) = temp_v2;
  return 1;
}

} /* extern "C" */
