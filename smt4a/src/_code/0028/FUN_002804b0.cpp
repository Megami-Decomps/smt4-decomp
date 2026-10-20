/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002804b0` (_code @ 0x2804b0, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bcfb4(void);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

/* Supplied declaration required: FUN_001bcfb4. */


void FUN_002804b0(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_001bcfb4();
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
