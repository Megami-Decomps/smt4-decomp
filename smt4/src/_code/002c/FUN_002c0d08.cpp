/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c0d08` (_code @ 0x2c0d08, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bb460(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_002bb460. */
extern unsigned int nn_applet_CTR_detail_CallUtility(unsigned int, unsigned char *, unsigned int, unsigned char *, unsigned int, int *);
extern void nn_applet_CTR_detail_UnlockTransition(unsigned int);


void FUN_002c0d08(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_002bb460(0);
  nn_applet_CTR_detail_UnlockTransition(1);
  nn_applet_CTR_detail_CallUtility(4,0x0,0,0x0,0,0x0);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
