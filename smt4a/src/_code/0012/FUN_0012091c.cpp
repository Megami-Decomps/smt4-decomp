/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012091c` (_code @ 0x12091c, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int md5Init(void);

/* Supplied declaration required: md5Init. */


void FUN_0012091c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned char *)(param_1 + 0x68) = 0;
  md5Init();
  return;
}

} /* extern "C" */
