#include "romwright_types.h"

extern "C" {

int FUN_0013c780(int);
int nw_snd_internal_FrameHeap_ClearSection(int *);
int nw_ut_FrameHeap_Free(int, int);

/* Supplied declaration required: FUN_0013c780. */
/* Supplied declaration required: nw_snd_internal_FrameHeap_ClearSection. */
/* Supplied declaration required: nw_ut_FrameHeap_Free. */


void nw_snd_internal_FrameHeap_Destroy(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  if (*param_1 != 0) {
    nw_snd_internal_FrameHeap_ClearSection(param_1);
    nw_ut_FrameHeap_Free(*param_1,3);
    FUN_0013c780(*param_1);
    *param_1 = 0;
  }
  return;
}

} /* extern "C" */
