/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013b3f4` (_code @ 0x13b3f4, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_002c3424. */
/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */


void FUN_0013b3f4(int param_1)

{
/* irregular: 3 native warning(s); review required */
  FUN_002c38a4();
  if (*(char *)(param_1 + 0x76) != '\x02') {
    *(unsigned char *)(param_1 + 0x76) = 1;
    FUN_002c3820(param_1);
    FUN_002c3424(param_1 + 100);
    return;
  }
  *(unsigned char *)(param_1 + 0x76) = 0;
  FUN_002c3820(param_1);
  return;
}
