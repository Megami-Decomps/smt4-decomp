/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eeabc` (_code @ 0x2eeabc, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00594998; /* 0x594998 */
extern unsigned char DAT_0062e688; /* 0x62e688 */


unsigned int FUN_002eeabc(void)

{
  unsigned int temp_v0;
  
  if (((*(int *)((unsigned char *)&DAT_0062e688 + 0x10)) != 0) || (temp_v0 = 1, DAT_00594998 != 1)) {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
