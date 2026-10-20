/* NON_MATCHING: romwright 0.5.0 decompilation of `nninitRegion` (_code @ 0x100024, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00477000; /* 0x477000 */


void nninitRegion(void)

{
  unsigned int *puVar1;
  
  for (puVar1 = (unsigned int *)&DAT_00477000; puVar1 < (unsigned int *)0x4efe34; puVar1 = puVar1 + 1) {
    *puVar1 = 0;
  }
  return;
}

} /* extern "C" */
