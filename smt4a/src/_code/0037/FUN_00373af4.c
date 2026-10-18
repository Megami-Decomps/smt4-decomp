/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00373af4` (_code @ 0x373af4, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0014aa78(void);
extern unsigned int FUN_00236038(unsigned int);


unsigned int FUN_00373af4(void)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  if (temp_v0 < 0x10) {
    temp_v2 = FUN_0014aa78();
    *(unsigned int *)(temp_v2 + temp_v0 * 4 + 0x4c88) = temp_v1;
  }
  return 1;
}
