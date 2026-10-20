/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00170414` (_code @ 0x170414, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018b64c(void);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern romwright_code *DAT_00589234; /* 0x589234 */
extern romwright_code *DAT_00589238; /* 0x589238 */
extern unsigned int DAT_00589274; /* 0x589274 */
extern unsigned int DAT_00589278; /* 0x589278 */

/* Supplied declaration required: FUN_0018b64c. */


void FUN_00170414(int param_1)

{
/* irregular: 3 native warning(s); review required */
  if (param_1 != 0) {
    FUN_0018b64c();
  }
  if (DAT_00589234 != (romwright_code *)0x0) {
    (*DAT_00589234)(DAT_00589274);
  }
  if (DAT_00589238 == (romwright_code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00170448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00589238)(DAT_00589278);
  return;
}

} /* extern "C" */
