/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00230aec` (_code @ 0x230aec, 0xa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bdf94(unsigned int, int, int, unsigned int, unsigned int, unsigned int, unsigned char *, unsigned int);
int FUN_002be304(unsigned int);
int FUN_002bed3c(void);
int VectorSignedToFloat(unsigned int, int);

/* stack frame of param_9: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_9_stack;

extern unsigned char LAB_00230b8c; /* 0x230b8c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002bdf94. */
/* Supplied declaration required: FUN_002be304. */
/* Supplied declaration required: FUN_002bed3c. */


void FUN_00230aec(float *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8,
                 unsigned int param_9)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned int in_fpscr;
  float temp_v0;
  float temp_v1;
  
  FUN_002be304(param_7);
  temp_v0 = (float)VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = (float)VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002bdf94(param_2,(int)(*param_1 + param_1[2] + temp_v0),(int)(param_1[1] + param_1[3] + temp_v1),
               param_5,param_6,param_8,&LAB_00230b8c,param_9);
  FUN_002bed3c();
  return;
}

} /* extern "C" */
