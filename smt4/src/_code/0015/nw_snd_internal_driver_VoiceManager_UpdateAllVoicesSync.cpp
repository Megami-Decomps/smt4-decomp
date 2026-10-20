/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_VoiceManager_UpdateAllVoicesSync` (_code @ 0x157acc, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;


void nw_snd_internal_driver_VoiceManager_UpdateAllVoicesSync(int param_1,unsigned short param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)(param_1 + 8)) {
    do {
      piVar2 = (int *)*piVar1;
      if ((char)piVar1[-0x11] != '\0') {
        *(unsigned short *)(piVar1 + -0xe) = *(unsigned short *)(piVar1 + -0xe) | param_2;
      }
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 8));
    return;
  }
  return;
}

} /* extern "C" */
