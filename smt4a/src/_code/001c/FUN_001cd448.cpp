#include "romwright_types.h"

extern "C" {

int nn_snd_CTR_MasterManagerImpl_AuxUserCallback(unsigned char *);

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

} /* extern "C" */
