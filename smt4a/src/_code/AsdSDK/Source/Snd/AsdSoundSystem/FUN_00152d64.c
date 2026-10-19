/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00152d64` (_code @ 0x152d64, 0x1cc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned char DAT_0063f4f0; /* 0x63f4f0 */

/* Supplied declaration required: FUN_00152d64. */
/* Supplied declaration required: FUN_0016f42c. */
extern int FUN_001af874(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001afdc4. */
/* Supplied declaration required: FUN_001b6390. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
extern void nn_snd_CTR_InitializeWaveBuffer(unsigned int);
extern void nn_snd_CTR_Voice_SetMixParam(unsigned int, unsigned int);
extern void nn_snd_CTR_Voice_SetPitch(unsigned int, float);
extern void nn_snd_CTR_Voice_SetState(unsigned int, int);


void FUN_00152d64(int *param_1,int param_2)

{
/* irregular: irregular input(s): in_s0; 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  float temp_v2;
  int temp_v3;
  int in_s0;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*param_1 != 0) {
    if ((param_1[0x3d] & 0x202U) == 0) {
      nn_os_CriticalSection_Enter((unsigned int)&DAT_0063f4f0);
      param_1[0x38] = param_2;
      param_1[0x3e] = in_s0;
      param_1[0x3a] = 0;
      temp_v3 = 0;
      if (temp_v3 < param_1[0x3b]) {
        do {
          FUN_001b6390(param_1[temp_v3 + 0x1a]);
          nn_snd_CTR_Voice_SetState(param_1[temp_v3 + 0x1a],0);
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < param_1[0x3b]);
      }
      temp_v1 = param_1[0x3d];
      param_1[0x3d] = temp_v1 | 0x40;
      if (0 < param_1[0x38]) {
        param_1[0x3d] = temp_v1 | 0x60;
      }
      nn_os_CriticalSection_Leave((unsigned int)&DAT_0063f4f0);
      return;
    }
    if ((param_1[0x3d] & 0x200U) != 0) {
      nn_os_CriticalSection_Enter((unsigned int)&DAT_0063f4f0);
      temp_v3 = 0;
      if (temp_v3 < param_1[0x3b]) {
        do {
          FUN_001afdc4(param_1[temp_v3 + 0x1a]);
          temp_v0 = FUN_001af874(0x7fff,0);
          param_1[temp_v3 + 0x1a] = temp_v0;
          nn_snd_CTR_Voice_SetMixParam(temp_v0,(unsigned int)(param_1 + temp_v3 * 0xc + 0x1c));
          nn_snd_CTR_Voice_SetPitch(param_1[temp_v3 + 0x1a],temp_v2);
          temp_v0 = 0;
          param_1[0x3d] = 0;
          do {
            nn_snd_CTR_InitializeWaveBuffer((unsigned int)(param_1 + (temp_v0 + temp_v3 * 2) * 6 + 2));
            temp_v0 = temp_v0 + 1;
          } while (temp_v0 < 2);
          FUN_0016f42c(param_1[temp_v3 + 0x1a],param_1[temp_v3 + 0x34],param_1 + temp_v3 * 0xc + 2,
                       param_1 + temp_v3 * 0xc + 8,temp_v3 != 0);
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < param_1[0x3b]);
      }
      FUN_00152d64(param_1,param_2);
      nn_os_CriticalSection_Leave((unsigned int)&DAT_0063f4f0);
      return;
    }
  }
  return;
}
