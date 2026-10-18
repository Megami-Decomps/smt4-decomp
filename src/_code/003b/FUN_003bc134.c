/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bc134` (_code @ 0x3bc134, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_001a9db8. */
/* Supplied declaration required: FUN_002b2520. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_003bc134(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  *param_1 = param_2;
  FUN_002c4360(param_1[1]);
  FUN_002c4360(param_1[2]);
  FUN_001a9db8();
  FUN_002b2520(param_1);
  return;
}
