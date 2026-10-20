/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cc2a0` (_code @ 0x2cc2a0, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);

extern int FUN_00184964(int, int);
extern int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_002cc2a0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_00236038(2);
  temp_v1 = FUN_00184964(temp_v1 << 10,temp_v2 << 10);
  FUN_003283ac(temp_v0 * (temp_v1 / 100) >> 10);
  return 1;
}

} /* extern "C" */
