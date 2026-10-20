/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f6424` (_code @ 0x3f6424, 0x2a8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_00162790(...);
int efctSetSpeed(void);
int FUN_00169a1c(int, int, int, int);
int FUN_001835b4(int, int, int, int, int, int);
int FUN_00184310(void);
int FUN_003f533c(...);
int FUN_003f74a8(unsigned int, int);
int VectorSignedToFloat(...);

/* stack frame of param_6: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_6_stack;

extern unsigned char LAB_003f66d0; /* 0x3f66d0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_00169a1c. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00184310. */
extern int FUN_0019e52c(void);
/* Supplied declaration required: FUN_003f533c. */
/* Supplied declaration required: FUN_003f74a8. */


void FUN_003f6424(unsigned int param_1,int param_2,unsigned int param_3,int param_4,int param_5,
                 int param_6)

{
/* irregular: irregular input(s): in_fpscr; 9 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int in_fpscr;
  unsigned char temp_v7 [92];
  unsigned int temp_v8;
  int iStack_30;
  unsigned int temp_v9;
  int iStack_28;
  
  temp_v8 = param_1;
  iStack_30 = param_2;
  temp_v9 = param_3;
  iStack_28 = param_4;
  efctSetSpeed();
  FUN_001835b4(2,0x31,0x7b,param_4,param_5,param_6);
  FUN_001835b4(2,0x31,0x7c,param_4,param_5,param_6);
  temp_v3 = FUN_001834a4(0x31,0x7d);
  temp_v6 = *(short *)(temp_v3 + 8) + param_4;
  temp_v3 = *(short *)(temp_v3 + 10) + param_5;
  if (*(unsigned short *)(param_2 + 2) >> 8 != 10) {
    temp_v2 = *(unsigned short *)(param_2 + 2) >> 8;
    switch(temp_v2) {
    case 0:
      temp_v4 = 0xae;
      break;
    case 1:
      temp_v4 = 0xb2;
      break;
    case 2:
      temp_v4 = 0xb0;
      break;
    case 3:
      temp_v4 = 0xb1;
      break;
    case 4:
      temp_v4 = 0xb3;
      break;
    case 5:
      temp_v4 = 5;
      break;
    case 6:
      temp_v4 = 0xba;
      break;
    case 7:
      temp_v4 = 0xb9;
      break;
    case 8:
      temp_v4 = 0xaf;
      break;
    case 9:
      temp_v4 = 0xbb;
      break;
    default:
      temp_v4 = -1;
    }
    if (temp_v4 < 0) {
      temp_v4 = 0;
    }
    else if (temp_v2 == 9) {
      temp_v4 = 0x29d;
    }
    else {
      temp_v4 = FUN_0019e52c();
    }
    FUN_00184310();
    temp_v0 = 0;
    if (temp_v4 != 0) {
      temp_v0 = *(short *)(temp_v4 + 0x9c);
    }
    if (temp_v4 != 0 && temp_v0 != 0) {
      FUN_00169a1c(temp_v0,temp_v6,temp_v3,param_6 + 5);
    }
    else {
      FUN_001835b4(2,0x31,4,temp_v6,temp_v3,param_6 + 5);
    }
  }
  else {
    FUN_001835b4(2,0x31,4,temp_v6,temp_v3,param_6 + 5);
  }
  temp_v3 = FUN_001834a4(0x31,0x7e);
  temp_v0 = *(short *)(temp_v3 + 8);
  temp_v1 = *(short *)(temp_v3 + 10);
  temp_v5 = temp_v8;
  FUN_003f74a8(temp_v8,param_2);
  FUN_00100388(temp_v7,&LAB_003f66d0,temp_v5);
  VectorSignedToFloat(0xfb - param_6,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v1 + param_5,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v0 + param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(2,0xffffffff,temp_v7);
  temp_v3 = FUN_001834a4(0x31,0x83);
  temp_v6 = *(short *)(temp_v3 + 8) + param_4;
  VectorSignedToFloat(0xfb - param_6,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v3 + 10) + param_5,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(2,0xff,param_2 + 4,temp_v6);
  FUN_003f533c(temp_v8,param_4,param_5,param_6 + 5,temp_v9,0x84,0x85,0x86,0xff,0);
  return;
}

} /* extern "C" */
