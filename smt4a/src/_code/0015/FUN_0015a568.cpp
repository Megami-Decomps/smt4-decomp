/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015a568` (_code @ 0x15a568, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015a400(int);
int FUN_00170d8c(int, int, int, int, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_0015a400. */
/* Supplied declaration required: FUN_00170d8c. */
extern void nn_applet_CTR_detail_UnlockTransition(unsigned int);


void FUN_0015a568(void)

{
/* irregular: 3 native warning(s); review required */
  FUN_0015a400(0);
  nn_applet_CTR_detail_UnlockTransition(1);
  FUN_00170d8c(4,0,0,0,0,0);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
