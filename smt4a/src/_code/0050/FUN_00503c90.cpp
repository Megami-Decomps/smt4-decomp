/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00503c90` (_code @ 0x503c90, 0x10c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nnnstdMemCpy(...);

typedef struct fn_00503c90_arg1 fn_00503c90_arg1;
struct fn_00503c90_arg1 {
    unsigned char pad_0x0[0x4];
    undefined4 *field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined1 field_0xc; /* +0xc */
};

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_5_stack;

/* Supplied declaration required: nnnstdMemCpy. */


void FUN_00503c90(unsigned int param_1,fn_00503c90_arg1 *param_2,unsigned int param_3,int param_4,unsigned int param_5
                 )

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v1 = 0;
  do {
    temp_v3 = *(unsigned int *)(param_4 + temp_v1 * 4);
    temp_v0 = param_5;
    if (param_5 >= 0x101) {
      temp_v0 = 0x100;
    }
    temp_v4 = (((temp_v0 - 1) & 0xff) << 0x14) | (param_3 & 0xffff) | 0xf0000;
    if ((unsigned int *)param_2->field_0x8 < param_2->field_0x4 + 2) {
      param_2->field_0xc = 1;
    }
    else {
      nnnstdMemCpy(param_2->field_0x4,&temp_v3,8);
      param_2->field_0x4 = param_2->field_0x4 + 2;
    }
    temp_v2 = temp_v0 * 4 - 4;
    if (0 < temp_v2) {
      if ((unsigned int *)param_2->field_0x8 < param_2->field_0x4 + (temp_v0 - 1)) {
        param_2->field_0xc = 1;
      }
      else {
        nnnstdMemCpy(param_2->field_0x4,param_4 + temp_v1 * 4 + 4,temp_v2);
        param_2->field_0x4 = param_2->field_0x4 + (temp_v0 - 1);
      }
    }
    if ((temp_v0 & 1) == 0) {
      if ((unsigned int *)param_2->field_0x8 < param_2->field_0x4 + 1) {
        param_2->field_0xc = 1;
      }
      else {
        *param_2->field_0x4 = 0;
        param_2->field_0x4 = param_2->field_0x4 + 1;
      }
    }
    param_5 = param_5 - temp_v0;
    temp_v1 = temp_v1 + temp_v0;
  } while (param_5 != 0);
  return;
}

} /* extern "C" */
