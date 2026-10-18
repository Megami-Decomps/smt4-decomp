/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003962b8` (_code @ 0x3962b8, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_0042231c; /* 0x42231c */

/* Supplied declaration required: FUN_00152bec. */
/* Supplied declaration required: FUN_002a775c. */
/* Supplied declaration required: FUN_002b2368. */


void FUN_003962b8(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0042231c;
  if ((int *)param_1[0x1a] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0x1a] + 4))();
    param_1[0x1a] = 0;
  }
  if (param_1[0x1b] != 0) {
    FUN_00152bec();
    FUN_002a775c(param_1[0x1b]);
    param_1[0x1b] = 0;
  }
  FUN_002b2368(param_1);
  return;
}
