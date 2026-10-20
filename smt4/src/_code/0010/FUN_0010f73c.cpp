/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010f73c` (_code @ 0x10f73c, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011b9b0(void);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

/* Supplied declaration required: FUN_0011b9b0. */


void FUN_0010f73c(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_0011b9b0();
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
