/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d13e8` (_code @ 0x1d13e8, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int __ARM_common_memcpy4_6(unsigned int, int);
unsigned int nw_snd_internal_StreamSoundFile_ChannelInfoTable_GetChannelInfo(unsigned int, unsigned int);
int rt_memcpy(unsigned int, int, int);

/* Supplied declaration required: __ARM_common_memcpy4_6. */
/* Supplied declaration required: nw_snd_internal_StreamSoundFile_ChannelInfoTable_GetChannelInfo. */
extern int nw_snd_internal_StreamSoundFile_ChannelInfo_GetDspAdpcmChannelInfo(unsigned int);
extern unsigned int nw_snd_internal_StreamSoundFile_InfoBlockBody_GetChannelInfoTable(unsigned int);
/* Supplied declaration required: rt_memcpy. */


unsigned char FUN_001d13e8(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = nw_snd_internal_StreamSoundFile_InfoBlockBody_GetChannelInfoTable
                    (*(unsigned int *)(param_1 + 4));
  temp_v0 = nw_snd_internal_StreamSoundFile_ChannelInfoTable_GetChannelInfo(temp_v0,param_4);
  temp_v1 = nw_snd_internal_StreamSoundFile_ChannelInfo_GetDspAdpcmChannelInfo(temp_v0);
  if (temp_v1 != 0) {
    rt_memcpy(param_2,temp_v1,0x26);
    __ARM_common_memcpy4_6(param_3,temp_v1 + 0x26);
  }
  return temp_v1 != 0;
}

} /* extern "C" */
