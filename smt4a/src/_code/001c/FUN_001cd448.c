/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001cd448` (_code @ 0x1cd448, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00647708; /* 0x647708 */

/* Supplied declaration required: nn_snd_CTR_MasterManagerImpl_AuxUserCallback. */


void FUN_001cd448(char *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != '\0') {
    nn_snd_CTR_MasterManagerImpl_AuxUserCallback(&DAT_00647708);
    return;
  }
  return;
}
