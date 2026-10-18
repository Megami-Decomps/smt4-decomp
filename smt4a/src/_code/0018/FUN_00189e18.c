/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00189e18` (_code @ 0x189e18, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00643380; /* 0x643380 */

/* Supplied declaration required: nn_snd_CTR_MasterManager_GetAuxCallback. */


void FUN_00189e18(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  nn_snd_CTR_MasterManager_GetAuxCallback(&DAT_00643380,param_1,param_2,param_3);
  return;
}
