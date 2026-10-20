/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001294e0` (_code @ 0x1294e0, 0xa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_dspsndState; /* 0x4e6f64 */

extern unsigned char *FUN_00129010(unsigned int);
extern int FUN_0013ac6c(unsigned int, unsigned int);
extern unsigned char nn_snd_CTR_Dspsnd_SetChannelAdpcmParam(unsigned int, unsigned char, unsigned int);


unsigned int
FUN_001294e0(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
            unsigned int param_5)

{
  unsigned short temp_v0;
  unsigned char *pbVar2;
  int temp_v1;
  
  pbVar2 = (unsigned char *)FUN_00129010(param_2);
  if ((*pbVar2 == 2) && (temp_v1 = FUN_0013ac6c(param_2,param_5), temp_v1 != 0)) {
    nn_snd_CTR_Dspsnd_SetChannelAdpcmParam((unsigned int)&g_dspsndState,(unsigned char)*param_1,temp_v1);
  }
  temp_v0 = *(unsigned short *)((int)param_1 + 0x1e);
  *(unsigned short *)((int)param_1 + 0x1e) = (temp_v0 & 0xfffc) | 1;
  *(unsigned short *)((int)param_1 + 0x1e) = (temp_v0 & 0xfff0) | 1 | ((*pbVar2 & 3) << 2);
  temp_v1 = *(int *)(pbVar2 + 4);
  if (temp_v1 < 0) {
    temp_v1 = 0;
  }
  param_1[8] = temp_v1;
  *(unsigned short *)(param_1 + 0x1b) = *(unsigned short *)(param_1 + 0x1b) | 2;
  return 1;
}

} /* extern "C" */
