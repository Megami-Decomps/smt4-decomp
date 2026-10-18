/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00205a98` (_code @ 0x205a98, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028df54. */
extern int FUN_00296f60(unsigned int);
extern int FUN_00297004(int, int);


unsigned int FUN_00205a98(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00296f60(1);
  temp_v2 = FUN_00296f60(2);
  temp_v1 = FUN_00297004(temp_v1 << 10,temp_v2 << 10);
  FUN_0028df54(temp_v0 * (temp_v1 / 100) >> 10);
  return 1;
}
