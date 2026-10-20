/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034ed38` (_code @ 0x34ed38, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_0034ed38_arg0 fn_0034ed38_arg0;
struct fn_0034ed38_arg0 {
    unsigned char pad_0x0[0x6];
    undefined1 field_0x6; /* +0x6 */
    unsigned char pad_0x7[0x51];
    undefined4 field_0x58; /* +0x58 */
    undefined4 field_0x5c; /* +0x5c */
};

extern int FUN_003f5f5c(void);


unsigned char FUN_0034ed38(fn_0034ed38_arg0 *param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_003f5f5c();
  if (temp_v0 != 0) {
    param_1->field_0x58 = 0;
    param_1->field_0x5c = 0;
    param_1->field_0x6 = 0;
  }
  return temp_v0 != 0;
}

} /* extern "C" */
