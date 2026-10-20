/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049706c` (_code @ 0x49706c, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001681cc(int);
int FUN_0019de98(int, unsigned int);
int FUN_0023b27c(void);
int FUN_0031f208(int);
int FUN_0031f27c(int, int);
int FUN_003343f0(int);

typedef struct fn_0049706c_arg0 fn_0049706c_arg0;
struct fn_0049706c_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x4];
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0xb2c];
    undefined4 field_0xb40; /* +0xb40 */
};

/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_0023b27c. */
/* Supplied declaration required: FUN_0031f208. */
/* Supplied declaration required: FUN_0031f27c. */
/* Supplied declaration required: FUN_003343f0. */


void FUN_0049706c(fn_0049706c_arg0 *param_1)

{
/* irregular: 6 native warning(s); review required */
  FUN_003343f0(1);
  FUN_0031f27c(0xc,0);
  if (param_1->field_0xb40 != 8) {
    FUN_0031f208(0x1c);
    FUN_0031f208(7);
    FUN_0031f208(3);
    FUN_0031f208(0xc);
    FUN_0031f208(0x10);
    if ((unsigned int)param_1->field_0xb40 < 3) {
      FUN_0031f208(0xf);
    }
  }
  else {
    FUN_0031f208(0xc);
    FUN_0031f208(7);
    FUN_0031f208(0x10);
    FUN_0031f208(0xf);
  }
  FUN_0023b27c();
  FUN_001681cc(5);
  FUN_0019de98(0,0xf4f4f4ff);
  param_1->field_0x10 = param_1->field_0x4;
  param_1->field_0x4 = 10;
  param_1->field_0x8 = 0;
  return;
}

} /* extern "C" */
