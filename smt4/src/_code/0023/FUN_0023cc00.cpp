/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023cc00` (_code @ 0x23cc00, 0xec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00289f18(int, unsigned int, int, unsigned int, unsigned int, int);
int FUN_0028a0d0(int, unsigned int, unsigned int, unsigned int, unsigned int, int);
int VectorSignedToFloat(int, int);

/* stack frame of param_8: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_8_stack;

extern unsigned char g_btlUi; /* 0x439c88 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00289f18. */
/* Supplied declaration required: FUN_0028a0d0. */
extern int FUN_002bf4f8(unsigned int, unsigned int);


void FUN_0023cc00(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6,int param_7,int param_8)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int in_fpscr;
  
  temp_v0 = (*(int *)((unsigned char *)&g_btlUi + 0x20));
  FUN_00289f18((*(int *)((unsigned char *)&g_btlUi + 0x20)) + 0x2460,param_3,param_2,param_4,param_5,1);
  temp_v2 = 0;
  if (param_2 == 0) {
    temp_v2 = 0x3fa;
  }
  else if (param_2 == 1) {
    temp_v2 = 0x403;
  }
  else if (param_2 == 2) {
    temp_v2 = 0x40c;
  }
  else if (param_2 == 3) {
    temp_v2 = 0x415;
  }
  else if (param_2 == 4) {
    temp_v2 = 0x41f;
  }
  temp_v1 = FUN_002bf4f8(0x15,temp_v2);
  VectorSignedToFloat((int)*(short *)(temp_v1 + 10) + param_8 + 0x11,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)*(short *)(temp_v1 + 8) + param_7 + 0x27,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_0028a0d0(temp_v0,param_3,param_4,param_5,param_6,0);
  return;
}

} /* extern "C" */
