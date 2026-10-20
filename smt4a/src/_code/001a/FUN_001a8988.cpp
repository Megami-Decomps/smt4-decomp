/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a8988` (_code @ 0x1a8988, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int nw_snd_internal_SoundArchiveFileReader_ReadFileInfo(unsigned int, unsigned int, unsigned int, unsigned int);


int FUN_001a8988(int param_1,unsigned int param_2,unsigned int param_3)

{
  int temp_v0;
  int *piVar2;
  
  temp_v0 = nw_snd_internal_SoundArchiveFileReader_ReadFileInfo
                    (*(unsigned int *)(param_1 + 4),param_2,param_3,0);
  piVar2 = (int *)0x0;
  if (temp_v0 != 0) {
    piVar2 = *(int **)(param_1 + 8);
  }
  if (temp_v0 != 0 && piVar2 != (int *)0x0) {
    if ((char)piVar2[1] != '\0') {
      (**(romwright_code **)(*piVar2 + 0x30))(piVar2,param_2,param_3,0);
    }
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
