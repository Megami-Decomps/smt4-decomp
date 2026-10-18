/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00351eb0` (_code @ 0x351eb0, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern signed char DAT_0044e348; /* 0x44e348 */

/* Supplied declaration required: FUN_0023a3dc. */
/* Supplied declaration required: FUN_0035218c. */
/* Supplied declaration required: FUN_0035b044. */


void FUN_00351eb0(void)

{
/* irregular: 3 native warning(s); review required */
  if (DAT_0044e348 != '\0') {
    FUN_0035b044();
    DAT_0044e348 = '\0';
    FUN_0023a3dc();
  }
  FUN_0035218c();
  return;
}
