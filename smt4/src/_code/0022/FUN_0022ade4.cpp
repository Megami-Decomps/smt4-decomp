/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022ade4` (_code @ 0x22ade4, 0x1a8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002be5a4(unsigned int, unsigned int, unsigned int, int);
int FUN_002bf288(...);
int FUN_002bf380(int, int, int, int, int, int);
int FUN_002bf4f8(...);
int efctSetSpeed(void);
int VectorSignedToFloat(int, int);

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_5_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf4f8. */
/* Supplied declaration required: efctSetSpeed. */


void FUN_0022ade4(int param_1,int param_2,int param_3,int param_4,int param_5)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int in_fpscr;
  unsigned long long temp_v7;
  
  efctSetSpeed();
  if (param_4 != 0) {
    temp_v2 = FUN_002bf4f8(0x2a,param_2 + 0x15);
    temp_v6 = (int)*(short *)(temp_v2 + 8);
    temp_v2 = (int)*(short *)(temp_v2 + 10);
    FUN_002bf380(2,0x2a,1,temp_v6,temp_v2,param_5);
  }
  else {
    temp_v2 = FUN_002bf4f8(0x2a,param_2 + 5);
    temp_v6 = (int)*(short *)(temp_v2 + 8);
    temp_v2 = (int)*(short *)(temp_v2 + 10);
    FUN_002bf380(2,0x2a,0,temp_v6,temp_v2,param_5);
  }
  VectorSignedToFloat(0x100 - param_5,(unsigned char)(in_fpscr >> 0x16) & 3);
  if (param_4 != 0) {
    temp_v7 = FUN_002bf4f8(0x2a,0x14);
    temp_v5 = (unsigned int)((unsigned long long)temp_v7 >> 0x20);
    temp_v0 = *(short *)((int)temp_v7 + 8);
    temp_v1 = *(short *)((int)temp_v7 + 10);
    if (param_4 == 2) {
      temp_v5 = 0x72e027ff;
    }
    temp_v3 = 3;
    if (param_4 != 2) {
      temp_v5 = 0xffffffff;
    }
  }
  else {
    temp_v4 = FUN_002bf4f8(0x2a,4);
    temp_v0 = *(short *)(temp_v4 + 8);
    temp_v1 = *(short *)(temp_v4 + 10);
    temp_v5 = 0x323232ff;
    temp_v3 = 2;
  }
  VectorSignedToFloat(temp_v1 + temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v0 + temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002be5a4(temp_v3,temp_v5,*(unsigned int *)(param_1 + param_3 * 4 + 0x530),temp_v0 + temp_v6);
  if (param_4 != 0) {
    temp_v2 = FUN_002bf4f8(0x2a,param_2 + 0x15);
    if (*(int *)(param_1 + 0xc5c) >= 8) {
      FUN_002bf288(2,0x2a,0x13,(int)*(short *)(temp_v2 + 8),(int)*(short *)(temp_v2 + 10),param_5);
      return;
    }
    FUN_002bf288(2,0x2a,0x12,(int)*(short *)(temp_v2 + 8),(int)*(short *)(temp_v2 + 10),param_5);
  }
  return;
}

} /* extern "C" */
