/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a2a94` (_code @ 0x2a2a94, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_snd_CTR_MasterManagerImpl_AuxUserCallback(unsigned char *);

extern unsigned char DAT_004ead10; /* 0x4ead10 */

/* Supplied declaration required: nn_snd_CTR_MasterManagerImpl_AuxUserCallback. */


void FUN_002a2a94(char *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != '\0') {
    nn_snd_CTR_MasterManagerImpl_AuxUserCallback(&DAT_004ead10);
    return;
  }
  return;
}

} /* extern "C" */
