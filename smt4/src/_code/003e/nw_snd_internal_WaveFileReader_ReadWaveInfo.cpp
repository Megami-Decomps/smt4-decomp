/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_WaveFileReader_ReadWaveInfo` (_code @ 0x3e64c0, 0xf0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bd808(unsigned char *, int);
int rt_memcpy(unsigned char *, int, int);

/* Supplied declaration required: FUN_002bd808. */
extern int offsetRefResolveCAlt(int);
extern unsigned int offsetRefAddAtBase4(int, int);
extern int nw_snd_internal_WaveFile_InfoBlockBody_GetChannelInfo(int, int);
/* Supplied declaration required: rt_memcpy. */


unsigned int nw_snd_internal_WaveFileReader_ReadWaveInfo(int *param_1,unsigned char *param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v4 = 0;
  temp_v0 = *(unsigned char *)*param_1;
  if (temp_v0 >= 2) {
    temp_v0 = 3;
  }
  *param_2 = temp_v0;
  *(unsigned int *)(param_2 + 4) = *(unsigned int *)(*param_1 + 0x14);
  *(unsigned int *)(param_2 + 8) = *(unsigned int *)(*param_1 + 4);
  param_2[1] = *(char *)(*param_1 + 1) == '\x01';
  *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(*param_1 + 8);
  *(unsigned int *)(param_2 + 0x10) = *(unsigned int *)(*param_1 + 0xc);
  for (; temp_v4 < *(int *)(*param_1 + 0x14); temp_v4 = temp_v4 + 1) {
    if (temp_v4 < 2) {
      temp_v1 = nw_snd_internal_WaveFile_InfoBlockBody_GetChannelInfo(*param_1,temp_v4);
      if (*(int *)(temp_v1 + 0xc) != 0) {
        temp_v2 = offsetRefResolveCAlt(temp_v1);
        rt_memcpy(param_2 + temp_v4 * 0x30 + 0x18,temp_v2,0x26);
        FUN_002bd808(param_2 + temp_v4 * 0x30 + 0x3e,temp_v2 + 0x26);
      }
      temp_v3 = offsetRefAddAtBase4(temp_v1,param_1[1]);
      *(unsigned int *)(param_2 + temp_v4 * 0x30 + 0x14) = temp_v3;
    }
  }
  return 1;
}

} /* extern "C" */
