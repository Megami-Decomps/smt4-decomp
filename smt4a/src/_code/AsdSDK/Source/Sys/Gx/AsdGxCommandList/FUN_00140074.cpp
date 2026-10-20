/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00140074` (_code @ 0x140074, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016117c(void);
int FUN_0017cff0(unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int DAT_005b3fec; /* 0x5b3fec */
extern unsigned int DAT_005b3ff8; /* 0x5b3ff8 */

/* Supplied declaration required: FUN_0016117c. */
/* Supplied declaration required: FUN_0017cff0. */


void FUN_00140074(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_0017cff0((&DAT_005b3ff8)[DAT_005b3fec ^ 1]);
  FUN_0016117c();
  return;
}

} /* extern "C" */
