/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_MmlSequenceTrackAllocator_AllocTrack` (_code @ 0x37fa44, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0037e730(void);
extern int nw_snd_internal_PoolImpl_AllocImpl(int);


void nw_snd_internal_driver_MmlSequenceTrackAllocator_AllocTrack(int param_1,unsigned int param_2)

{
  int temp_v0;
  
  temp_v0 = nw_snd_internal_PoolImpl_AllocImpl(param_1 + 8);
  if ((temp_v0 != 0) && (temp_v0 = FUN_0037e730(), temp_v0 != 0)) {
    *(unsigned int *)(temp_v0 + 0xc0) = param_2;
    *(unsigned int *)(temp_v0 + 200) = *(unsigned int *)(param_1 + 4);
  }
  return;
}

} /* extern "C" */
