/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00203d74` (_code @ 0x203d74, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001517b4. */
extern int FUN_00163fd4(unsigned int);


unsigned int FUN_00203d74(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = 9;
  FUN_001517b4(9,2);
  if ((temp_v0 != 0) || (temp_v0 = FUN_00163fd4(6), temp_v1 = 0, temp_v0 != 0)) {
    temp_v1 = 1;
  }
  return temp_v1;
}
