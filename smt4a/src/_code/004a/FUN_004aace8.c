/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004aace8` (_code @ 0x4aace8, 0x1b4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

extern int DAT_0057a9c8; /* 0x57a9c8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_001834a4(unsigned int, unsigned int);
extern int FUN_0035fa18(int, int, short *, int);
/* Supplied declaration required: FUN_004aa0b0. */


void FUN_004aace8(unsigned int param_1,int param_2,unsigned int param_3,int param_4,int param_5)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  short *psVar7;
  int temp_v6;
  unsigned int in_fpscr;
  
  temp_v2 = DAT_0057a9c8;
  temp_v4 = 0;
  if (param_2 == 0) {
    temp_v4 = 0x3fa;
  }
  else if (param_2 == 1) {
    temp_v4 = 0x403;
  }
  else if (param_2 == 2) {
    temp_v4 = 0x40c;
  }
  else if (param_2 == 3) {
    temp_v4 = 0x415;
  }
  else if (param_2 == 4) {
    temp_v4 = 0x1cc;
  }
  temp_v3 = FUN_001834a4(0xd,temp_v4);
  if (param_2 != 4) {
    VectorSignedToFloat(param_5 + 0x11 + (int)*(short *)(temp_v3 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 8) + param_4 + 0x27,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_004aa0b0(temp_v2,param_3,0,param_4 + 0x27);
    return;
  }
  temp_v0 = *(short *)(temp_v3 + 8);
  temp_v1 = *(short *)(temp_v3 + 10);
  temp_v3 = FUN_001834a4(0xd,0x416);
  psVar7 = *(short **)(temp_v3 + 0xc);
  if (psVar7 != (short *)0x0) {
    temp_v5 = (int)*(short *)(temp_v3 + 8) + (int)*psVar7 / 2;
    temp_v6 = (int)*(short *)(temp_v3 + 10);
    temp_v3 = temp_v6 + (int)psVar7[1] / 2;
  }
  else {
    temp_v6 = (int)*(short *)(temp_v3 + 8);
    psVar7 = (short *)(*(unsigned short *)(temp_v3 + 6) & 0xffff7fff);
    temp_v5 = temp_v6 + ((*(unsigned short *)(temp_v3 + 4) & 0xffff7fff) >> 1);
    temp_v3 = (int)*(short *)(temp_v3 + 10) + ((unsigned int)psVar7 >> 1);
  }
  temp_v6 = FUN_0035fa18(temp_v2 + 0x28c4,temp_v5,psVar7,temp_v6);
  if (temp_v6 != 0) {
    temp_v6 = FUN_001834a4(0xd,0x71);
  }
  else {
    temp_v6 = FUN_001834a4(0xd,0x70);
  }
  temp_v5 = temp_v0 - temp_v5;
  VectorSignedToFloat(*(short *)(temp_v6 + 10) + param_5 + (temp_v1 - temp_v3),
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v6 + 8) + param_4 + temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_004aa0b0(temp_v2,param_3,0,temp_v5);
  return;
}
