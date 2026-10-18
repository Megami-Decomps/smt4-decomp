/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c20a8` (_code @ 0x2c20a8, 0x168 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002c20a8_arg0 fn_002c20a8_arg0;
struct fn_002c20a8_arg0 {
    unsigned char pad_0x0[0x1];
    undefined1 field_0x1; /* +0x1 */
    unsigned char pad_0x2[0x2];
    float field_0x4; /* +0x4 */
    float field_0x8; /* +0x8 */
    float field_0xc; /* +0xc */
    float field_0x10; /* +0x10 */
    float field_0x14; /* +0x14 */
    float field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
};

/* Unsupported intrinsic, declaration required: coprocessor_movefromRt (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002c20a8(fn_002c20a8_arg0 *param_1,unsigned int *param_2,unsigned int *param_3,
                 unsigned int *param_4)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr4, in_cr8; 10 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr4;
  unsigned int in_cr8;
  float temp_v3;
  float temp_v4;
  unsigned char temp_v5 [8];
  
  temp_v3 = (float)param_2[1];
  temp_v4 = (float)param_2[2];
  param_1->field_0x4 = (float)*param_2;
  param_1->field_0x8 = temp_v3;
  param_1->field_0xc = temp_v4;
  temp_v3 = (float)param_3[1];
  temp_v4 = (float)param_3[2];
  param_1->field_0x10 = (float)*param_3;
  param_1->field_0x14 = temp_v3;
  param_1->field_0x18 = temp_v4;
  temp_v1 = param_4[1];
  temp_v2 = param_4[2];
  param_1->field_0x1c = *param_4;
  param_1->field_0x20 = temp_v1;
  param_1->field_0x24 = temp_v2;
  param_1->field_0x1 = 0;
  temp_v0 = coprocessor_movefromRt(10,5,0,in_cr4,in_cr0);
  coprocessor_function(10,0xf,5,in_cr0,in_cr1,in_cr8);
  if (((temp_v0 >> 0x1c) & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_load(0,in_cr1,0xb0);
  coprocessor_load(0,in_cr1,temp_v5);
  do {
    coprocessor_storelong(0,in_cr0,(unsigned int)param_1 >> 10);
  } while( 1 );
}
