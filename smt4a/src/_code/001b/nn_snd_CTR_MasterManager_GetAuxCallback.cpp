#include "romwright_types.h"

extern "C" {


void nn_snd_CTR_MasterManager_GetAuxCallback
               (int param_1,int param_2,unsigned int *param_3,unsigned int *param_4)

{
  param_1 = param_1 + param_2 * 4;
  *param_3 = *(unsigned int *)(param_1 + 0x14);
  *param_4 = *(unsigned int *)(param_1 + 0x1c);
  return;
}

} /* extern "C" */
