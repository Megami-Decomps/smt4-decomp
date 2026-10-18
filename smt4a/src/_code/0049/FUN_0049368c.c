/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049368c` (_code @ 0x49368c, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_6_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_00492c98. */


void FUN_0049368c(float *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  short *psVar3;
  unsigned int temp_v2;
  unsigned int in_fpscr;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  int temp_v7;
  
  FUN_001834a4(param_1[4]);
  temp_v5 = *param_1;
  temp_v6 = param_1[2];
  temp_v3 = (float)VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v4 = (float)VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v7 = (int)(param_1[1] + param_1[3] + temp_v4);
  temp_v0 = FUN_001834a4(param_1[4],param_2);
  psVar3 = *(short **)(temp_v0 + 0xc);
  if ((psVar3 != (short *)0x0) && (psVar3[2] == 1)) {
    temp_v2 = (unsigned int)*psVar3;
    temp_v1 = (unsigned int)psVar3[1];
  }
  else {
    temp_v2 = *(unsigned short *)(temp_v0 + 4) & 0xffff7fff;
    temp_v1 = *(unsigned short *)(temp_v0 + 6) & 0xffff7fff;
  }
  FUN_00492c98(2,param_1[4],param_2,(int)(temp_v5 + temp_v6 + temp_v3),temp_v7,temp_v2,temp_v1,param_5,param_6);
  return;
}
