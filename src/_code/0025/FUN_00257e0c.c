/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00257e0c` (_code @ 0x257e0c, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00253d60. */
extern unsigned int FUN_002b63ac(void);


unsigned short FUN_00257e0c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned short temp_v1 [20];
  
  temp_v0 = FUN_002b63ac();
  FUN_00253d60(temp_v1,temp_v0);
  return temp_v1[param_1] & 0x3ff;
}
