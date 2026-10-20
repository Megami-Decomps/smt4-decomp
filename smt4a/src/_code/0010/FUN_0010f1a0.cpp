/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010f1a0` (_code @ 0x10f1a0, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00128588(unsigned int);
int FUN_002e6e14(unsigned int);
int FUN_002fa06c(unsigned int);
int FUN_002fa0f4(unsigned int *);

extern unsigned char DAT_0055929c; /* 0x55929c */

/* Supplied declaration required: FUN_00128588. */
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_002fa06c. */
/* Supplied declaration required: FUN_002fa0f4. */


void FUN_0010f1a0(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055929c;
  FUN_00128588(param_1[0x48]);
  FUN_002fa06c(param_1[0x48] + 0x38);
  FUN_002e6e14(param_1[0x48]);
  param_1[0x48] = 0;
  FUN_002fa0f4(param_1);
  return;
}

} /* extern "C" */
