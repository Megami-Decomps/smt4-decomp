/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_WaveSoundFile_FileHeader_GetInfoBlock` (_code @ 0x14d0bc, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;


int nw_snd_internal_WaveSoundFile_FileHeader_GetInfoBlock(int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = 0;
  temp_v1 = 0;
  if (*(unsigned short *)(param_1 + 0x10) != 0) {
    while (*(short *)(param_1 + 0x14 + temp_v1 * 0xc) != 0x6800) {
      temp_v1 = temp_v1 + 1;
      if ((int)(unsigned int)*(unsigned short *)(param_1 + 0x10) <= temp_v1) {
        return 0;
      }
    }
    temp_v2 = param_1 + 0x14 + temp_v1 * 0xc;
    temp_v1 = 0;
    if (temp_v2 != 0) {
      temp_v1 = *(int *)(temp_v2 + 4);
    }
    if (temp_v2 != 0 && temp_v1 != 0) {
      temp_v0 = temp_v1 + param_1;
    }
  }
  return temp_v0;
}
