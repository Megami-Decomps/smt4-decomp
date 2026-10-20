/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038125c` (_code @ 0x38125c, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b2368(void);
int FUN_00381114(void);
int FUN_00381254(unsigned int *);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_00422110; /* 0x422110 */

/* Supplied declaration required: FUN_002b2368. */
/* Supplied declaration required: FUN_00381114. */
/* Supplied declaration required: FUN_00381254. */


void FUN_0038125c(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00422110;
  if (param_1[1] != 0) {
    FUN_00381114();
  }
  FUN_00381254(param_1);
  FUN_002b2368();
  return;
}

} /* extern "C" */
