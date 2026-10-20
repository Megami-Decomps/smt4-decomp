/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035cf38` (_code @ 0x35cf38, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00324bc8(unsigned int, unsigned int, unsigned int);

extern unsigned char DAT_005f1b70; /* 0x5f1b70 */

extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_00324bc8. */


unsigned int FUN_0035cf38(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_00236038(2);
  FUN_00324bc8(temp_v0,temp_v1,temp_v2);
  DAT_005f1b70 = 0;
  return 1;
}

} /* extern "C" */
