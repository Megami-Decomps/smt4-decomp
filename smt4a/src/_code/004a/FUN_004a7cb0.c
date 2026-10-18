/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a7cb0` (_code @ 0x4a7cb0, 0x104 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern unsigned int FUN_0014bf3c(unsigned short, unsigned int);
/* Supplied declaration required: FUN_00162758. */
/* Supplied declaration required: FUN_0018349c. */
extern int FUN_004cfb24(unsigned int, unsigned int);


void FUN_004a7cb0(int param_1,unsigned short param_2,int param_3,int param_4,int param_5)

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
    temp_v2 = FUN_0018349c(param_1 + 200,param_3 + 0x42f);
    temp_v5 = 0x498;
    temp_v6 = 3;
    temp_v7 = 0xffffffff;
  }
  else {
    temp_v2 = FUN_0018349c(param_1 + 200,param_3 + 0x40e);
    temp_v5 = 0x48a;
    temp_v7 = 0x8262dff;
    temp_v6 = 2;
  }
  temp_v0 = *(short *)(temp_v2 + 8);
  temp_v1 = *(short *)(temp_v2 + 10);
  temp_v3 = FUN_0014bf3c(param_2,0);
  temp_v2 = FUN_004cfb24(temp_v3,2);
  temp_v4 = FUN_0018349c(param_1 + 200,temp_v5);
  VectorSignedToFloat((int)*(short *)(temp_v4 + 10) + (int)temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(((int)temp_v0 + (int)**(short **)(temp_v4 + 0xc) / 2 + (int)*(short *)(temp_v4 + 8))
                      - temp_v2 / 2,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162758(param_1 + 200,temp_v6,temp_v7,temp_v3);
  return;
}
