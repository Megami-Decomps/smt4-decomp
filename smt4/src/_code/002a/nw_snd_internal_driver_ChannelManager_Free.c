/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_ChannelManager_Free` (_code @ 0x2ac34c, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_00155634. */
/* Supplied declaration required: FUN_002a3188. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_erase_2B743C. */


void nw_snd_internal_driver_ChannelManager_Free(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  nw_ut_internal_LinkListImpl_erase_2B743C(param_1 + 4,param_2 + 0x13c);
  if (param_2 != 0) {
    FUN_00155634(param_2);
    FUN_002a3188(param_1,param_2);
    return;
  }
  return;
}
