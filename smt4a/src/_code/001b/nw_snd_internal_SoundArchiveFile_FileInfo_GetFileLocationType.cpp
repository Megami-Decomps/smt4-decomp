#include "romwright_types.h"

extern "C" {


unsigned int nw_snd_internal_SoundArchiveFile_FileInfo_GetFileLocationType(unsigned short *param_1)

{
  unsigned int temp_v0;
  
  if (*param_1 != 0) {
    temp_v0 = *param_1 - 0x220c;
    if (temp_v0 == 0 || temp_v0 == 1) {
      return temp_v0;
    }
  }
  return 2;
}

} /* extern "C" */
