/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049339c` (_code @ 0x49339c, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_5_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00164b5c. */


void FUN_0049339c(float *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned int in_fpscr;
  float temp_v0;
  float temp_v1;
  
  temp_v0 = (float)VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = (float)VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00164b5c(2,param_1[4],param_2,(int)(*param_1 + param_1[2] + temp_v1),
               (int)(param_1[1] + param_1[3] + temp_v0),param_5);
                    /* WARNING: Treating indirect jump as return */
  return;
}
