/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00466370` (_code @ 0x466370, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
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
