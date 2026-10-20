/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00351c58` (_code @ 0x351c58, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023a244(void);
int FUN_00351eb4(void);
int FUN_0035ae34(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern signed char DAT_0044e348; /* 0x44e348 */

/* Supplied declaration required: FUN_0023a244. */
/* Supplied declaration required: FUN_00351eb4. */
/* Supplied declaration required: FUN_0035ae34. */


void FUN_00351c58(void)

{
/* irregular: 3 native warning(s); review required */
  if (DAT_0044e348 != '\0') {
    FUN_0035ae34();
    DAT_0044e348 = '\0';
    FUN_0023a244();
  }
  FUN_00351eb4();
  return;
}

} /* extern "C" */
