/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_ChannelManager_Alloc` (_code @ 0x37e05c, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00380138(void);
extern int nw_snd_internal_PoolImpl_AllocImpl(void);
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


int nw_snd_internal_driver_ChannelManager_Alloc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = nw_snd_internal_PoolImpl_AllocImpl();
  if (temp_v0 == 0) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = FUN_00380138();
  }
  nw_ut_internal_LinkListImpl_insert(param_1 + 4,param_1 + 8,temp_v0 + 0x13c);
  return temp_v0;
}
