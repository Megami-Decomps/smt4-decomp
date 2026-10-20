/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00116968` (_code @ 0x116968, 0xdc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b76d0(float *);
int FUN_002c1b64(unsigned int, int);
int VectorSignedToFloat(int, int);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_5: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b76d0. */
/* Supplied declaration required: FUN_002c1b64. */


void FUN_00116968(int param_1,int param_2,int param_3,int param_4,unsigned int param_5)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  float temp_v0;
  float temp_v1;
  float temp_v2;
  int temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  
  temp_v5 = 1.0f;
  temp_v6 = 1.0f;
  temp_v7 = 1.0f;
  temp_v8 = 1.0f;
  FUN_002c1b64(DAT_0044ea00,0);
  temp_v3 = 0;
  do {
    temp_v4 = (float)VectorUnsignedToFloat(param_5 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v4 = temp_v4 * 0.003921569f;
    temp_v0 = temp_v6;
    temp_v1 = temp_v7;
    temp_v2 = temp_v4;
    if ((((temp_v3 != 0) && (temp_v1 = temp_v4, temp_v2 = temp_v8, temp_v3 != 1)) &&
        (temp_v0 = temp_v4, temp_v1 = temp_v7, temp_v3 != 2)) && (temp_v0 = temp_v6, temp_v3 == 3)) {
      temp_v5 = temp_v4;
    }
    temp_v8 = temp_v2;
    temp_v7 = temp_v1;
    temp_v6 = temp_v0;
    temp_v3 = temp_v3 + 1;
    param_5 = param_5 >> 8;
  } while (temp_v3 < 4);
  VectorSignedToFloat(param_3 - param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(param_4 - param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002b76d0(&temp_v5);
  return;
}

} /* extern "C" */
