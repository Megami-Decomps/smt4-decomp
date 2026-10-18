/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_applet_CTR_ReplySleepQuery` (_code @ 0x1472d0, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_00170484. */
/* Supplied declaration required: nn_applet_CTR_detail_ReplySleepQueryToManager. */


void nn_applet_CTR_ReplySleepQuery(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if ((param_1 != 0) && (param_1 != 1)) {
    if (param_1 == 2) {
      FUN_00170484(1);
      return;
    }
    return;
  }
  FUN_00170484();
  nn_applet_CTR_detail_ReplySleepQueryToManager(param_1);
  return;
}
