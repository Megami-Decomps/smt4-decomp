/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a74c0` (_code @ 0x1a74c0, 0x238 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} param_5_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00288774. */
extern unsigned int FUN_0028889c(unsigned int);
extern unsigned int FUN_002888dc(unsigned int);
extern int FUN_0029ee60(void);
/* Supplied declaration required: FUN_002be77c. */
/* Supplied declaration required: FUN_002bf460. */
/* Supplied declaration required: FUN_002bf558. */
extern int FUN_002bf6d0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf710. */


void FUN_001a74c0(unsigned int param_1,unsigned int param_2,int param_3,int param_4,int param_5)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int in_fpscr;
  unsigned char temp_v5 [64];
  unsigned int temp_v6;
  
  temp_v6 = FUN_002888dc(param_2);
  temp_v0 = FUN_0029ee60();
  if (param_5 != 0) {
    FUN_002bf558(2,0x24,0x12,param_3,param_4,0x65);
    FUN_002bf460(2,0x24,0x95,param_3,param_4,0x6a);
    if (temp_v0 >= 0) {
      FUN_002bf710();
      FUN_002bf460(2,0x24,0x97,param_3,param_4,0x6d);
      FUN_002bf710();
      FUN_002bf460(2,0x24,0x91,param_3,param_4,0x6f);
    }
    else {
      FUN_002bf710();
      FUN_002bf460(2,0x24,0x96,param_3,param_4,0x6f);
      FUN_002bf710();
    }
    temp_v3 = 0xffffffff;
    temp_v4 = 0xff;
  }
  else {
    FUN_002bf558(2,0x24,0x11,param_3,param_4,0x65);
    FUN_002bf460(2,0x24,0x90,param_3,param_4,0x6a);
    if (-1 < temp_v0) {
      FUN_002bf460(2,0x24,0x91,param_3,param_4,0x6f);
    }
    temp_v3 = 0xff;
    temp_v4 = 0xffffffff;
  }
  temp_v1 = FUN_0028889c(param_2);
  temp_v2 = FUN_002bf6d0(0x24,0xa4);
  VectorSignedToFloat(*(short *)(temp_v2 + 10) + param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v2 + 8) + param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002be77c(2,temp_v3,temp_v1);
  temp_v2 = FUN_002bf6d0(0x24,0xa6);
  FUN_00288774(param_1,temp_v6,temp_v0,temp_v5);
  VectorSignedToFloat(*(short *)(temp_v2 + 10) + param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v2 + 8) + param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002be77c(2,temp_v4,temp_v5);
  return;
}
