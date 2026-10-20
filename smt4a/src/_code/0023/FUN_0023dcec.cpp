/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023dcec` (_code @ 0x23dcec, 0x1e8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00162790(...);
int FUN_00164b5c(...);
int efctSetSpeed(void);
int FUN_001835b4(...);
int VectorSignedToFloat(...);

/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_5_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
extern unsigned int FUN_002ab7c4(unsigned int);
extern unsigned int FUN_002c9018(unsigned int);
extern int FUN_0031fe14(unsigned int);


void FUN_0023dcec(int param_1,int param_2,int param_3,int param_4,int param_5)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int in_fpscr;
  
  param_1 = param_1 + param_2 * 4;
  temp_v0 = FUN_002ab7c4(*(unsigned int *)(param_1 + 0x927c));
  efctSetSpeed();
  if (param_5 != 0) {
    FUN_00164b5c(2,0x1a,0x10,param_3,param_4,0x65);
    FUN_001835b4(2,0x1a,0x95,param_3,param_4,0x6a);
    temp_v1 = FUN_0031fe14(temp_v0);
    if (temp_v1 != 0) {
      efctSetSpeed();
      FUN_001835b4(2,0x1a,0x97,param_3,param_4,0x6d);
      efctSetSpeed();
      FUN_001835b4(2,0x1a,0x91,param_3,param_4,0x6f);
    }
    else {
      efctSetSpeed();
      FUN_001835b4(2,0x1a,0x96,param_3,param_4,0x6f);
      efctSetSpeed();
    }
    temp_v0 = 0xff;
  }
  else {
    FUN_00164b5c(2,0x1a,0xf,param_3,param_4,0x65);
    FUN_001835b4(2,0x1a,0x90,param_3,param_4,0x6a);
    temp_v1 = FUN_0031fe14(temp_v0);
    if (temp_v1 != 0) {
      FUN_001835b4(2,0x1a,0x91,param_3,param_4,0x6f);
    }
    temp_v0 = 0xffffffff;
  }
  temp_v2 = FUN_002c9018(*(unsigned int *)(param_1 + 0x927c));
  temp_v1 = FUN_001834a4(0x1a,0xa4);
  VectorSignedToFloat(*(short *)(temp_v1 + 10) + param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v1 + 8) + param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(2,temp_v0,temp_v2);
  return;
}

} /* extern "C" */
