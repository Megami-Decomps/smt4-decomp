/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035c354` (_code @ 0x35c354, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00201f30. */
extern int FUN_00236038(unsigned int);
extern int FUN_002360dc(unsigned int);
/* Supplied declaration required: FUN_002bf09c. */


unsigned int FUN_0035c354(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_002360dc(0);
  FUN_002bf09c();
  if (-1 < temp_v0) {
    temp_v1 = FUN_00236038(1);
    temp_v2 = FUN_00236038(2);
    if (temp_v1 < 0) {
      temp_v1 = 0;
    }
    if (temp_v2 < 0) {
      temp_v2 = 0;
    }
    FUN_00201f30(temp_v0,temp_v1,temp_v2);
  }
  return 1;
}
