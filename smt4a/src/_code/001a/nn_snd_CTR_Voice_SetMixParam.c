/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Voice_SetMixParam` (_code @ 0x1afdd4, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;


void nn_snd_CTR_Voice_SetMixParam(int param_1,unsigned int *param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  temp_v1 = param_2[1];
  temp_v2 = param_2[2];
  temp_v3 = param_2[3];
  temp_v4 = param_2[4];
  temp_v5 = param_2[5];
  temp_v6 = param_2[6];
  temp_v7 = param_2[7];
  *(unsigned int *)(param_1 + 0x34) = *param_2;
  *(unsigned int *)(param_1 + 0x38) = temp_v1;
  *(unsigned int *)(param_1 + 0x3c) = temp_v2;
  *(unsigned int *)(param_1 + 0x40) = temp_v3;
  *(unsigned int *)(param_1 + 0x44) = temp_v4;
  *(unsigned int *)(param_1 + 0x48) = temp_v5;
  *(unsigned int *)(param_1 + 0x4c) = temp_v6;
  *(unsigned int *)(param_1 + 0x50) = temp_v7;
  temp_v1 = param_2[9];
  temp_v2 = param_2[10];
  temp_v3 = param_2[0xb];
  *(unsigned int *)(param_1 + 0x54) = param_2[8];
  *(unsigned int *)(param_1 + 0x58) = temp_v1;
  *(unsigned int *)(param_1 + 0x5c) = temp_v2;
  *(unsigned int *)(param_1 + 0x60) = temp_v3;
  temp_v0 = *(int *)(param_1 + 0x68);
  temp_v1 = param_2[1];
  temp_v2 = param_2[2];
  temp_v3 = param_2[3];
  temp_v4 = param_2[4];
  temp_v5 = param_2[5];
  temp_v6 = param_2[6];
  temp_v7 = param_2[7];
  *(unsigned int *)(temp_v0 + 0x38) = *param_2;
  *(unsigned int *)(temp_v0 + 0x3c) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x40) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x44) = temp_v3;
  *(unsigned int *)(temp_v0 + 0x48) = temp_v4;
  *(unsigned int *)(temp_v0 + 0x4c) = temp_v5;
  *(unsigned int *)(temp_v0 + 0x50) = temp_v6;
  *(unsigned int *)(temp_v0 + 0x54) = temp_v7;
  temp_v1 = param_2[8];
  temp_v2 = param_2[9];
  temp_v3 = param_2[10];
  *(unsigned int *)(temp_v0 + 100) = param_2[0xb];
  *(unsigned int *)(temp_v0 + 0x58) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x5c) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x60) = temp_v3;
  *(unsigned short *)(temp_v0 + 0x6c) = *(unsigned short *)(temp_v0 + 0x6c) | 1;
  return;
}
