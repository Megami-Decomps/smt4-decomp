#include "romwright_types.h"

extern "C" {

int nn_snd_CTR_MasterManager_GetAuxCallback(unsigned char *, unsigned int, unsigned int, unsigned int);

extern unsigned char DAT_00643380; /* 0x643380 */

/* Supplied declaration required: nn_snd_CTR_MasterManager_GetAuxCallback. */


void FUN_00189e18(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  nn_snd_CTR_MasterManager_GetAuxCallback(&DAT_00643380,param_1,param_2,param_3);
  return;
}

} /* extern "C" */
