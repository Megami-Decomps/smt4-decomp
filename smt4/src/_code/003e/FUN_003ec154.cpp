/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ec154` (_code @ 0x3ec154, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c38fc(unsigned int *);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int DAT_004c6458; /* 0x4c6458 */

/* Supplied declaration required: FUN_002c38fc. */


unsigned long long FUN_003ec154(void)

{
/* irregular: 1 native warning(s); review required */
  DAT_004c6458 = 0;
  FUN_002c38fc(&DAT_004c6458);
  return 0x3574a8004c6458;
}

} /* extern "C" */
