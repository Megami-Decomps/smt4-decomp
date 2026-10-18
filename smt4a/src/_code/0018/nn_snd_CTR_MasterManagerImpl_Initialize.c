/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_MasterManagerImpl_Initialize` (_code @ 0x18a080, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00188b60. */


void nn_snd_CTR_MasterManagerImpl_Initialize(char *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 == '\0') {
    FUN_00188b60(param_1 + 0x34);
    *param_1 = '\x01';
  }
  return;
}
