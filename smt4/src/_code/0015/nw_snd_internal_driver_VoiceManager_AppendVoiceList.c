/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_VoiceManager_AppendVoiceList` (_code @ 0x15dbd0, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: nw_ut_internal_LinkListImpl_erase_2B743C. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


void nw_snd_internal_driver_VoiceManager_AppendVoiceList(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  nw_ut_internal_LinkListImpl_erase_2B743C(param_1 + 0x10,param_2 + 0x58);
  temp_v1 = param_1 + 8;
  if (temp_v1 != *(int *)(param_1 + 8)) {
    do {
      temp_v0 = *(int *)(temp_v1 + 4);
      if (*(int *)(temp_v0 - 0x18) <= *(int *)(param_2 + 0x40)) break;
      temp_v1 = temp_v0;
    } while (temp_v0 != *(int *)(param_1 + 8));
  }
  nw_ut_internal_LinkListImpl_insert(param_1 + 4,temp_v1,param_2 + 0x58);
  return;
}
