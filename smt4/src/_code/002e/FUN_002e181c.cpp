/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e181c` (_code @ 0x2e181c, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0020ffe8(unsigned int, int);
int FUN_00294e18(int);
int FUN_002d9208(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0020ffe8. */
/* Supplied declaration required: FUN_00294e18. */
/* Supplied declaration required: FUN_002d9208. */


void FUN_002e181c(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  FUN_00294e18(0);
  param_1[6] = 0x3c449ba6;
  param_1[4] = 0x43af0000;
  *param_1 = 0x3f99999a;
  param_1[1] = 0x40a9999a;
  param_1[2] = 0x3f000000;
  param_1[10] = 0;
  if (param_1[9] != 0) {
    param_1[9] = 0;
    FUN_0020ffe8(param_1[7],0);
  }
  FUN_002d9208();
  return;
}

} /* extern "C" */
