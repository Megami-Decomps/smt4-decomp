/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018003c` (_code @ 0x18003c, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e3140(void);
int software_interrupt(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int *DAT_005b402c; /* 0x5b402c */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002e3140. */


void FUN_0018003c(void)

{
/* irregular: 2 native warning(s); review required */
  software_interrupt(0x24);
  if (*DAT_005b402c < 0) {
    FUN_002e3140();
    return;
  }
  return;
}

} /* extern "C" */
