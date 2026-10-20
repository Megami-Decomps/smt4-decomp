/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_FrameHeap_SaveState` (_code @ 0x1313e4, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_ut_FrameHeap_FreeByState(unsigned int, int);

extern int nw_snd_internal_FrameHeap_NewSection(unsigned int *);
/* Supplied declaration required: nw_ut_FrameHeap_FreeByState. */
extern int nw_ut_FrameHeap_RecordState(unsigned int, unsigned int);


int nw_snd_internal_FrameHeap_SaveState(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = nw_ut_FrameHeap_RecordState(*param_1,param_1[1]);
  if (temp_v0 == 0) {
    temp_v0 = -1;
  }
  else {
    temp_v0 = nw_snd_internal_FrameHeap_NewSection(param_1);
    if (temp_v0 != 0) {
      temp_v0 = param_1[1] - 1;
    }
    else {
      nw_ut_FrameHeap_FreeByState(*param_1,0);
      temp_v0 = -1;
    }
  }
  return temp_v0;
}

} /* extern "C" */
