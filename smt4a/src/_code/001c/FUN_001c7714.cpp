/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c7714` (_code @ 0x1c7714, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int func_0x001bd84c(unsigned char *, unsigned int);

extern unsigned char g_nnSndMasterManager; /* 0x643380 */

/* Supplied declaration required: func_0x001bd84c. */


void FUN_001c7714(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  func_0x001bd84c(&g_nnSndMasterManager,param_1);
  return;
}

} /* extern "C" */
