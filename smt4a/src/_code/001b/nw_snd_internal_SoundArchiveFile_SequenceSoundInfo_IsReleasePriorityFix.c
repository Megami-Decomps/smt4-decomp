/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_SoundArchiveFile_SequenceSoundInfo_IsReleasePriorityFix` (_code @ 0x1b3c14, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

/* Supplied declaration required: nw_snd_internal_Util_BitFlag_GetValue. */


unsigned int
nw_snd_internal_SoundArchiveFile_SequenceSoundInfo_IsReleasePriorityFix
          (int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1 [2];
  
  param_1 = param_1 + 0xc;
  temp_v1[0] = param_4;
  nw_snd_internal_Util_BitFlag_GetValue(param_1,temp_v1,1);
  if ((param_1 == 0) || (temp_v0 = 0, (temp_v1[0] & 0xffff) >> 8 != 0)) {
    temp_v0 = 1;
  }
  return temp_v0;
}
