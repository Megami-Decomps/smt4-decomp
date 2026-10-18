/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031c410` (_code @ 0x31c410, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0021c118. */
extern int FUN_00236038(unsigned int);
extern int FUN_002360dc(void);
/* Supplied declaration required: FUN_002bf09c. */


unsigned int FUN_0031c410(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002360dc();
  FUN_002bf09c();
  if (-1 < temp_v0) {
    temp_v1 = FUN_00236038(1);
    if (temp_v1 < 0) {
      temp_v1 = 0;
    }
    FUN_0021c118(temp_v0,temp_v1);
  }
  return 1;
}
