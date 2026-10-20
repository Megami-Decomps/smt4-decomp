/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bfc90` (_code @ 0x3bfc90, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00387ad8(...);

typedef struct fn_003bfc90_arg0 fn_003bfc90_arg0;
struct fn_003bfc90_arg0 {
    unsigned char pad_0x0[0xec];
    undefined4 field_0xec; /* +0xec */
    unsigned char pad_0xf0[0x8];
    undefined4 field_0xf8; /* +0xf8 */
    unsigned char pad_0xfc[0x16];
    undefined1 field_0x112; /* +0x112 */
    unsigned char pad_0x113[0x1];
    undefined1 field_0x114; /* +0x114 */
};

/* Supplied declaration required: FUN_00387ad8. */


unsigned int FUN_003bfc90(fn_003bfc90_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  fn_003bfc90_arg0 *pfVar1;
  unsigned int temp_v0;
  
  temp_v0 = 0;
  pfVar1 = param_1;
  FUN_00387ad8(param_1,0);
  if (pfVar1 != (fn_003bfc90_arg0 *)0x0) {
    param_1->field_0xec = 3;
    param_1->field_0xf8 = 4;
    param_1->field_0x112 = 1;
    temp_v0 = 3;
    param_1->field_0x114 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
