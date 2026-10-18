/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004932ec` (_code @ 0x4932ec, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_5_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0018152c. */


void FUN_004932ec(float *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned int in_fpscr;
  float temp_v0;
  float temp_v1;
  
  temp_v0 = (float)VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = (float)VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_0018152c(param_2,(int)(*param_1 + param_1[2] + temp_v0),(int)(param_1[1] + param_1[3] + temp_v1),
               param_5,0);
  return;
}
