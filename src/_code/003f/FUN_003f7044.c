/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f7044` (_code @ 0x3f7044, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_00420e94; /* 0x420e94 */

/* Supplied declaration required: FUN_002a0d24. */
/* Supplied declaration required: FUN_002a4288. */


void FUN_003f7044(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00420e94;
  FUN_002a0d24(param_1);
  FUN_002a4288(param_1);
  return;
}
