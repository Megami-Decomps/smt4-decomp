/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020eac8` (_code @ 0x20eac8, 0x90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00289640(void);
/* Supplied declaration required: FUN_00296f60. */
/* Supplied declaration required: FUN_002a0678. */
extern int FUN_002b8ce4(unsigned int);
extern int FUN_002c1f28(void);


unsigned int FUN_0020eac8(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = FUN_00289640();
  if (temp_v1 != 0) {
    temp_v1 = FUN_002b8ce4(0);
    if ((temp_v1 == 0) || (temp_v1 = FUN_002b8ce4(0), temp_v1 == 0)) {
      return 0;
    }
  }
  else {
    temp_v1 = FUN_002c1f28();
    if ((temp_v1 == 0) && ((temp_v1 = FUN_00296f60(0), temp_v1 == 0 || (temp_v1 == 1)))) {
      FUN_002a0678(0,temp_v0);
      FUN_002a0678(1,temp_v0);
      return 0;
    }
  }
  return 1;
}
