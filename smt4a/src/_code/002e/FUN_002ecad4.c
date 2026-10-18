/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ecad4` (_code @ 0x2ecad4, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002ecad4_arg0 fn_002ecad4_arg0;
struct fn_002ecad4_arg0 {
    unsigned char pad_0x0[0xc];
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    unsigned char field_0x14; /* +0x14 */
    unsigned char pad_0x15[0x3];
    undefined4 field_0x18; /* +0x18 */
    undefined1 field_0x1c; /* +0x1c */
    undefined1 field_0x1d; /* +0x1d */
    undefined1 field_0x1e; /* +0x1e */
};

extern unsigned int FUN_003100f6(void);


void FUN_002ecad4(fn_002ecad4_arg0 *param_1,unsigned int param_2,unsigned char param_3)

{
  unsigned int temp_v0;
  
  *(unsigned int *)&param_1->field_0x14 = param_2;
  param_1->field_0x1c = param_3;
  param_1->field_0x10 = 0;
  param_1->field_0x18 = 0;
  temp_v0 = FUN_003100f6();
  param_1->field_0xc = temp_v0;
  param_1->field_0x1d = 0;
  param_1->field_0x1e = 0;
  return;
}
