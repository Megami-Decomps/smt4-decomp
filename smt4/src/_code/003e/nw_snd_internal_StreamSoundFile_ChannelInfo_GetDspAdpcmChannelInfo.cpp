#include "romwright_types.h"

extern "C" {


int nw_snd_internal_StreamSoundFile_ChannelInfo_GetDspAdpcmChannelInfo(short *param_1)

{
  int temp_v0;
  
  if (*param_1 == 0x300) {
    temp_v0 = (int)param_1 + *(int *)(param_1 + 2);
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
