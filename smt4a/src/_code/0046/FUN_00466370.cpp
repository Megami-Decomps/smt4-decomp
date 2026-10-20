#include "romwright_types.h"

extern "C" {

extern int FUN_00463298(void);
extern int nw_snd_internal_PoolImpl_AllocImpl(int);


void FUN_00466370(int param_1,unsigned int param_2)

{
  int temp_v0;
  
  temp_v0 = nw_snd_internal_PoolImpl_AllocImpl(param_1 + 8);
  if ((temp_v0 != 0) && (temp_v0 = FUN_00463298(), temp_v0 != 0)) {
    *(unsigned int *)(temp_v0 + 300) = param_2;
    *(unsigned int *)(temp_v0 + 0x134) = *(unsigned int *)(param_1 + 4);
  }
  return;
}

} /* extern "C" */
