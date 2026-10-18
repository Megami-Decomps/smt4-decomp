/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1b64` (_code @ 0x2c1b64, 0x13c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002c1b64_arg0 fn_002c1b64_arg0;
struct fn_002c1b64_arg0 {
    unsigned char pad_0x0[0x10];
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x80];
    undefined4 field_0x94; /* +0x94 */
    unsigned char pad_0x98[0x10c];
    undefined4 field_0x1a4; /* +0x1a4 */
    unsigned char pad_0x1a8[0x10];
    undefined4 field_0x1b8; /* +0x1b8 */
    unsigned char pad_0x1bc[0x374];
    undefined4 field_0x530; /* +0x530 */
    unsigned char pad_0x534[0x7c];
    byte field_0x5b0; /* +0x5b0 */
};

/* Unsupported intrinsic, declaration required: coprocessor_movefromRt (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002c1b64(fn_002c1b64_arg0 *param_1)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr12, in_cr2, in_cr4, in_s1, in_s2, in_s8; 13 native warning(s); review required */
  int temp_v0;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr2;
  unsigned int in_cr4;
  unsigned int in_cr12;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s8;
  unsigned char uStack_8;
  
  if (param_1->field_0x5b0 == 0) {
    coprocessor_load(0,in_cr1,&uStack_8);
    do {
      param_1->field_0x94 = in_s1;
      in_s1 = param_1->field_0x1a4;
      param_1->field_0x1b8 = in_s8;
      param_1->field_0x10 = in_s2;
      coprocessor_storelong(0,in_cr0,0);
    } while( 1 );
  }
  temp_v0 = coprocessor_movefromRt(10,5,0,in_cr12,in_cr0);
  coprocessor_function(0xc,1,0,in_cr0,in_cr0,in_cr0);
  coprocessor_movefromRt(10,5,0,in_cr4,in_cr0);
  coprocessor_function(10,0xf,0,in_cr2,in_cr0,in_cr2);
  coprocessor_movefromRt(10,5,0,in_cr12,in_cr0);
  coprocessor_load(0,in_cr2,temp_v0 + 0x3fc);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
