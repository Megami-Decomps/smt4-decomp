/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022dd28` (_code @ 0x22dd28, 0x100 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_002335c0(unsigned int, unsigned int);
extern unsigned int FUN_002bd020(unsigned short, unsigned int);
/* Supplied declaration required: FUN_002be744. */
/* Supplied declaration required: FUN_002bf6c8. */


void FUN_0022dd28(int param_1,unsigned short param_2,int param_3,int param_4,int param_5)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int in_fpscr;
  
  VectorSignedToFloat(0x100 - param_5,(unsigned char)(in_fpscr >> 0x16) & 3);
  if (param_4 != 0) {
    temp_v2 = FUN_002bf6c8(param_1 + 200,param_3 + 0x42f);
    temp_v5 = 0x498;
    temp_v6 = 3;
    temp_v7 = 0xffffffff;
  }
  else {
    temp_v2 = FUN_002bf6c8(param_1 + 200,param_3 + 0x40e);
    temp_v5 = 0x48a;
    temp_v7 = 0x7a4c00ff;
    temp_v6 = 2;
  }
  temp_v0 = *(short *)(temp_v2 + 8);
  temp_v1 = *(short *)(temp_v2 + 10);
  temp_v3 = FUN_002bd020(param_2,0);
  temp_v2 = FUN_002335c0(temp_v3,2);
  temp_v4 = FUN_002bf6c8(param_1 + 200,temp_v5);
  VectorSignedToFloat((int)*(short *)(temp_v4 + 10) + (int)temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(((int)temp_v0 + (int)**(short **)(temp_v4 + 0xc) / 2 + (int)*(short *)(temp_v4 + 8))
                      - temp_v2 / 2,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002be744(param_1 + 200,temp_v6,temp_v7,temp_v3);
  return;
}
