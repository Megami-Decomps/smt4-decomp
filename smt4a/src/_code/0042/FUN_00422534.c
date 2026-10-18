/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00422534` (_code @ 0x422534, 0x114 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
/* Supplied declaration required: FUN_00195fc8. */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_0042cd0c. */
/* Supplied declaration required: ll_sdiv. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


void FUN_00422534(int *param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  int temp_v3 [2];
  
  while( 1 ) {
    piVar4 = temp_v3;
    FUN_0042cd0c(piVar4,param_1 + 0x15,2,0,0xffffffff,0xffffffff);
    if ((int)piVar4 < 0) {
      FUN_002e3140();
    }
    if (temp_v3[0] != 0) break;
    nn_os_CriticalSection_Enter(param_1 + 0x10);
    if (0x40000U - (param_1[2] - *param_1) < 0x10000) {
      nn_os_CriticalSection_Leave(param_1 + 0x10,param_1[3],*param_1,param_1[1]);
    }
    else {
      temp_v2 = param_1[4] - param_1[2];
      if (temp_v2 >= 0x10001) {
        temp_v2 = 0x10000;
      }
      temp_v1 = 0x40000;
      ll_sdiv(param_1[2],param_1[3],0x40000,0);
      piVar4 = (int *)param_1[0xe];
      if (0x40000U - temp_v1 < temp_v2) {
        temp_v2 = 0x40000U - temp_v1;
      }
      temp_v1 = 0x40000;
      ll_sdiv(param_1[2],param_1[3],0x40000,0);
      temp_v0 = (**(romwright_code **)(*piVar4 + 0x2c))(piVar4,temp_v1 + param_1[8],temp_v2);
      if (temp_v0 != temp_v2) {
        FUN_00195fc8();
      }
      temp_v2 = param_1[2];
      param_1[2] = temp_v2 + temp_v0;
      param_1[3] = param_1[3] + (unsigned int)romwright_carry_4(temp_v2,temp_v0);
      nn_os_CriticalSection_Leave(param_1 + 0x10);
    }
  }
  return;
}
