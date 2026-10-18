/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ac5d8` (_code @ 0x2ac5d8, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_00155540. */
/* Supplied declaration required: FUN_002a3428. */
/* Supplied declaration required: FUN_002b777c. */


void FUN_002ac5d8(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  FUN_002b777c(param_1 + 4,param_2 + 0x13c);
  if (param_2 != 0) {
    FUN_00155540(param_2);
    FUN_002a3428(param_1,param_2);
    return;
  }
  return;
}
