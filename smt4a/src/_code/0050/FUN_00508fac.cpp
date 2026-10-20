/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00508fac` (_code @ 0x508fac, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001d1438(unsigned int, int);
int FUN_001d284c(unsigned int, unsigned int);
int rt_memcpy(unsigned int, int, int);

/* Supplied declaration required: FUN_001d1438. */
/* Supplied declaration required: FUN_001d284c. */
extern int nw_snd_internal_StreamSoundFile_ChannelInfo_GetDspAdpcmChannelInfo(void);
extern unsigned int nw_snd_internal_StreamSoundFile_InfoBlockBody_GetChannelInfoTable(unsigned int);
/* Supplied declaration required: rt_memcpy. */


unsigned char FUN_00508fac(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = nw_snd_internal_StreamSoundFile_InfoBlockBody_GetChannelInfoTable
                    (*(unsigned int *)(param_1 + 4));
  FUN_001d284c(temp_v0,param_4);
  temp_v1 = nw_snd_internal_StreamSoundFile_ChannelInfo_GetDspAdpcmChannelInfo();
  if (temp_v1 != 0) {
    rt_memcpy(param_2,temp_v1,0x26);
    FUN_001d1438(param_3,temp_v1 + 0x26);
  }
  return temp_v1 != 0;
}

} /* extern "C" */
