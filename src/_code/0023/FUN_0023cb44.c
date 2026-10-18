/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023cb44` (_code @ 0x23cb44, 0x16c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

extern unsigned int DAT_00439ca8; /* 0x439ca8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0028a210. */
/* Supplied declaration required: FUN_002bf6d0. */


void FUN_0023cb44(unsigned int param_1,int param_2,unsigned int param_3,int param_4,int param_5)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  short *psVar7;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int in_fpscr;
  
  temp_v2 = DAT_00439ca8;
  temp_v5 = 0;
  if (param_2 == 0) {
    temp_v5 = 0x3fa;
  }
  else if (param_2 == 1) {
    temp_v5 = 0x403;
  }
  else if (param_2 == 2) {
    temp_v5 = 0x40c;
  }
  else if (param_2 == 3) {
    temp_v5 = 0x415;
  }
  else if (param_2 == 4) {
    temp_v5 = 0x1cc;
  }
  temp_v3 = FUN_002bf6d0(0x15,temp_v5);
  if (param_2 != 4) {
    VectorSignedToFloat(param_5 + 0x11 + (int)*(short *)(temp_v3 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 8) + param_4 + 0x27,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_0028a210(temp_v2,param_3,0,param_4 + 0x27);
    return;
  }
  temp_v0 = *(short *)(temp_v3 + 8);
  temp_v1 = *(short *)(temp_v3 + 10);
  temp_v3 = FUN_002bf6d0(0x15,0x416);
  psVar7 = *(short **)(temp_v3 + 0xc);
  if (psVar7 != (short *)0x0) {
    temp_v7 = (unsigned int)*(short *)(temp_v3 + 8);
    temp_v8 = temp_v7 + (int)*psVar7 / 2;
    temp_v6 = (unsigned int)*(short *)(temp_v3 + 10);
    temp_v3 = temp_v6 + (int)psVar7[1] / 2;
  }
  else {
    temp_v7 = (unsigned int)*(unsigned short *)(temp_v3 + 6);
    temp_v6 = temp_v7 & 0xffff7fff;
    temp_v8 = (int)*(short *)(temp_v3 + 8) + ((*(unsigned short *)(temp_v3 + 4) & 0xffff7fff) >> 1);
    temp_v3 = (int)*(short *)(temp_v3 + 10) + (temp_v6 >> 1);
  }
  temp_v4 = FUN_002bf6d0(0x15,0x71,temp_v6,temp_v7);
  param_4 = *(short *)(temp_v4 + 8) + param_4;
  VectorSignedToFloat((temp_v1 - temp_v3) + *(short *)(temp_v4 + 10) + param_5,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((temp_v0 - temp_v8) + param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_0028a210(temp_v2,param_3,0,param_4);
  return;
}
