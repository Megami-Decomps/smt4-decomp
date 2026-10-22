/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022f770` (_code @ 0x22f770, 0x24c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00162790(...);
int FUN_00164b5c(...);
int efctSetSpeed(void);
int FUN_001835b4(...);
int FUN_0021b390(...);
int VectorSignedToFloat(...);

/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} param_5_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_0021b390. */
extern unsigned int dataTableGetEntry24Byte0(unsigned int);
extern unsigned int dataTableGetEntry24Member(unsigned int);
extern int selectionGetValidatedField(void);


void FUN_0022f770(int param_1,int param_2,int param_3,int param_4,int param_5)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int in_fpscr;
  unsigned char temp_v5 [64];
  unsigned int temp_v6;
  
  temp_v0 = param_1 + param_2 * 4;
  temp_v6 = dataTableGetEntry24Byte0(*(unsigned int *)(temp_v0 + 0x927c));
  temp_v1 = selectionGetValidatedField();
  efctSetSpeed();
  if (param_5 != 0) {
    FUN_00164b5c(2,0x1a,0x12,param_3,param_4,0x65);
    FUN_001835b4(2,0x1a,0x95,param_3,param_4,0x6a);
    if (temp_v1 >= 0) {
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
    temp_v4 = 0x9fe7ffff;
    temp_v3 = 0xff;
  }
  else {
    FUN_00164b5c(2,0x1a,0x11,param_3,param_4,0x65);
    FUN_001835b4(2,0x1a,0x90,param_3,param_4,0x6a);
    if (-1 < temp_v1) {
      FUN_001835b4(2,0x1a,0x91,param_3,param_4,0x6f);
    }
    temp_v3 = 0xffffffff;
    temp_v4 = 0xffffffff;
  }
  temp_v2 = dataTableGetEntry24Member(*(unsigned int *)(temp_v0 + 0x927c));
  temp_v0 = FUN_001834a4(0x1a,0xa4);
  VectorSignedToFloat(*(short *)(temp_v0 + 10) + param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v0 + 8) + param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(2,temp_v3,temp_v2);
  temp_v0 = FUN_001834a4(0x1a,0xa6);
  FUN_0021b390(param_1,temp_v6,temp_v1,temp_v5);
  VectorSignedToFloat(*(short *)(temp_v0 + 10) + param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v0 + 8) + param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(2,temp_v4,temp_v5);
  return;
}

} /* extern "C" */
