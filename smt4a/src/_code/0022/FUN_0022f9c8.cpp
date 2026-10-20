/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022f9c8` (_code @ 0x22f9c8, 0x1a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00162790(...);
int FUN_00164b5c(...);
int FUN_001677c0(void);
int FUN_001835b4(...);
int FUN_0018408c(...);
int VectorSignedToFloat(...);

/* stack frame of param_6: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_6_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_0018408c. */
extern int FUN_002c9018(unsigned int);


void FUN_0022f9c8(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int in_fpscr;
  
  FUN_001677c0();
  if (param_5 != 0) {
    FUN_00164b5c(2,0x1a,0xb,param_3,param_4,0x65);
    temp_v3 = 0xff;
    FUN_001677c0();
    if (param_6 != 0) {
      FUN_001835b4(2,0x1a,0xa0,param_3,param_4,0x6f);
    }
    else {
      FUN_001835b4(2,0x1a,0x9c,param_3,param_4,0x6f);
    }
  }
  else if (param_6 != 0) {
    FUN_00164b5c(2,0x1a,10,param_3,param_4,0x65);
    temp_v3 = 0xffffffff;
    FUN_001835b4(2,0x1a,0xa0,param_3,param_4,0x6f);
  }
  else {
    FUN_00164b5c(2,0x1a,9,param_3,param_4,0x65);
    temp_v3 = 0xffffffff;
    FUN_001835b4(2,0x1a,0x9c,param_3,param_4,0x6f);
  }
  FUN_001677c0();
  temp_v0 = FUN_002c9018(*(unsigned int *)(param_1 + param_2 * 4 + 0x927c));
  temp_v1 = FUN_001834a4(0x1a,0xa4);
  temp_v2 = temp_v0;
  FUN_0018408c(temp_v0,2);
  VectorSignedToFloat((int)*(short *)(temp_v1 + 8) + (**(short **)(temp_v1 + 0xc) - temp_v2) / 2 + param_3
                      ,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v1 + 10) + param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(2,temp_v3,temp_v0);
  return;
}

} /* extern "C" */
