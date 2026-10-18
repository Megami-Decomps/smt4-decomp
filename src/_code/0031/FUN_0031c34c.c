/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031c34c` (_code @ 0x31c34c, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00296f60. */
extern int FUN_002c2b1c(void);


unsigned int FUN_0031c34c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = FUN_002c2b1c();
  temp_v0 = FUN_00296f60(1);
  temp_v2 = FUN_00296f60(0);
  *(unsigned short *)(temp_v1 + temp_v2 * 2 + 0xd5c) = temp_v0;
  return 1;
}
