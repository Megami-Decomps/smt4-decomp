/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030d1ac` (_code @ 0x30d1ac, 0xa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055a510; /* 0x55a510 */


void FUN_0030d1ac(unsigned int *param_1)

{
  *(unsigned char *)(param_1 + 1) = 0;
  *param_1 = (unsigned int)&DAT_0055a510;
  return;
}

} /* extern "C" */
