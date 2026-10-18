/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00351ca0` (_code @ 0x351ca0, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern signed char DAT_0044e348; /* 0x44e348 */

/* Supplied declaration required: FUN_0023a244. */
/* Supplied declaration required: FUN_00351f7c. */
/* Supplied declaration required: FUN_0035ae34. */


void FUN_00351ca0(void)

{
/* irregular: 3 native warning(s); review required */
  if (DAT_0044e348 != '\0') {
    FUN_0035ae34();
    DAT_0044e348 = '\0';
    FUN_0023a244();
  }
  FUN_00351f7c();
  return;
}
