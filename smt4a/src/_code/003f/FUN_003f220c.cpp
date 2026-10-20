/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f220c` (_code @ 0x3f220c, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003d2150(int);
int FUN_004a99bc(unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: FUN_003d2150. */
/* Supplied declaration required: FUN_004a99bc. */


void FUN_003f220c(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_004a99bc(DAT_0057a9c8);
  FUN_003d2150(0x100026a);
  return;
}

} /* extern "C" */
