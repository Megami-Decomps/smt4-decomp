/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001cd1e8` (_code @ 0x1cd1e8, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memcpy_w(unsigned int, unsigned int, int);

extern unsigned int nw_snd_internal_StreamSoundFile_InfoBlockBody_GetStreamSoundInfo(unsigned int);
/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_001cd1e8(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = nw_snd_internal_StreamSoundFile_InfoBlockBody_GetStreamSoundInfo
                    (*(unsigned int *)(param_1 + 4));
  rt_memcpy_w(param_2,temp_v0,0x4c);
  return 1;
}

} /* extern "C" */
