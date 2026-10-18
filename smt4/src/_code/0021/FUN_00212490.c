/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00212490` (_code @ 0x212490, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_5_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002bf288. */


void FUN_00212490(float *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 char *param_5)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  char temp_v0;
  unsigned int in_fpscr;
  float temp_v1;
  float temp_v2;
  int temp_v3;
  float temp_v4;
  float temp_v5;
  
  temp_v4 = param_1[1];
  temp_v5 = param_1[3];
  temp_v1 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = (float)VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v3 = (int)(*param_1 + param_1[2] + temp_v1);
  temp_v0 = *param_5;
  while (temp_v0 != '\0') {
    if (*param_5 != 0x20) {
      FUN_002bf288(2,0xd,*param_5 - 0x30,temp_v3,(int)(temp_v4 + temp_v5 + temp_v2),param_4);
    }
    param_5 = param_5 + 1;
    temp_v3 = temp_v3 + 7;
    temp_v0 = *param_5;
  }
  return;
}
