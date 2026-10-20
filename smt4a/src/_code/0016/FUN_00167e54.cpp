/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00167e54` (_code @ 0x167e54, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int *DAT_0057f568; /* 0x57f568 */

extern int FUN_00163e40(unsigned int);


unsigned char FUN_00167e54(void)

{
  int temp_v0;
  
  if (DAT_0057f568 == (unsigned int *)0x0) {
    return 0;
  }
  temp_v0 = FUN_00163e40(*DAT_0057f568);
  return temp_v0 != 0;
}

} /* extern "C" */
