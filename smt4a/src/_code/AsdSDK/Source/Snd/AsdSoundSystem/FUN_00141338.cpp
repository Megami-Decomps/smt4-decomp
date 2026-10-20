/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00141338` (_code @ 0x141338, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int DAT_0063f4e4; /* 0x63f4e4 */
extern unsigned char DAT_0063f4f0; /* 0x63f4f0 */

extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
extern void nn_snd_CTR_Voice_SetState(unsigned int, int);


void FUN_00141338(int param_1,int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  float temp_v3;
  
  temp_v2 = DAT_0063f4e4;
  if (param_1 == 0) {
    return;
  }
  while( 1 ) {
    if (temp_v2 == 0) {
      return;
    }
    if (temp_v2 == param_1) break;
    temp_v2 = *(int *)(temp_v2 + 0xd8);
  }
  nn_os_CriticalSection_Enter((unsigned int)&DAT_0063f4f0);
  temp_v0 = *(unsigned int *)(param_1 + 0xf4);
  if ((temp_v0 & 2) != 0) {
    if (param_2 >= 1) {
      if ((temp_v0 & 0x20) != 0) {
        temp_v0 = temp_v0 & 0xffffffdf;
        *(unsigned int *)(param_1 + 0xf4) = temp_v0;
      }
      *(unsigned int *)(param_1 + 0xf4) = temp_v0 | 0x10;
      *(unsigned int *)(param_1 + 0xe8) = 0;
      *(int *)(param_1 + 0xe0) = param_2;
      temp_v3 = *(float *)(*(int *)(param_1 + 0x68) + 100);
      if (*(float *)(param_1 + 0xf8) <= temp_v3) {
        temp_v3 = *(float *)(param_1 + 0xf8);
      }
      *(float *)(param_1 + 0xf8) = temp_v3;
      *(unsigned int *)(param_1 + 0xf4) = temp_v0 | 0x110;
    }
    else {
      temp_v2 = 0;
      if (temp_v2 < *(int *)(param_1 + 0xec)) {
        do {
          temp_v1 = *(int *)(param_1 + temp_v2 * 4 + 0x68);
          if (temp_v1 != 0) {
            nn_snd_CTR_Voice_SetState(temp_v1,1);
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < *(int *)(param_1 + 0xec));
      }
    }
  }
  nn_os_CriticalSection_Leave((unsigned int)&DAT_0063f4f0);
  return;
}

} /* extern "C" */
