/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00303a5c` (_code @ 0x303a5c, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b5cd4(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} void_stack;

/* Supplied declaration required: FUN_002b5cd4. */


void FUN_00303a5c(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_002b5cd4();
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
