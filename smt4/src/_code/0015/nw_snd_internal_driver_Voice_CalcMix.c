/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_Voice_CalcMix` (_code @ 0x157554, 0xc4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

/* Supplied declaration required: FUN_0015c0f4. */
/* Supplied declaration required: nn_snd_CTR_Voice_SetMixParam. */


void nw_snd_internal_driver_Voice_CalcMix(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  
  temp_v2 = 0;
  temp_v3 = 0;
  temp_v4 = 0;
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v10 = 0;
  temp_v11 = 0;
  temp_v12 = 0;
  temp_v13 = 0;
  temp_v0 = 0;
  if (temp_v0 < *(int *)(param_1 + 8)) {
    do {
      temp_v1 = *(int *)(param_1 + temp_v0 * 4);
      if (temp_v1 != 0) {
        FUN_0015c0f4(param_1,temp_v0,&temp_v2);
        nn_snd_CTR_Voice_SetMixParam(temp_v1,&temp_v2);
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(int *)(param_1 + 8));
  }
  return;
}
