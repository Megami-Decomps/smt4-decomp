/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f9fdc` (_code @ 0x3f9fdc, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002e3328. */


void FUN_003f9fdc(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = param_2;
  FUN_0019a5a0(param_1[0xf]);
  FUN_0019a5a0(param_1[0x10]);
  FUN_0019a5a0(param_1[0x11]);
  FUN_002e3328(param_1);
  return;
}
