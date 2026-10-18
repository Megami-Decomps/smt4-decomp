/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00239d2c` (_code @ 0x239d2c, 0xc0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_6_stack;

#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
/* Supplied declaration required: FUN_00239c78. */


void FUN_00239d2c(int param_1,unsigned int *param_2,unsigned int *param_3,int param_4,int *param_5,
                 unsigned int param_6)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  int temp_v6;
  
  temp_v3 = *(unsigned int *)(param_1 + 0x10) + param_6;
  temp_v2 = *(int *)(param_1 + 0x14) + (unsigned int)romwright_carry_4(*(unsigned int *)(param_1 + 0x10),param_6);
  temp_v0 = *(unsigned int *)(param_1 + 0x1c);
  FUN_00239c78(temp_v0,&temp_v4,temp_v3,temp_v2,&temp_v4,0x18);
  temp_v1 = temp_v0 & 0x80000000;
  if (-1 < (int)temp_v1) {
    if ((param_4 != 0 && param_5 != (int *)0x0) && (*param_5 = temp_v6, temp_v6 != 0)) {
      temp_v0 = *(unsigned int *)(param_1 + 0x1c);
      FUN_00239c78(temp_v0,temp_v1,temp_v3 + 0x18,temp_v2 + (unsigned int)(0xffffffe7 < temp_v3),param_4,temp_v6);
      if ((int)temp_v0 >= 0) {
        temp_v0 = 0;
      }
    }
    else {
      temp_v0 = 0;
    }
  }
  if (-1 < (int)temp_v0) {
    *param_2 = temp_v4;
    *param_3 = temp_v5;
    param_3[1] = uStack_30;
    param_3[2] = uStack_2c;
  }
  return;
}
