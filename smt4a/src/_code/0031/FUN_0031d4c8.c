/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031d4c8` (_code @ 0x31d4c8, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_005f1b70; /* 0x5f1b70 */

/* Supplied declaration required: FUN_00137ee0. */
extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_00324bc8. */


unsigned int FUN_0031d4c8(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_00236038(2);
  FUN_00324bc8(temp_v0,temp_v1,temp_v2);
  DAT_005f1b70 = 0;
  FUN_00137ee0(8,0,0);
  return 1;
}
