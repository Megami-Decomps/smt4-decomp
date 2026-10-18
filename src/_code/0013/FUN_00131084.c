/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00131084` (_code @ 0x131084, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00131084_arg0 fn_00131084_arg0;
struct fn_00131084_arg0 {
    unsigned char pad_0x0[0x10];
    byte field_0x10; /* +0x10 */
    unsigned char pad_0x11[0x3];
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
};

extern unsigned int FUN_002b4e8c(fn_00131084_arg0 *, unsigned int, unsigned int, unsigned int);


void FUN_00131084(fn_00131084_arg0 *param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int temp_v0;
  
  if (param_1->field_0x10 == 0) {
    temp_v0 = FUN_002b4e8c(param_1,param_2,param_3,0x144);
    param_1->field_0x14 = temp_v0;
    param_1->field_0x18 = param_2;
    param_1->field_0x10 = 1;
    param_1->field_0x1c = param_3;
  }
  return;
}
