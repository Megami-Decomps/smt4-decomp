/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00291310` (_code @ 0x291310, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002d8238(void);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

/* Supplied declaration required: FUN_002d8238. */


void FUN_00291310(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_002d8238();
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
