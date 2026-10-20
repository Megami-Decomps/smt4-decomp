#include "romwright_types.h"

extern "C" {

int nw_snd_SoundPlayer_detail_SortPriorityList(int, int *);

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: nw_snd_SoundPlayer_detail_SortPriorityList. */


void nw_snd_internal_BasicSound_SetPlayerPriority(int *param_1,unsigned char param_2)

{
/* irregular: 3 native warning(s); review required */
  *(unsigned char *)(param_1 + 0x26) = param_2;
  if (param_1[4] != 0) {
    nw_snd_SoundPlayer_detail_SortPriorityList(param_1[4],param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0037998c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(*param_1 + 0x24))(param_1);
  return;
}

} /* extern "C" */
