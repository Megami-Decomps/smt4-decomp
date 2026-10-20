/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003164ac` (_code @ 0x3164ac, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00536266; /* 0x536266 */


unsigned int FUN_003164ac(unsigned int param_1)

{
  unsigned int temp_v0;
  
  if (param_1 != 0) {
    temp_v0 = 1;
    do {
      if (param_1 <= (unsigned char)(&DAT_00536266)[temp_v0]) {
        return temp_v0 & 0xff;
      }
      if (param_1 <= *(unsigned char *)(temp_v0 + 0x536267)) {
        return (temp_v0 + 1) & 0xff;
      }
      temp_v0 = temp_v0 + 2;
    } while ((int)temp_v0 < 0xb);
  }
  return 0;
}

} /* extern "C" */
