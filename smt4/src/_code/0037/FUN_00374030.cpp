/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00374030` (_code @ 0x374030, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdGfxCmdBufferForward8(void);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Supplied declaration required: asdGfxCmdBufferForward8. */


void FUN_00374030(void)

{
/* irregular: 2 native warning(s); review required */
  asdGfxCmdBufferForward8();
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
