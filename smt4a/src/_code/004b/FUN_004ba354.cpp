/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ba354` (_code @ 0x4ba354, 0x2f8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00162790(...);
int FUN_00164b5c(int, int, int, int, int, int);
int efctSetSpeed(void);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_00183bb0(void);
int effectSetByteSpeed(...);
int VectorSignedToFloat(...);

/* stack frame of param_5: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
} param_5_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
extern int FUN_002e5d88(unsigned short);
/* Supplied declaration required: effectSetByteSpeed. */


void FUN_004ba354(int param_1,int param_2,int param_3,int param_4,int param_5)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int in_fpscr;
  unsigned int temp_v10;
  int temp_v11;
  
  efctSetSpeed();
  if (param_4 != 0) {
    temp_v1 = FUN_001834a4(0x1f,param_2 + 0x15);
    temp_v8 = (int)*(short *)(temp_v1 + 8);
    temp_v1 = (int)*(short *)(temp_v1 + 10);
    temp_v5 = param_5 + 1;
    if (*(char *)(param_1 + 0x85) != '\0') {
      FUN_00164b5c(2,0x1f,0x23,temp_v8,temp_v1,param_5);
      efctSetSpeed();
      FUN_001835b4(2,0x1f,0x31,temp_v8,temp_v1,temp_v5);
      FUN_001835b4(2,0x1f,0x32,temp_v8,temp_v1,temp_v5);
      efctSetSpeed();
    }
    else {
      FUN_00164b5c(2,0x1f,1,temp_v8,temp_v1,param_5);
      efctSetSpeed();
      FUN_001835b4(2,0x1f,0x27,temp_v8,temp_v1,temp_v5);
      FUN_001835b4(2,0x1f,0x28,temp_v8,temp_v1,temp_v5);
      efctSetSpeed();
    }
  }
  else {
    temp_v1 = FUN_001834a4(0x1f,param_2 + 5);
    temp_v8 = (int)*(short *)(temp_v1 + 8);
    temp_v1 = (int)*(short *)(temp_v1 + 10);
    FUN_00164b5c(2,0x1f,0,temp_v8,temp_v1,param_5);
  }
  VectorSignedToFloat(0x100 - param_5,(unsigned char)(in_fpscr >> 0x16) & 3);
  if (param_4 != 0) {
    temp_v5 = FUN_001834a4(0x1f,0x14);
    temp_v9 = (int)*(short *)(temp_v5 + 8);
    temp_v5 = (int)*(short *)(temp_v5 + 10);
    temp_v2 = FUN_001834a4(0x1f,0x2c);
    temp_v11 = (int)*(short *)(temp_v2 + 8);
    temp_v2 = (int)*(short *)(temp_v2 + 10);
    temp_v10 = 3;
    temp_v6 = 0x57d8ffff;
    if (*(char *)(param_1 + 0x85) != '\0') {
      if (param_4 != 2) {
        temp_v6 = 0xf5ff9fff;
      }
    }
    else if (param_4 != 2) {
      temp_v6 = 0x9fe7ffff;
    }
  }
  else {
    temp_v5 = FUN_001834a4(0x1f,4);
    temp_v9 = (int)*(short *)(temp_v5 + 8);
    temp_v5 = (int)*(short *)(temp_v5 + 10);
    temp_v2 = FUN_001834a4(0x1f,0x2b);
    temp_v11 = (int)*(short *)(temp_v2 + 8);
    temp_v6 = 0xffffffff;
    temp_v2 = (int)*(short *)(temp_v2 + 10);
    temp_v10 = 2;
  }
  temp_v7 = param_1 + param_2 * 4;
  temp_v4 = *(int *)(param_1 + param_3 * 4 + 0x7ec);
  temp_v3 = *(int *)(temp_v7 + 0x8ec);
  if (0 < temp_v3) {
    if (temp_v3 == 0x1bc6) {
      temp_v0 = *(unsigned short *)(temp_v4 + 0x54);
      if (*(char *)(temp_v4 + 0x21) == '\x05') {
        temp_v0 = *(unsigned short *)(temp_v4 + 0x56);
      }
      temp_v3 = FUN_002e5d88(temp_v0);
      if (temp_v3 == 0) {
        effectSetByteSpeed(0x66);
      }
    }
    FUN_001835b4(2,0xb,*(unsigned int *)(temp_v7 + 0x8ec),temp_v8 + temp_v11,temp_v2 + temp_v1,param_5,temp_v5);
    FUN_00183bb0();
  }
  VectorSignedToFloat(temp_v5 + temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v9 + temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(temp_v10,temp_v6,temp_v4);
  return;
}

} /* extern "C" */
