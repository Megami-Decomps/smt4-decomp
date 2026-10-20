/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001af874` (_code @ 0x1af874, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int func_0x001bd604(unsigned char *, unsigned int, unsigned int, unsigned int);

extern unsigned char g_nnSndVoiceManager; /* 0x6449d0 */

/* Supplied declaration required: func_0x001bd604. */


void FUN_001af874(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  func_0x001bd604(&g_nnSndVoiceManager,param_1,param_2,param_3);
  return;
}

} /* extern "C" */
