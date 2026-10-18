/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003289a8` (_code @ 0x3289a8, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00289640(void);
/* Supplied declaration required: FUN_00296f60. */
/* Supplied declaration required: FUN_002a8ab0. */
extern unsigned int FUN_002c0ac8(void);


unsigned int FUN_003289a8(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00296f60(1);
  temp_v1 = FUN_00289640();
  if (temp_v1 != 0) {
    temp_v1 = FUN_00289640();
    if (temp_v1 == temp_v0) {
      return 1;
    }
  }
  else {
    FUN_00296f60(0);
    temp_v2 = FUN_002c0ac8();
    FUN_002a8ab0(temp_v2,8,temp_v0);
  }
  return 0;
}
