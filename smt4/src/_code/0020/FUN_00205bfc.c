/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00205bfc` (_code @ 0x205bfc, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_00296cc8(unsigned int);
extern int FUN_00296d6c(int, int);


unsigned int FUN_00205bfc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(1);
  temp_v2 = FUN_00296cc8(2);
  temp_v1 = FUN_00296d6c(temp_v1 << 10,temp_v2 << 10);
  FUN_0028dcb0(temp_v0 * (temp_v1 / 100) >> 10);
  return 1;
}
