/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001afd84` (_code @ 0x1afd84, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int func_0x001b5c60(unsigned char *, unsigned int);

extern unsigned char g_nnSndMasterManager; /* 0x643380 */

/* Supplied declaration required: func_0x001b5c60. */


void FUN_001afd84(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  func_0x001b5c60(&g_nnSndMasterManager,param_1);
  return;
}

} /* extern "C" */
