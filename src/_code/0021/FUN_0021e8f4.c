/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021e8f4` (_code @ 0x21e8f4, 0x78 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00287990. */
extern int FUN_00289640(void);
/* Supplied declaration required: FUN_00296f60. */
/* Supplied declaration required: FUN_002a0678. */
extern int FUN_002b8ce4(void);
extern int FUN_002c1f28(void);


unsigned int FUN_0021e8f4(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = FUN_00289640();
  if (temp_v1 != 0) {
    temp_v1 = FUN_002b8ce4();
    if (temp_v1 == 0) {
      temp_v1 = FUN_002c1f28();
      if (temp_v1 != 0) {
        FUN_00287990(0);
      }
      return 0;
    }
  }
  else {
    temp_v2 = FUN_00296f60(0);
    if (temp_v2 < 2) {
      FUN_002a0678(0,temp_v0);
      return 0;
    }
  }
  return 1;
}
