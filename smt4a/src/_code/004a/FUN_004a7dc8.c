/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a7dc8` (_code @ 0x4a7dc8, 0x1c0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

/* Supplied declaration required: FUN_001677c0. */
extern int FUN_0018349c(int, int);
/* Supplied declaration required: FUN_004934ac. */
/* Supplied declaration required: FUN_0049368c. */


void FUN_004a7dc8(int param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_0018349c(param_1 + 200,param_2 + 0x42f);
  temp_v1 = (int)*(short *)(temp_v0 + 8);
  temp_v0 = (int)*(short *)(temp_v0 + 10);
  FUN_001677c0();
  FUN_004934ac(param_1 + 200,0x426,temp_v1,temp_v0,param_3);
  FUN_004934ac(param_1 + 200,0x427,temp_v1,temp_v0,param_3);
  FUN_004934ac(param_1 + 200,0x428,temp_v1,temp_v0,param_3);
  FUN_001677c0();
  FUN_0049368c(param_1 + 200,0x429,temp_v1,temp_v0,param_3,1);
  if (param_4 != 0) {
    FUN_004934ac(param_1 + 200,0x5cf,temp_v1,temp_v0,param_3);
    FUN_004934ac(param_1 + 200,0x5d0,temp_v1,temp_v0,param_3);
    FUN_004934ac(param_1 + 200,0x5d2,temp_v1,temp_v0,param_3);
    FUN_001677c0();
    FUN_004934ac(param_1 + 200,0x5d1,temp_v1,temp_v0,param_3);
    FUN_001677c0();
    return;
  }
  FUN_004934ac(param_1 + 200,0x42a,temp_v1,temp_v0,param_3);
  FUN_004934ac(param_1 + 200,0x42b,temp_v1,temp_v0,param_3);
  FUN_004934ac(param_1 + 200,0x5c9,temp_v1,temp_v0,param_3);
  FUN_001677c0();
  FUN_004934ac(param_1 + 200,0x42c,temp_v1,temp_v0,param_3);
  FUN_001677c0();
  return;
}
