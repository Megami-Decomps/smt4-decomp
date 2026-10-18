/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a7700` (_code @ 0x1a7700, 0x18c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_6_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_0028889c(unsigned int);
/* Supplied declaration required: FUN_002b7118. */
/* Supplied declaration required: FUN_002be77c. */
/* Supplied declaration required: FUN_002bf460. */
/* Supplied declaration required: FUN_002bf558. */
extern int FUN_002bf6d0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf710. */


void FUN_001a7700(unsigned int param_1,unsigned int param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int in_fpscr;
  
  if (param_5 != 0) {
    FUN_002bf558(2,0x24,0xb,param_3,param_4,0x65);
    temp_v3 = 0xffffffff;
    FUN_002bf710();
    if (param_6 != 0) {
      FUN_002bf460(2,0x24,0xa0,param_3,param_4,0x6f);
    }
    else {
      FUN_002bf460(2,0x24,0x9c,param_3,param_4,0x6f);
    }
  }
  else if (param_6 != 0) {
    FUN_002bf558(2,0x24,10,param_3,param_4,0x65);
    temp_v3 = 0xff;
    FUN_002bf460(2,0x24,0xa0,param_3,param_4,0x6f);
  }
  else {
    FUN_002bf558(2,0x24,9,param_3,param_4,0x65);
    temp_v3 = 0xff;
    FUN_002bf460(2,0x24,0x9c,param_3,param_4,0x6f);
  }
  FUN_002bf710();
  temp_v0 = FUN_0028889c(param_2);
  temp_v1 = FUN_002bf6d0(0x24,0xa4);
  temp_v2 = temp_v0;
  FUN_002b7118(temp_v0,2);
  VectorSignedToFloat((int)*(short *)(temp_v1 + 8) + (**(short **)(temp_v1 + 0xc) - temp_v2) / 2 + param_3
                      ,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v1 + 10) + param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002be77c(2,temp_v3,temp_v0);
  return;
}
