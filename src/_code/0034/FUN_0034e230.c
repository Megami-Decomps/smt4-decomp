/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034e230` (_code @ 0x34e230, 0x114 bytes) from smt4.cxi.
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
/* Supplied declaration required: FUN_002b5b44. */
/* Supplied declaration required: FUN_002bce48. */
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */
/* Supplied declaration required: FUN_002c5468. */
/* Supplied declaration required: FUN_003575b4. */


void FUN_0034e230(int *param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  int temp_v3 [2];
  
  while( 1 ) {
    piVar4 = temp_v3;
    FUN_003575b4(piVar4,param_1 + 0x15,2,0,0xffffffff,0xffffffff);
    if ((int)piVar4 < 0) {
      FUN_002c5468();
    }
    if (temp_v3[0] != 0) break;
    FUN_002c3aa8(param_1 + 0x10);
    if (0x40000U - (param_1[2] - *param_1) < 0x10000) {
      FUN_002c3a24(param_1 + 0x10,param_1[3],*param_1,param_1[1]);
    }
    else {
      temp_v2 = param_1[4] - param_1[2];
      if (temp_v2 >= 0x10001) {
        temp_v2 = 0x10000;
      }
      temp_v1 = 0x40000;
      FUN_002b5b44(param_1[2],param_1[3],0x40000,0);
      piVar4 = (int *)param_1[0xe];
      if (0x40000U - temp_v1 < temp_v2) {
        temp_v2 = 0x40000U - temp_v1;
      }
      temp_v1 = 0x40000;
      FUN_002b5b44(param_1[2],param_1[3],0x40000,0);
      temp_v0 = (**(romwright_code **)(*piVar4 + 0x2c))(piVar4,temp_v1 + param_1[8],temp_v2);
      if (temp_v0 != temp_v2) {
        FUN_002bce48();
      }
      temp_v2 = param_1[2];
      param_1[2] = temp_v2 + temp_v0;
      param_1[3] = param_1[3] + (unsigned int)romwright_carry_4(temp_v2,temp_v0);
      FUN_002c3a24(param_1 + 0x10);
    }
  }
  return;
}
