/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f49cc` (_code @ 0x2f49cc, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00287990. */
/* Supplied declaration required: FUN_00296f60. */
/* Supplied declaration required: FUN_002a0678. */
extern int FUN_002c1f28(void);


unsigned int FUN_002f49cc(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = FUN_00296f60(0);
  if (temp_v1 < 2) {
    temp_v2 = FUN_002c1f28();
    if (temp_v2 != 0) {
      FUN_00287990(0);
      FUN_00287990(1);
    }
    else {
      FUN_002a0678(0,temp_v0);
      FUN_002a0678(1,temp_v0);
    }
  }
  return 1;
}
