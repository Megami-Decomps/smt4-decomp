/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00317edc` (_code @ 0x317edc, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00296f60(void);
/* Supplied declaration required: FUN_002c8604. */


unsigned int FUN_00317edc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00296f60();
  if (temp_v0 == 0) {
    temp_v1 = 1;
  }
  else if (temp_v0 == 1) {
    temp_v1 = 2;
  }
  else if (temp_v0 == 2) {
    temp_v1 = 3;
  }
  else {
    if (temp_v0 != 3) {
      return 1;
    }
    temp_v1 = 4;
  }
  FUN_002c8604(temp_v1);
  return 1;
}
