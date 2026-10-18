/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00376f84` (_code @ 0x376f84, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_00421560; /* 0x421560 */
extern unsigned char DAT_00421584; /* 0x421584 */

/* Supplied declaration required: FUN_00376a90. */
/* Supplied declaration required: FUN_00376e8c. */


void FUN_00376f84(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00421560;
  param_1[0x16] = (unsigned int)&DAT_00421584;
  FUN_00376e8c(param_1);
  FUN_00376a90(param_1);
  return;
}
