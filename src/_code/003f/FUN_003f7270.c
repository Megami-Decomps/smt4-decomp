/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f7270` (_code @ 0x3f7270, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_00420adc; /* 0x420adc */

/* Supplied declaration required: FUN_002a0fc4. */
/* Supplied declaration required: FUN_002a4528. */


void FUN_003f7270(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00420adc;
  FUN_002a0fc4(param_1);
  FUN_002a4528(param_1);
  return;
}
