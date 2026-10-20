/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f310e` (_code @ 0x2f310e, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memcpy_w(int, int, int);

/* Supplied declaration required: rt_memcpy_w. */


void FUN_002f310e(int param_1)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned char *)(param_1 + 0x228) = 0;
  *(unsigned char *)(param_1 + 0x229) = 0;
  rt_memcpy_w(param_1 + 0x128,param_1 + 0x28,0x100);
  return;
}

} /* extern "C" */
