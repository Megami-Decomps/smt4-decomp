/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ab834` (_code @ 0x1ab834, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00296f60. */
extern int FUN_002c0ac8(void);


unsigned int FUN_001ab834(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  FUN_00296f60();
  temp_v0 = FUN_002c0ac8();
  if (temp_v0 != 0) {
    *(unsigned int *)(temp_v0 + 0xc) = 0;
    *(unsigned int *)(temp_v0 + 0x10) = 0;
  }
  return 1;
}
