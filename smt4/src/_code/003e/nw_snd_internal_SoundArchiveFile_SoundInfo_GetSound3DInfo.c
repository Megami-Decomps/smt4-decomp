/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_SoundArchiveFile_SoundInfo_GetSound3DInfo` (_code @ 0x3e6920, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: nw_snd_internal_Util_BitFlag_GetValue. */


void nw_snd_internal_SoundArchiveFile_SoundInfo_GetSound3DInfo
               (int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_4;
  nw_snd_internal_Util_BitFlag_GetValue(param_1 + 0x14,&temp_v0,8);
  return;
}
