/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034ef48` (_code @ 0x34ef48, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0034ef48_arg0 fn_0034ef48_arg0;
struct fn_0034ef48_arg0 {
    unsigned char pad_0x0[0x6];
    undefined1 field_0x6; /* +0x6 */
    unsigned char pad_0x7[0x51];
    undefined4 field_0x58; /* +0x58 */
    undefined4 field_0x5c; /* +0x5c */
};

extern int FUN_003f6188(void);


unsigned char FUN_0034ef48(fn_0034ef48_arg0 *param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_003f6188();
  if (temp_v0 != 0) {
    param_1->field_0x58 = 0;
    param_1->field_0x5c = 0;
    param_1->field_0x6 = 0;
  }
  return temp_v0 != 0;
}
