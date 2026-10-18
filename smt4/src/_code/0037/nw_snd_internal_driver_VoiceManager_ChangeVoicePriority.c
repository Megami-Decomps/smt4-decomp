/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_VoiceManager_ChangeVoicePriority` (_code @ 0x37e748, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: nw_snd_internal_driver_VoiceManager_AppendVoiceList. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_UpdateVoicesPriority. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_erase_2B743C. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


void nw_snd_internal_driver_VoiceManager_ChangeVoicePriority(int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  
  nw_ut_internal_LinkListImpl_erase_2B743C(param_1 + 4,param_2 + 0x58);
  nw_ut_internal_LinkListImpl_insert(param_1 + 0x10,param_1 + 0x14,param_2 + 0x58);
  nw_snd_internal_driver_VoiceManager_AppendVoiceList(param_1,param_2);
  for (piVar1 = (int *)(param_2 + 0x58); (piVar1 != (int *)(param_1 + 8) && (piVar1[-6] >= 2));
      piVar1 = (int *)*piVar1) {
    if (piVar1[-6] != 0x7fff) {
      nw_snd_internal_driver_Voice_UpdateVoicesPriority(piVar1 + -0x16);
    }
  }
  return;
}
