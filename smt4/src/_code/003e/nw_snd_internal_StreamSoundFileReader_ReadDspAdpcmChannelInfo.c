/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_StreamSoundFileReader_ReadDspAdpcmChannelInfo` (_code @ 0x3e6f98, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bd808. */
/* Supplied declaration required: nw_snd_internal_StreamSoundFile_ChannelInfoTable_GetChannelInfo. */
extern int nw_snd_internal_StreamSoundFile_ChannelInfo_GetDspAdpcmChannelInfo(void);
extern unsigned int nw_snd_internal_StreamSoundFile_InfoBlockBody_GetChannelInfoTable(unsigned int);
/* Supplied declaration required: rt_memcpy. */


unsigned char nw_snd_internal_StreamSoundFileReader_ReadDspAdpcmChannelInfo
               (int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = nw_snd_internal_StreamSoundFile_InfoBlockBody_GetChannelInfoTable
                    (*(unsigned int *)(param_1 + 4));
  nw_snd_internal_StreamSoundFile_ChannelInfoTable_GetChannelInfo(temp_v0,param_4);
  temp_v1 = nw_snd_internal_StreamSoundFile_ChannelInfo_GetDspAdpcmChannelInfo();
  if (temp_v1 != 0) {
    rt_memcpy(param_2,temp_v1,0x26);
    FUN_002bd808(param_3,temp_v1 + 0x26);
  }
  return temp_v1 != 0;
}
