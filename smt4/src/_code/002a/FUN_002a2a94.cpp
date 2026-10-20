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
