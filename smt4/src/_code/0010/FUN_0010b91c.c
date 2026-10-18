/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010b91c` (_code @ 0x10b91c, 0xc4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int DAT_004e3154; /* 0x4e3154 */
extern unsigned char DAT_004e315c; /* 0x4e315c */

/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */
/* Supplied declaration required: nn_snd_CTR_Voice_SetState. */


void FUN_0010b91c(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  float temp_v2;
  
  temp_v0 = DAT_004e3154;
  if (param_1 == 0) {
    return;
  }
  while( 1 ) {
    if (temp_v0 == 0) {
      return;
    }
    if (temp_v0 == param_1) break;
    temp_v0 = *(int *)(temp_v0 + 0x70);
  }
  nn_os_CriticalSection_Enter(&DAT_004e315c);
  temp_v1 = *(unsigned int *)(param_1 + 0x90);
  if ((temp_v1 & 2) != 0) {
    if (param_2 >= 1) {
      if ((temp_v1 & 0x20) != 0) {
        temp_v1 = temp_v1 & 0xffffffdf;
        *(unsigned int *)(param_1 + 0x90) = temp_v1;
      }
      *(unsigned int *)(param_1 + 0x90) = temp_v1 | 0x10;
      *(unsigned int *)(param_1 + 0x84) = 0;
      *(int *)(param_1 + 0x78) = param_2;
      temp_v2 = *(float *)(*(int *)(param_1 + 0x38) + 100);
      if (*(float *)(param_1 + 0x94) <= temp_v2) {
        temp_v2 = *(float *)(param_1 + 0x94);
      }
      *(float *)(param_1 + 0x94) = temp_v2;
      *(unsigned int *)(param_1 + 0x90) = temp_v1 | 0x110;
    }
    else {
      nn_snd_CTR_Voice_SetState(*(unsigned int *)(param_1 + 0x38),1);
    }
  }
  nn_os_CriticalSection_Leave(&DAT_004e315c);
  return;
}
