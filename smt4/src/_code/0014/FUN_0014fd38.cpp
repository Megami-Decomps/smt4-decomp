/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014fd38` (_code @ 0x14fd38, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int func_0x00153374(unsigned char *, unsigned int);

extern unsigned char g_nnSndMasterManager; /* 0x4e6f14 */

/* Supplied declaration required: func_0x00153374. */


void FUN_0014fd38(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  func_0x00153374(&g_nnSndMasterManager,param_1);
  return;
}

} /* extern "C" */
