/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00356cc0` (_code @ 0x356cc0, 0xb0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_5_stack;

#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
/* Supplied declaration required: FUN_00355d04. */


void FUN_00356cc0(unsigned int *param_1,int *param_2,int param_3,unsigned int param_4,int param_5)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2 [2];
  
  temp_v1 = 0;
  if (param_4 != 0) {
    while( 1 ) {
      puVar1 = temp_v2;
      if (param_5 == 0) {
        temp_v0 = *param_1 | 1;
      }
      else {
        temp_v0 = *param_1 & 0xfffffffe;
      }
      *param_1 = temp_v0;
      FUN_00355d04(puVar1,temp_v0 & 0xfffffffe,param_1[1],param_1[2],param_3,param_4,param_5);
      if ((int)puVar1 < 0) {
        return;
      }
      temp_v1 = temp_v1 + temp_v2[0];
      param_1[2] = param_1[2] + ((int)temp_v2[0] >> 0x1f) + (unsigned int)romwright_carry_4(param_1[1],temp_v2[0]);
      param_1[1] = param_1[1] + temp_v2[0];
      if ((temp_v2[0] == param_4) || (temp_v2[0] == 0)) break;
      param_3 = param_3 + temp_v2[0];
      param_4 = param_4 - temp_v2[0];
    }
  }
  *param_2 = temp_v1;
  return;
}
