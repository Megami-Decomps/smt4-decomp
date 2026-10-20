/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a1248` (_code @ 0x2a1248, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdLoadFileAsync(void);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

/* Supplied declaration required: asdLoadFileAsync. */


void FUN_002a1248(void)

{
/* irregular: 2 native warning(s); review required */
  asdLoadFileAsync();
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
