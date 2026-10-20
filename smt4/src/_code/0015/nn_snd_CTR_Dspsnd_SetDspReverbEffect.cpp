/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Dspsnd_SetDspReverbEffect` (_code @ 0x153640, 0x144 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002bb274(void);


unsigned int nn_snd_CTR_Dspsnd_SetDspReverbEffect(int param_1,int param_2,unsigned short *param_3)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  
  temp_v0 = FUN_002bb274();
  if (temp_v0 == 0) {
    return 0;
  }
  puVar3 = *(unsigned int **)(param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x131e) * 4 + 0x10a0);
  if ((*param_3 & 1) != 0) {
    *(unsigned short *)((int)puVar3 + param_2 * 0x34 + 0x56) = param_3[1];
  }
  if ((*param_3 & 4) != 0) {
    temp_v0 = param_2 * 0x34;
    *(unsigned short *)((int)puVar3 + temp_v0 + 0x5a) = param_3[3];
    *(unsigned short *)(puVar3 + param_2 * 0xd + 0x1c) = param_3[0xe];
    *(unsigned short *)((int)puVar3 + temp_v0 + 0x72) = param_3[0xf];
    *(unsigned short *)(puVar3 + param_2 * 0xd + 0x1d) = param_3[0x10];
    *(unsigned short *)((int)puVar3 + temp_v0 + 0x76) = param_3[0x11];
    *(unsigned short *)(puVar3 + param_2 * 0xd + 0x1e) = param_3[0x12];
    *(unsigned short *)((int)puVar3 + temp_v0 + 0x7a) = param_3[0x13];
    *(unsigned short *)(puVar3 + param_2 * 0xd + 0x1f) = param_3[0x14];
    *(unsigned short *)((int)puVar3 + temp_v0 + 0x7e) = param_3[0x15];
    *(unsigned short *)(puVar3 + param_2 * 0xd + 0x20) = param_3[0x16];
    *(unsigned short *)((int)puVar3 + temp_v0 + 0x82) = param_3[0x17];
    *(unsigned short *)(puVar3 + param_2 * 0xd + 0x21) = param_3[0x18];
    *(unsigned short *)((int)puVar3 + temp_v0 + 0x86) = param_3[0x19];
  }
  if ((*param_3 & 2) != 0) {
    puVar3[param_2 * 0xd + 0x17] = *(unsigned int *)(param_3 + 4);
    puVar3[param_2 * 0xd + 0x18] = *(unsigned int *)(param_3 + 6);
    puVar3[param_2 * 0xd + 0x19] = *(unsigned int *)(param_3 + 8);
    puVar3[param_2 * 0xd + 0x1a] = *(unsigned int *)(param_3 + 10);
    puVar3[param_2 * 0xd + 0x1b] = *(unsigned int *)(param_3 + 0xc);
  }
  *(unsigned short *)(puVar3 + param_2 * 0xd + 0x15) = *param_3 | (unsigned short)puVar3[param_2 * 0xd + 0x15];
  if (param_2 == 0) {
    temp_v1 = *puVar3 | 0x1000;
  }
  else {
    if (param_2 != 1) {
      return 1;
    }
    temp_v1 = *puVar3 | 0x2000;
  }
  *puVar3 = temp_v1;
  return 1;
}

} /* extern "C" */
