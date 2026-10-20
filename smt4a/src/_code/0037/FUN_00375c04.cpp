/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00375c04` (_code @ 0x375c04, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(unsigned int);

extern unsigned char DAT_005e2194; /* 0x5e2194 */

extern unsigned int scrGetArg(void);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_00375c04(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = scrGetArg();
  if (temp_v0 < 0x20) {
    scrSetResult(*(unsigned int *)(&DAT_005e2194 + temp_v0 * 4));
  }
  return 1;
}

} /* extern "C" */
