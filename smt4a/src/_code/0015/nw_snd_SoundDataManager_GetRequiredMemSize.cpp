/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_SoundDataManager_GetRequiredMemSize` (_code @ 0x15fe88, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00194f94(unsigned int);


int nw_snd_SoundDataManager_GetRequiredMemSize(unsigned int param_1,unsigned int param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_00194f94(param_2);
  return temp_v0 * 4 + 4;
}

} /* extern "C" */
