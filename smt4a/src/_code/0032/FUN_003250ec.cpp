/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003250ec` (_code @ 0x3250ec, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_003250ec_arg0 fn_003250ec_arg0;
struct fn_003250ec_arg0 {
    unsigned char pad_0x0[0x14e8];
    undefined4 field_0x14e8; /* +0x14e8 */
    undefined4 field_0x14ec; /* +0x14ec */
    undefined4 field_0x14f0; /* +0x14f0 */
    unsigned char pad_0x14f4[0x18];
    undefined4 field_0x150c; /* +0x150c */
};

extern int FUN_00162e8c(void);


void FUN_003250ec(fn_003250ec_arg0 *param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_00162e8c();
  *(unsigned int *)(temp_v0 + 0x14e8) = 1;
  *(unsigned int *)(temp_v0 + 0x14ec) = 0;
  *(unsigned int *)(temp_v0 + 0x14f0) = 0;
  *(unsigned int *)(temp_v0 + 0x150c) = 0;
  if (param_1 != (fn_003250ec_arg0 *)0x0) {
    *(unsigned int *)(temp_v0 + 0x150c) = 1;
  }
  return;
}

} /* extern "C" */
