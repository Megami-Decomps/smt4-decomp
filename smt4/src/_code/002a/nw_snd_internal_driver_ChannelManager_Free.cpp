#include "romwright_types.h"

extern "C" {

int FUN_00155634(int);
int FUN_002a3188(int, int);
int nw_ut_internal_LinkListImpl_erase_2B743C(int, int);

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
  int list = param_1 + 4;
  nw_ut_internal_LinkListImpl_erase_2B743C(list,param_2 + 0x13c);
  if (param_2 != 0) {
    FUN_00155634(param_2);
    FUN_002a3188(param_1,param_2);
    return;
  }
  return;
}

} /* extern "C" */
