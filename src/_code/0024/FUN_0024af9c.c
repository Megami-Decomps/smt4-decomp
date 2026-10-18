/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024af9c` (_code @ 0x24af9c, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_00253f24. */
/* Supplied declaration required: FUN_00253f64. */
/* Supplied declaration required: FUN_002b2520. */
/* Supplied declaration required: FUN_002c0a6c. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_0024af9c(int *param_1)

{
/* irregular: 5 native warning(s); review required */
  if (*param_1 != 0) {
    FUN_00253f64();
    if (*param_1 != 0) {
      FUN_00253f24();
      FUN_002b2520();
    }
  }
  if (param_1[5] != 0) {
    FUN_002c0a6c();
  }
  FUN_002c4360(param_1[1]);
  FUN_002c4360(param_1);
  return;
}
