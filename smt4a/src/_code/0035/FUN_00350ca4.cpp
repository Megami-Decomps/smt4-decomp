/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00350ca4` (_code @ 0x350ca4, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001800b8(void);
int FUN_0019a5a0(...);
int FUN_002e3328(void);
int FUN_00412f9c(void);
int FUN_0041302c(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_001800b8. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: FUN_00412f9c. */
/* Supplied declaration required: FUN_0041302c. */


void FUN_00350ca4(int *param_1)

{
/* irregular: 5 native warning(s); review required */
  if (*param_1 != 0) {
    FUN_00412f9c();
    if (*param_1 != 0) {
      FUN_0041302c();
      FUN_002e3328();
    }
  }
  if (param_1[5] != 0) {
    FUN_001800b8();
  }
  FUN_0019a5a0(param_1[1]);
  FUN_0019a5a0(param_1);
  return;
}

} /* extern "C" */
