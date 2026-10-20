/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_HardwareManager_GetOutputVolume` (_code @ 0x158eac, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(int, int);

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void nw_snd_internal_driver_HardwareManager_GetOutputVolume(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int in_fpscr;
  
  if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0xc)) {
    VectorSignedToFloat(*(int *)(param_1 + 0x10),(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(int *)(param_1 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  if (*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x1c)) {
    VectorSignedToFloat(*(int *)(param_1 + 0x20),(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(int *)(param_1 + 0x1c),(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  return;
}

} /* extern "C" */
