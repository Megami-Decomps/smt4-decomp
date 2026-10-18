/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00159e24` (_code @ 0x159e24, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00647708; /* 0x647708 */

/* Supplied declaration required: nn_snd_CTR_MasterManagerImpl_Finalize. */


void FUN_00159e24(char *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != '\0') {
    nn_snd_CTR_MasterManagerImpl_Finalize(&DAT_00647708);
    param_1[0x4c] = -1;
    param_1[0x4d] = -1;
    param_1[0x4e] = -1;
    param_1[0x4f] = -1;
    *param_1 = '\0';
  }
  return;
}
