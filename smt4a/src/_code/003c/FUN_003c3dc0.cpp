/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c3dc0` (_code @ 0x3c3dc0, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005f1748; /* 0x5f1748 */
extern unsigned char DAT_005f1749; /* 0x5f1749 */

extern int FUN_00236038(unsigned int);


unsigned int FUN_003c3dc0(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00236038(0);
  DAT_005f1748 = temp_v0 != 0;
  temp_v0 = FUN_00236038(1);
  DAT_005f1749 = temp_v0 != 0;
  return 1;
}

} /* extern "C" */
