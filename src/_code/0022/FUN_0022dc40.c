/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022dc40` (_code @ 0x22dc40, 0xd4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_5_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002bd25c. */
/* Supplied declaration required: FUN_002be744. */
/* Supplied declaration required: FUN_002bf6c8. */


void FUN_0022dc40(int param_1,unsigned int param_2,int param_3,int param_4,int param_5)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int in_fpscr;
  
  VectorSignedToFloat(0x100 - param_5,(unsigned char)(in_fpscr >> 0x16) & 3);
  if (param_4 != 0) {
    temp_v2 = FUN_002bf6c8(param_1 + 200,param_3 + 0x42f);
    temp_v3 = 0x499;
    temp_v4 = 3;
    temp_v5 = 0xffffffff;
  }
  else {
    temp_v2 = FUN_002bf6c8(param_1 + 200,param_3 + 0x40e);
    temp_v3 = 0x48b;
    temp_v4 = 2;
    temp_v5 = 0xff;
  }
  temp_v0 = *(short *)(temp_v2 + 8);
  temp_v1 = *(short *)(temp_v2 + 10);
  param_2 = param_2 & 0xffff;
  FUN_002bd25c(param_2);
  temp_v2 = FUN_002bf6c8(param_1 + 200,temp_v3);
  VectorSignedToFloat((int)*(short *)(temp_v2 + 10) + (int)temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)*(short *)(temp_v2 + 8) + (int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002be744(param_1 + 200,temp_v4,temp_v5,param_2);
  return;
}
