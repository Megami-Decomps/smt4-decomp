/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003efa10` (_code @ 0x3efa10, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int DAT_004e629c; /* 0x4e629c */

/* Supplied declaration required: FUN_002c3b00. */


unsigned long long FUN_003efa10(void)

{
/* irregular: 1 native warning(s); review required */
  DAT_004e629c = 0;
  FUN_002c3b00(&DAT_004e629c);
  return 0x3576b8004e629c;
}
