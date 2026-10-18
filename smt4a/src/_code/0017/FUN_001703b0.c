/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001703b0` (_code @ 0x1703b0, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_005891f4; /* 0x5891f4 */

/* Supplied declaration required: FUN_00170484. */
/* Supplied declaration required: nn_applet_CTR_detail_ReplySleepQueryToManager. */


void FUN_001703b0(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int unaff_r4;
  
  if (param_1 != 0) {
    unaff_r4 = 0;
  }
  DAT_005891f4 = 0;
  if (param_1 != 0) {
    FUN_00170484(3);
    nn_applet_CTR_detail_ReplySleepQueryToManager(unaff_r4);
    return;
  }
  return;
}
