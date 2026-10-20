/* NON_MATCHING: romwright 0.5.0 decompilation of `asdProcessCreateSimple` (_code @ 0x14e38c, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreate(void);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Supplied declaration required: asdProcessCreate. */


void asdProcessCreateSimple(void)

{
/* irregular: 2 native warning(s); review required */
  asdProcessCreate();
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
