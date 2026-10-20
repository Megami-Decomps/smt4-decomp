/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030d27c` (_code @ 0x30d27c, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_0030d27c_arg2 fn_0030d27c_arg2;
struct fn_0030d27c_arg2 {
    unsigned char pad_0x0[0x4];
    byte field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
};

extern unsigned char DAT_00559bb8; /* 0x559bb8 */
extern unsigned char DAT_0055a7e8; /* 0x55a7e8 */


void FUN_0030d27c(unsigned int param_1,unsigned int *param_2,fn_0030d27c_arg2 *param_3)

{
  unsigned int temp_v0;
  
  if (param_2 != (unsigned int *)0x0) {
    *param_2 = (unsigned int)&DAT_0055a7e8;
    *(unsigned char *)(param_2 + 1) = param_3->field_0x4;
    temp_v0 = param_3->field_0x8;
    param_2[3] = param_3->field_0xc;
    param_2[2] = temp_v0;
    temp_v0 = param_3->field_0x10;
    param_2[5] = param_3->field_0x14;
    param_2[4] = temp_v0;
    *param_2 = (unsigned int)&DAT_00559bb8;
  }
  return;
}

} /* extern "C" */
