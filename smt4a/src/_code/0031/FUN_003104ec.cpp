/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003104ec` (_code @ 0x3104ec, 0xa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_flagBlock; /* 0x594958 */


void FUN_003104ec(unsigned int param_1)

{
  (*(unsigned int *)((unsigned char *)&g_flagBlock + 0x48)) = (*(unsigned int *)((unsigned char *)&g_flagBlock + 0x48)) | param_1;
  return;
}

} /* extern "C" */
