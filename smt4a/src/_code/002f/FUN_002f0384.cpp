/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f0384` (_code @ 0x2f0384, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00240170(void);
int FUN_002efd90(void);
int FUN_002efdc0(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int DAT_00588fd4; /* 0x588fd4 */

/* Supplied declaration required: FUN_00240170. */
/* Supplied declaration required: FUN_002efd90. */
/* Supplied declaration required: FUN_002efdc0. */


void FUN_002f0384(int param_1)

{
/* irregular: 3 native warning(s); review required */
  if (*(char *)(DAT_00588fd4 + 0x2018) != '\x03' && *(char *)(DAT_00588fd4 + 0x2018) != '\n') {
    return;
  }
  if (param_1 != 0) {
    FUN_00240170();
  }
  else {
    FUN_002efd90();
  }
  FUN_002efdc0();
  return;
}

} /* extern "C" */
