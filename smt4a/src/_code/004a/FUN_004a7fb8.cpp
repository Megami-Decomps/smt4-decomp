/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a7fb8` (_code @ 0x4a7fb8, 0x104 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00162758(int, unsigned int, unsigned int, unsigned int);
int FUN_00180118(unsigned int);
int FUN_0018349c(...);
int VectorSignedToFloat(int, int);

/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_6_stack;

extern unsigned int uRam0057f0b0; /* 0x57f0b0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00162758. */
/* Supplied declaration required: FUN_00180118. */
/* Supplied declaration required: FUN_0018349c. */
extern unsigned int FUN_002a4b28(unsigned short);


void FUN_004a7fb8(int param_1,unsigned short param_2,int param_3,int param_4,int param_5,int param_6)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8;
  unsigned int in_fpscr;
  
  VectorSignedToFloat(0x100 - param_6,(unsigned char)(in_fpscr >> 0x16) & 3);
  if (param_4 != 0) {
    temp_v2 = FUN_0018349c(param_1 + 200,param_3 + 0x42f);
    temp_v6 = 0x499;
    if (param_5 == 0) {
      temp_v5 = 0x9fe7ffff;
    }
    else {
      temp_v5 = 0xf5ff9fff;
    }
    temp_v7 = 3;
  }
  else {
    temp_v2 = FUN_0018349c(param_1 + 200,param_3 + 0x40e);
    temp_v6 = 0x48b;
    temp_v7 = 2;
    temp_v5 = 0xffffffff;
  }
  temp_v0 = *(short *)(temp_v2 + 8);
  temp_v1 = *(short *)(temp_v2 + 10);
  temp_v3 = FUN_002a4b28(param_2);
  temp_v8 = temp_v3 == 0;
  if (temp_v8) {
    temp_v3 = (unsigned int)*(unsigned char *)(param_1 + 0x95);
  }
  temp_v4 = uRam0057f0b0;
  if (!temp_v8 || temp_v3 != 0) {
    temp_v4 = (unsigned int)param_2;
    FUN_00180118(temp_v4);
  }
  temp_v2 = FUN_0018349c(param_1 + 200,temp_v6);
  VectorSignedToFloat((int)*(short *)(temp_v2 + 10) + (int)temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)*(short *)(temp_v2 + 8) + (int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162758(param_1 + 200,temp_v7,temp_v5,temp_v4);
  return;
}

} /* extern "C" */
