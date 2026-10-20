/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004935c8` (_code @ 0x4935c8, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00164b5c(int, double, int, int, int, int);
int FUN_001677c0(void);
int VectorSignedToFloat(unsigned int, int);

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp20; /* 0x20: local_20 */
} param_5_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: FUN_001677c0. */


void FUN_004935c8(float *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned int in_fpscr;
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  int temp_v4;
  
  temp_v3 = param_1[2];
  temp_v0 = (float)VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = *param_1;
  temp_v1 = (float)VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v4 = (int)(param_1[1] + param_1[3] + temp_v1);
  FUN_001677c0();
  FUN_00164b5c(2,param_1[4],param_2,(int)(temp_v2 + temp_v3 + temp_v0),temp_v4,param_5);
  FUN_001677c0();
  return;
}

} /* extern "C" */
