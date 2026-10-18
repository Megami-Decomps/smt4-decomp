/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_TaskManager_WaitTask` (_code @ 0x1a5b88, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001aa14c. */
/* Supplied declaration required: nw_snd_internal_TaskManager_GetNextTask. */


void nw_snd_internal_TaskManager_WaitTask(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  
  *(unsigned char *)(param_1 + 0x28) = 0;
  while( 1 ) {
    temp_v0 = nw_snd_internal_TaskManager_GetNextTask(param_1,2,0);
    if (temp_v0 != 0) {
      return;
    }
    temp_v0 = nw_snd_internal_TaskManager_GetNextTask(param_1,1,0);
    if (temp_v0 != 0) break;
    temp_v1 = nw_snd_internal_TaskManager_GetNextTask(param_1,0);
    temp_v2 = temp_v1 == 0;
    if (temp_v2) {
      temp_v1 = (unsigned int)*(unsigned char *)(param_1 + 0x28);
    }
    if (!temp_v2 || temp_v1 != 0) {
      return;
    }
    temp_v0 = param_1 + 0x38;
    FUN_001aa14c();
    if (temp_v0 == 0) {
      return;
    }
  }
  return;
}
